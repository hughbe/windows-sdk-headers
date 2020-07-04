// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Perception.Spatial.Surfaces.2.h"
#include "winrt/Windows.Perception.Spatial.h"

namespace winrt::impl {

template <typename D> GUID consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo<D>::Id() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo<D>::UpdateTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo)->get_UpdateTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingOrientedBox> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo<D>::TryGetBounds(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingOrientedBox> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo)->TryGetBounds(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo<D>::TryComputeLatestMeshAsync(double maxTrianglesPerCubicMeter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo)->TryComputeLatestMeshAsync(maxTrianglesPerCubicMeter, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo<D>::TryComputeLatestMeshAsync(double maxTrianglesPerCubicMeter, Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo)->TryComputeLatestMeshWithOptionsAsync(maxTrianglesPerCubicMeter, get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh<D>::SurfaceInfo() const
{
    Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh)->get_SurfaceInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh)->get_CoordinateSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh<D>::TriangleIndices() const
{
    Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh)->get_TriangleIndices(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh<D>::VertexPositions() const
{
    Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh)->get_VertexPositions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh<D>::VertexPositionScale() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh)->get_VertexPositionScale(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh<D>::VertexNormals() const
{
    Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh)->get_VertexNormals(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer<D>::Format() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer)->get_Format(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer<D>::Stride() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer)->get_Stride(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer<D>::ElementCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer)->get_ElementCount(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::VertexPositionFormat() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->get_VertexPositionFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::VertexPositionFormat(Windows::Graphics::DirectX::DirectXPixelFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->put_VertexPositionFormat(get_abi(value)));
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::TriangleIndexFormat() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->get_TriangleIndexFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::TriangleIndexFormat(Windows::Graphics::DirectX::DirectXPixelFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->put_TriangleIndexFormat(get_abi(value)));
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::VertexNormalFormat() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->get_VertexNormalFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::VertexNormalFormat(Windows::Graphics::DirectX::DirectXPixelFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->put_VertexNormalFormat(get_abi(value)));
}

template <typename D> bool consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::IncludeVertexNormals() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->get_IncludeVertexNormals(&value));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>::IncludeVertexNormals(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions)->put_IncludeVertexNormals(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics<D>::SupportedVertexPositionFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics)->get_SupportedVertexPositionFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics<D>::SupportedTriangleIndexFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics)->get_SupportedTriangleIndexFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics<D>::SupportedVertexNormalFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics)->get_SupportedVertexNormalFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver<D>::GetObservedSurfaces() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver)->GetObservedSurfaces(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver<D>::SetBoundingVolume(Windows::Perception::Spatial::SpatialBoundingVolume const& bounds) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver)->SetBoundingVolume(get_abi(bounds)));
}

template <typename D> void consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver<D>::SetBoundingVolumes(param::iterable<Windows::Perception::Spatial::SpatialBoundingVolume> const& bounds) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver)->SetBoundingVolumes(get_abi(bounds)));
}

template <typename D> event_token consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver<D>::ObservedSurfacesChanged(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver)->add_ObservedSurfacesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver<D>::ObservedSurfacesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>(this, &abi_t<Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>::remove_ObservedSurfacesChanged, ObservedSurfacesChanged(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver<D>::ObservedSurfacesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver)->remove_ObservedSurfacesChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics2<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2)->IsSupported(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo>
{
    HRESULT __stdcall get_Id(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UpdateTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().UpdateTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetBounds(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingOrientedBox>>(this->shim().TryGetBounds(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryComputeLatestMeshAsync(double maxTrianglesPerCubicMeter, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh>>(this->shim().TryComputeLatestMeshAsync(maxTrianglesPerCubicMeter));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryComputeLatestMeshWithOptionsAsync(double maxTrianglesPerCubicMeter, void* options, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh>>(this->shim().TryComputeLatestMeshAsync(maxTrianglesPerCubicMeter, *reinterpret_cast<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh>
{
    HRESULT __stdcall get_SurfaceInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo>(this->shim().SurfaceInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSystem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::Spatial::SpatialCoordinateSystem>(this->shim().CoordinateSystem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TriangleIndices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer>(this->shim().TriangleIndices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VertexPositions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer>(this->shim().VertexPositions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VertexPositionScale(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().VertexPositionScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VertexNormals(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer>(this->shim().VertexNormals());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer>
{
    HRESULT __stdcall get_Format(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::DirectXPixelFormat>(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Stride(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Stride());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ElementCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ElementCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions>
{
    HRESULT __stdcall get_VertexPositionFormat(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::DirectXPixelFormat>(this->shim().VertexPositionFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VertexPositionFormat(Windows::Graphics::DirectX::DirectXPixelFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexPositionFormat(*reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TriangleIndexFormat(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::DirectXPixelFormat>(this->shim().TriangleIndexFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TriangleIndexFormat(Windows::Graphics::DirectX::DirectXPixelFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriangleIndexFormat(*reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VertexNormalFormat(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::DirectXPixelFormat>(this->shim().VertexNormalFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VertexNormalFormat(Windows::Graphics::DirectX::DirectXPixelFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexNormalFormat(*reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeVertexNormals(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeVertexNormals());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeVertexNormals(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeVertexNormals(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>
{
    HRESULT __stdcall get_SupportedVertexPositionFormats(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat>>(this->shim().SupportedVertexPositionFormats());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedTriangleIndexFormats(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat>>(this->shim().SupportedTriangleIndexFormats());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVertexNormalFormats(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat>>(this->shim().SupportedVertexNormalFormats());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>
{
    HRESULT __stdcall GetObservedSurfaces(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<GUID, Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo>>(this->shim().GetObservedSurfaces());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetBoundingVolume(void* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBoundingVolume(*reinterpret_cast<Windows::Perception::Spatial::SpatialBoundingVolume const*>(&bounds));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetBoundingVolumes(void* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBoundingVolumes(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Perception::Spatial::SpatialBoundingVolume> const*>(&bounds));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ObservedSurfacesChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ObservedSurfacesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ObservedSurfacesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ObservedSurfacesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>
{
    HRESULT __stdcall RequestAccessAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2> : produce_base<D, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2>
{
    HRESULT __stdcall IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Surfaces {

inline SpatialSurfaceMeshOptions::SpatialSurfaceMeshOptions() :
    SpatialSurfaceMeshOptions(get_activation_factory<SpatialSurfaceMeshOptions>().ActivateInstance<SpatialSurfaceMeshOptions>())
{}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SpatialSurfaceMeshOptions::SupportedVertexPositionFormats()
{
    return get_activation_factory<SpatialSurfaceMeshOptions, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>().SupportedVertexPositionFormats();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SpatialSurfaceMeshOptions::SupportedTriangleIndexFormats()
{
    return get_activation_factory<SpatialSurfaceMeshOptions, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>().SupportedTriangleIndexFormats();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SpatialSurfaceMeshOptions::SupportedVertexNormalFormats()
{
    return get_activation_factory<SpatialSurfaceMeshOptions, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>().SupportedVertexNormalFormats();
}

inline SpatialSurfaceObserver::SpatialSurfaceObserver() :
    SpatialSurfaceObserver(get_activation_factory<SpatialSurfaceObserver>().ActivateInstance<SpatialSurfaceObserver>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> SpatialSurfaceObserver::RequestAccessAsync()
{
    return get_activation_factory<SpatialSurfaceObserver, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>().RequestAccessAsync();
}

inline bool SpatialSurfaceObserver::IsSupported()
{
    return get_activation_factory<SpatialSurfaceObserver, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver> {};

}

WINRT_WARNING_POP
