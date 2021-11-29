
//---------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//---------------------------------------------------------------------------

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <windows.ui.composition.h>
#include <sdkddkver.h>

#ifndef BUILD_WINDOWS
namespace ABI {
#endif
namespace Windows {
namespace UI {
namespace Composition {

typedef interface ICompositionSurface       ICompositionSurface;
typedef interface ICompositorInterop        ICompositorInterop;

#undef INTERFACE
#define INTERFACE ICompositorInterop
DECLARE_INTERFACE_IID_(ICompositorInterop, IUnknown, "190045EC-FA90-4755-91A7-572D64CE6E1C")
{
    STDMETHOD(CreateCompositionSurfaceForHandle)(
        _In_ HANDLE hDxgiSwapChain,
        _COM_Outptr_ ICompositionSurface** value
        ) PURE;

    STDMETHOD(CreateCompositionSurfaceForSwapChain)(
        _In_ IUnknown * pDxgiSwapChain,
        _COM_Outptr_ ICompositionSurface** value
        ) PURE;
};

} // namespace Composition
} // namespace UI
} // namespace Windows
#ifndef BUILD_WINDOWS
} // namespace ABI 
#endif
