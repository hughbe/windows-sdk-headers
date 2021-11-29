

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __windows2Egraphics2Edirectx_h__
#define __windows2Egraphics2Edirectx_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Egraphics2Edirectx_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat
    {
        DirectXPixelFormat_Unknown	= 0,
        DirectXPixelFormat_R32G32B32A32Typeless	= 1,
        DirectXPixelFormat_R32G32B32A32Float	= 2,
        DirectXPixelFormat_R32G32B32A32UInt	= 3,
        DirectXPixelFormat_R32G32B32A32Int	= 4,
        DirectXPixelFormat_R32G32B32Typeless	= 5,
        DirectXPixelFormat_R32G32B32Float	= 6,
        DirectXPixelFormat_R32G32B32UInt	= 7,
        DirectXPixelFormat_R32G32B32Int	= 8,
        DirectXPixelFormat_R16G16B16A16Typeless	= 9,
        DirectXPixelFormat_R16G16B16A16Float	= 10,
        DirectXPixelFormat_R16G16B16A16UIntNormalized	= 11,
        DirectXPixelFormat_R16G16B16A16UInt	= 12,
        DirectXPixelFormat_R16G16B16A16IntNormalized	= 13,
        DirectXPixelFormat_R16G16B16A16Int	= 14,
        DirectXPixelFormat_R32G32Typeless	= 15,
        DirectXPixelFormat_R32G32Float	= 16,
        DirectXPixelFormat_R32G32UInt	= 17,
        DirectXPixelFormat_R32G32Int	= 18,
        DirectXPixelFormat_R32G8X24Typeless	= 19,
        DirectXPixelFormat_D32FloatS8X24UInt	= 20,
        DirectXPixelFormat_R32FloatX8X24Typeless	= 21,
        DirectXPixelFormat_X32TypelessG8X24UInt	= 22,
        DirectXPixelFormat_R10G10B10A2Typeless	= 23,
        DirectXPixelFormat_R10G10B10A2UIntNormalized	= 24,
        DirectXPixelFormat_R10G10B10A2UInt	= 25,
        DirectXPixelFormat_R11G11B10Float	= 26,
        DirectXPixelFormat_R8G8B8A8Typeless	= 27,
        DirectXPixelFormat_R8G8B8A8UIntNormalized	= 28,
        DirectXPixelFormat_R8G8B8A8UIntNormalizedSrgb	= 29,
        DirectXPixelFormat_R8G8B8A8UInt	= 30,
        DirectXPixelFormat_R8G8B8A8IntNormalized	= 31,
        DirectXPixelFormat_R8G8B8A8Int	= 32,
        DirectXPixelFormat_R16G16Typeless	= 33,
        DirectXPixelFormat_R16G16Float	= 34,
        DirectXPixelFormat_R16G16UIntNormalized	= 35,
        DirectXPixelFormat_R16G16UInt	= 36,
        DirectXPixelFormat_R16G16IntNormalized	= 37,
        DirectXPixelFormat_R16G16Int	= 38,
        DirectXPixelFormat_R32Typeless	= 39,
        DirectXPixelFormat_D32Float	= 40,
        DirectXPixelFormat_R32Float	= 41,
        DirectXPixelFormat_R32UInt	= 42,
        DirectXPixelFormat_R32Int	= 43,
        DirectXPixelFormat_R24G8Typeless	= 44,
        DirectXPixelFormat_D24UIntNormalizedS8UInt	= 45,
        DirectXPixelFormat_R24UIntNormalizedX8Typeless	= 46,
        DirectXPixelFormat_X24TypelessG8UInt	= 47,
        DirectXPixelFormat_R8G8Typeless	= 48,
        DirectXPixelFormat_R8G8UIntNormalized	= 49,
        DirectXPixelFormat_R8G8UInt	= 50,
        DirectXPixelFormat_R8G8IntNormalized	= 51,
        DirectXPixelFormat_R8G8Int	= 52,
        DirectXPixelFormat_R16Typeless	= 53,
        DirectXPixelFormat_R16Float	= 54,
        DirectXPixelFormat_D16UIntNormalized	= 55,
        DirectXPixelFormat_R16UIntNormalized	= 56,
        DirectXPixelFormat_R16UInt	= 57,
        DirectXPixelFormat_R16IntNormalized	= 58,
        DirectXPixelFormat_R16Int	= 59,
        DirectXPixelFormat_R8Typeless	= 60,
        DirectXPixelFormat_R8UIntNormalized	= 61,
        DirectXPixelFormat_R8UInt	= 62,
        DirectXPixelFormat_R8IntNormalized	= 63,
        DirectXPixelFormat_R8Int	= 64,
        DirectXPixelFormat_A8UIntNormalized	= 65,
        DirectXPixelFormat_R1UIntNormalized	= 66,
        DirectXPixelFormat_R9G9B9E5SharedExponent	= 67,
        DirectXPixelFormat_R8G8B8G8UIntNormalized	= 68,
        DirectXPixelFormat_G8R8G8B8UIntNormalized	= 69,
        DirectXPixelFormat_BC1Typeless	= 70,
        DirectXPixelFormat_BC1UIntNormalized	= 71,
        DirectXPixelFormat_BC1UIntNormalizedSrgb	= 72,
        DirectXPixelFormat_BC2Typeless	= 73,
        DirectXPixelFormat_BC2UIntNormalized	= 74,
        DirectXPixelFormat_BC2UIntNormalizedSrgb	= 75,
        DirectXPixelFormat_BC3Typeless	= 76,
        DirectXPixelFormat_BC3UIntNormalized	= 77,
        DirectXPixelFormat_BC3UIntNormalizedSrgb	= 78,
        DirectXPixelFormat_BC4Typeless	= 79,
        DirectXPixelFormat_BC4UIntNormalized	= 80,
        DirectXPixelFormat_BC4IntNormalized	= 81,
        DirectXPixelFormat_BC5Typeless	= 82,
        DirectXPixelFormat_BC5UIntNormalized	= 83,
        DirectXPixelFormat_BC5IntNormalized	= 84,
        DirectXPixelFormat_B5G6R5UIntNormalized	= 85,
        DirectXPixelFormat_B5G5R5A1UIntNormalized	= 86,
        DirectXPixelFormat_B8G8R8A8UIntNormalized	= 87,
        DirectXPixelFormat_B8G8R8X8UIntNormalized	= 88,
        DirectXPixelFormat_R10G10B10XRBiasA2UIntNormalized	= 89,
        DirectXPixelFormat_B8G8R8A8Typeless	= 90,
        DirectXPixelFormat_B8G8R8A8UIntNormalizedSrgb	= 91,
        DirectXPixelFormat_B8G8R8X8Typeless	= 92,
        DirectXPixelFormat_B8G8R8X8UIntNormalizedSrgb	= 93,
        DirectXPixelFormat_BC6HTypeless	= 94,
        DirectXPixelFormat_BC6H16UnsignedFloat	= 95,
        DirectXPixelFormat_BC6H16Float	= 96,
        DirectXPixelFormat_BC7Typeless	= 97,
        DirectXPixelFormat_BC7UIntNormalized	= 98,
        DirectXPixelFormat_BC7UIntNormalizedSrgb	= 99,
        DirectXPixelFormat_Ayuv	= 100,
        DirectXPixelFormat_Y410	= 101,
        DirectXPixelFormat_Y416	= 102,
        DirectXPixelFormat_NV12	= 103,
        DirectXPixelFormat_P010	= 104,
        DirectXPixelFormat_P016	= 105,
        DirectXPixelFormat_Opaque420	= 106,
        DirectXPixelFormat_Yuy2	= 107,
        DirectXPixelFormat_Y210	= 108,
        DirectXPixelFormat_Y216	= 109,
        DirectXPixelFormat_NV11	= 110,
        DirectXPixelFormat_AI44	= 111,
        DirectXPixelFormat_IA44	= 112,
        DirectXPixelFormat_P8	= 113,
        DirectXPixelFormat_A8P8	= 114,
        DirectXPixelFormat_B4G4R4A4UIntNormalized	= 115,
        DirectXPixelFormat_P208	= 130,
        DirectXPixelFormat_V208	= 131,
        DirectXPixelFormat_V408	= 132
    } ;
#endif /* end if !defined(__cplusplus) */

#endif


/* interface __MIDL_itf_windows2Egraphics2Edirectx_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                
                typedef enum DirectXPixelFormat DirectXPixelFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                
                /* [v1_enum] */ 
                enum DirectXPixelFormat
                    {
                        DirectXPixelFormat_Unknown	= 0,
                        DirectXPixelFormat_R32G32B32A32Typeless	= 1,
                        DirectXPixelFormat_R32G32B32A32Float	= 2,
                        DirectXPixelFormat_R32G32B32A32UInt	= 3,
                        DirectXPixelFormat_R32G32B32A32Int	= 4,
                        DirectXPixelFormat_R32G32B32Typeless	= 5,
                        DirectXPixelFormat_R32G32B32Float	= 6,
                        DirectXPixelFormat_R32G32B32UInt	= 7,
                        DirectXPixelFormat_R32G32B32Int	= 8,
                        DirectXPixelFormat_R16G16B16A16Typeless	= 9,
                        DirectXPixelFormat_R16G16B16A16Float	= 10,
                        DirectXPixelFormat_R16G16B16A16UIntNormalized	= 11,
                        DirectXPixelFormat_R16G16B16A16UInt	= 12,
                        DirectXPixelFormat_R16G16B16A16IntNormalized	= 13,
                        DirectXPixelFormat_R16G16B16A16Int	= 14,
                        DirectXPixelFormat_R32G32Typeless	= 15,
                        DirectXPixelFormat_R32G32Float	= 16,
                        DirectXPixelFormat_R32G32UInt	= 17,
                        DirectXPixelFormat_R32G32Int	= 18,
                        DirectXPixelFormat_R32G8X24Typeless	= 19,
                        DirectXPixelFormat_D32FloatS8X24UInt	= 20,
                        DirectXPixelFormat_R32FloatX8X24Typeless	= 21,
                        DirectXPixelFormat_X32TypelessG8X24UInt	= 22,
                        DirectXPixelFormat_R10G10B10A2Typeless	= 23,
                        DirectXPixelFormat_R10G10B10A2UIntNormalized	= 24,
                        DirectXPixelFormat_R10G10B10A2UInt	= 25,
                        DirectXPixelFormat_R11G11B10Float	= 26,
                        DirectXPixelFormat_R8G8B8A8Typeless	= 27,
                        DirectXPixelFormat_R8G8B8A8UIntNormalized	= 28,
                        DirectXPixelFormat_R8G8B8A8UIntNormalizedSrgb	= 29,
                        DirectXPixelFormat_R8G8B8A8UInt	= 30,
                        DirectXPixelFormat_R8G8B8A8IntNormalized	= 31,
                        DirectXPixelFormat_R8G8B8A8Int	= 32,
                        DirectXPixelFormat_R16G16Typeless	= 33,
                        DirectXPixelFormat_R16G16Float	= 34,
                        DirectXPixelFormat_R16G16UIntNormalized	= 35,
                        DirectXPixelFormat_R16G16UInt	= 36,
                        DirectXPixelFormat_R16G16IntNormalized	= 37,
                        DirectXPixelFormat_R16G16Int	= 38,
                        DirectXPixelFormat_R32Typeless	= 39,
                        DirectXPixelFormat_D32Float	= 40,
                        DirectXPixelFormat_R32Float	= 41,
                        DirectXPixelFormat_R32UInt	= 42,
                        DirectXPixelFormat_R32Int	= 43,
                        DirectXPixelFormat_R24G8Typeless	= 44,
                        DirectXPixelFormat_D24UIntNormalizedS8UInt	= 45,
                        DirectXPixelFormat_R24UIntNormalizedX8Typeless	= 46,
                        DirectXPixelFormat_X24TypelessG8UInt	= 47,
                        DirectXPixelFormat_R8G8Typeless	= 48,
                        DirectXPixelFormat_R8G8UIntNormalized	= 49,
                        DirectXPixelFormat_R8G8UInt	= 50,
                        DirectXPixelFormat_R8G8IntNormalized	= 51,
                        DirectXPixelFormat_R8G8Int	= 52,
                        DirectXPixelFormat_R16Typeless	= 53,
                        DirectXPixelFormat_R16Float	= 54,
                        DirectXPixelFormat_D16UIntNormalized	= 55,
                        DirectXPixelFormat_R16UIntNormalized	= 56,
                        DirectXPixelFormat_R16UInt	= 57,
                        DirectXPixelFormat_R16IntNormalized	= 58,
                        DirectXPixelFormat_R16Int	= 59,
                        DirectXPixelFormat_R8Typeless	= 60,
                        DirectXPixelFormat_R8UIntNormalized	= 61,
                        DirectXPixelFormat_R8UInt	= 62,
                        DirectXPixelFormat_R8IntNormalized	= 63,
                        DirectXPixelFormat_R8Int	= 64,
                        DirectXPixelFormat_A8UIntNormalized	= 65,
                        DirectXPixelFormat_R1UIntNormalized	= 66,
                        DirectXPixelFormat_R9G9B9E5SharedExponent	= 67,
                        DirectXPixelFormat_R8G8B8G8UIntNormalized	= 68,
                        DirectXPixelFormat_G8R8G8B8UIntNormalized	= 69,
                        DirectXPixelFormat_BC1Typeless	= 70,
                        DirectXPixelFormat_BC1UIntNormalized	= 71,
                        DirectXPixelFormat_BC1UIntNormalizedSrgb	= 72,
                        DirectXPixelFormat_BC2Typeless	= 73,
                        DirectXPixelFormat_BC2UIntNormalized	= 74,
                        DirectXPixelFormat_BC2UIntNormalizedSrgb	= 75,
                        DirectXPixelFormat_BC3Typeless	= 76,
                        DirectXPixelFormat_BC3UIntNormalized	= 77,
                        DirectXPixelFormat_BC3UIntNormalizedSrgb	= 78,
                        DirectXPixelFormat_BC4Typeless	= 79,
                        DirectXPixelFormat_BC4UIntNormalized	= 80,
                        DirectXPixelFormat_BC4IntNormalized	= 81,
                        DirectXPixelFormat_BC5Typeless	= 82,
                        DirectXPixelFormat_BC5UIntNormalized	= 83,
                        DirectXPixelFormat_BC5IntNormalized	= 84,
                        DirectXPixelFormat_B5G6R5UIntNormalized	= 85,
                        DirectXPixelFormat_B5G5R5A1UIntNormalized	= 86,
                        DirectXPixelFormat_B8G8R8A8UIntNormalized	= 87,
                        DirectXPixelFormat_B8G8R8X8UIntNormalized	= 88,
                        DirectXPixelFormat_R10G10B10XRBiasA2UIntNormalized	= 89,
                        DirectXPixelFormat_B8G8R8A8Typeless	= 90,
                        DirectXPixelFormat_B8G8R8A8UIntNormalizedSrgb	= 91,
                        DirectXPixelFormat_B8G8R8X8Typeless	= 92,
                        DirectXPixelFormat_B8G8R8X8UIntNormalizedSrgb	= 93,
                        DirectXPixelFormat_BC6HTypeless	= 94,
                        DirectXPixelFormat_BC6H16UnsignedFloat	= 95,
                        DirectXPixelFormat_BC6H16Float	= 96,
                        DirectXPixelFormat_BC7Typeless	= 97,
                        DirectXPixelFormat_BC7UIntNormalized	= 98,
                        DirectXPixelFormat_BC7UIntNormalizedSrgb	= 99,
                        DirectXPixelFormat_Ayuv	= 100,
                        DirectXPixelFormat_Y410	= 101,
                        DirectXPixelFormat_Y416	= 102,
                        DirectXPixelFormat_NV12	= 103,
                        DirectXPixelFormat_P010	= 104,
                        DirectXPixelFormat_P016	= 105,
                        DirectXPixelFormat_Opaque420	= 106,
                        DirectXPixelFormat_Yuy2	= 107,
                        DirectXPixelFormat_Y210	= 108,
                        DirectXPixelFormat_Y216	= 109,
                        DirectXPixelFormat_NV11	= 110,
                        DirectXPixelFormat_AI44	= 111,
                        DirectXPixelFormat_IA44	= 112,
                        DirectXPixelFormat_P8	= 113,
                        DirectXPixelFormat_A8P8	= 114,
                        DirectXPixelFormat_B4G4R4A4UIntNormalized	= 115,
                        DirectXPixelFormat_P208	= 130,
                        DirectXPixelFormat_V208	= 131,
                        DirectXPixelFormat_V408	= 132
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Edirectx_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Edirectx_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


