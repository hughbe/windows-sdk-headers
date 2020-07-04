// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_DirectX_Direct3D11_2_H
#define WINRT_Windows_Graphics_DirectX_Direct3D11_2_H
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct Direct3DMultisampleDescription
    {
        int32_t Count;
        int32_t Quality;
    };
    inline bool operator==(Direct3DMultisampleDescription const& left, Direct3DMultisampleDescription const& right) noexcept
    {
        return left.Count == right.Count && left.Quality == right.Quality;
    }
    inline bool operator!=(Direct3DMultisampleDescription const& left, Direct3DMultisampleDescription const& right) noexcept
    {
        return !(left == right);
    }
    struct Direct3DSurfaceDescription
    {
        int32_t Width;
        int32_t Height;
        Windows::Graphics::DirectX::DirectXPixelFormat Format;
        Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription MultisampleDescription;
    };
    inline bool operator==(Direct3DSurfaceDescription const& left, Direct3DSurfaceDescription const& right) noexcept
    {
        return left.Width == right.Width && left.Height == right.Height && left.Format == right.Format && left.MultisampleDescription == right.MultisampleDescription;
    }
    inline bool operator!=(Direct3DSurfaceDescription const& left, Direct3DSurfaceDescription const& right) noexcept
    {
        return !(left == right);
    }
}
#endif
