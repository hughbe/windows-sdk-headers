/*==========================================================================;
 *
 *  Copyright (C) Microsoft Corporation.  All Rights Reserved.
 *
 *  Content: DXGI Basic Device Driver Interface Definitions
 *
 ***************************************************************************/

#ifndef _DXGIDDI_H
#define _DXGIDDI_H
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)



#include "dxgitype.h"


//--------------------------------------------------------------------------------------------------------
// DXGI error codes
//--------------------------------------------------------------------------------------------------------
#define _FACDXGI_DDI 0x87b
#define MAKE_DXGI_DDI_HRESULT( code )  MAKE_HRESULT( 1, _FACDXGI_DDI, code )
#define MAKE_DXGI_DDI_STATUS( code )   MAKE_HRESULT( 0, _FACDXGI_DDI, code )

// DXGI DDI error codes have moved to winerror.h


//========================================================================================================
// This is the standard DDI that any DXGI-enabled user-mode driver should support
//

//--------------------------------------------------------------------------------------------------------
typedef	UINT_PTR	DXGI_DDI_HDEVICE;
typedef	UINT_PTR	DXGI_DDI_HRESOURCE;

//--------------------------------------------------------------------------------------------------------
typedef enum DXGI_DDI_RESIDENCY
{
    DXGI_DDI_RESIDENCY_FULLY_RESIDENT = 1,
    DXGI_DDI_RESIDENCY_RESIDENT_IN_SHARED_MEMORY = 2,
    DXGI_DDI_RESIDENCY_EVICTED_TO_DISK = 3,
} DXGI_DDI_RESIDENCY;

//--------------------------------------------------------------------------------------------------------
typedef enum DXGI_DDI_FLIP_INTERVAL_TYPE
{
    DXGI_DDI_FLIP_INTERVAL_IMMEDIATE = 0,
    DXGI_DDI_FLIP_INTERVAL_ONE       = 1,
    DXGI_DDI_FLIP_INTERVAL_TWO       = 2,
    DXGI_DDI_FLIP_INTERVAL_THREE     = 3,
    DXGI_DDI_FLIP_INTERVAL_FOUR      = 4,
} DXGI_DDI_FLIP_INTERVAL_TYPE;

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI_DDI_PRESENT_FLAGS
{
    union
    {
        struct
        {
            UINT    Blt                 : 1;        // 0x00000001
            UINT    Flip                : 1;        // 0x00000002
            UINT    PreferRight         : 1;        // 0x00000004
            UINT    TemporaryMono       : 1;        // 0x00000008
            UINT    Reserved            :28;
        };
        UINT    Value;
    };
} DXGI_DDI_PRESENT_FLAGS;

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI_DDI_ARG_PRESENT
{
    DXGI_DDI_HDEVICE            hDevice;             //in
    DXGI_DDI_HRESOURCE          hSurfaceToPresent;   //in
    UINT                        SrcSubResourceIndex; // Index of surface level
    DXGI_DDI_HRESOURCE          hDstResource;        // if non-zero, it's the destination of the present
    UINT                        DstSubResourceIndex; // Index of surface level
    void *                      pDXGIContext;        // opaque: Pass this to the Present callback
    DXGI_DDI_PRESENT_FLAGS      Flags;               // Presentation flags.
    DXGI_DDI_FLIP_INTERVAL_TYPE FlipInterval;        // Presentation interval (flip only)
}DXGI_DDI_ARG_PRESENT;

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES
{
    DXGI_DDI_HDEVICE hDevice; //in
    CONST DXGI_DDI_HRESOURCE* pResources; //in: Array of Resources to rotate identities; 0 <= 1, 1 <= 2, etc.
    UINT Resources;
} DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES;

typedef struct DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS
{
    DXGI_DDI_HDEVICE		            hDevice;			//in
    DXGI_GAMMA_CONTROL_CAPABILITIES *   pGammaCapabilities; //in/out
} DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS;

typedef struct DXGI_DDI_ARG_SET_GAMMA_CONTROL
{
    DXGI_DDI_HDEVICE		            hDevice;			//in
    DXGI_GAMMA_CONTROL                  GammaControl;       //in
} DXGI_DDI_ARG_SET_GAMMA_CONTROL;

typedef struct DXGI_DDI_ARG_SETDISPLAYMODE
{
    DXGI_DDI_HDEVICE		    hDevice;			    //in
    DXGI_DDI_HRESOURCE          hResource;              // Source surface
    UINT                        SubResourceIndex;       // Index of surface level
} DXGI_DDI_ARG_SETDISPLAYMODE;

typedef struct DXGI_DDI_ARG_SETRESOURCEPRIORITY
{
    DXGI_DDI_HDEVICE            hDevice;                //in
    DXGI_DDI_HRESOURCE          hResource;              //in
    UINT                        Priority;               //in
} DXGI_DDI_ARG_SETRESOURCEPRIORITY;

typedef struct DXGI_DDI_ARG_QUERYRESOURCERESIDENCY
{
    DXGI_DDI_HDEVICE            hDevice;                //in
    _Field_size_( Resources ) CONST DXGI_DDI_HRESOURCE *  pResources;             //in
    _Field_size_( Resources ) DXGI_DDI_RESIDENCY *        pStatus;                //out
    SIZE_T                      Resources;              //in
} DXGI_DDI_ARG_QUERYRESOURCERESIDENCY;

//--------------------------------------------------------------------------------------------------------
// Remarks: Fractional value used to represent vertical and horizontal frequencies of a video mode
//          (i.e. VSync and HSync). Vertical frequencies are stored in Hz. Horizontal frequencies
//          are stored in KHz.
//          The dynamic range of this encoding format, given 10^-7 resolution is {0..(2^32 - 1) / 10^7},
//          which translates to {0..428.4967296} [Hz] for vertical frequencies and {0..428.4967296} [KHz]
//          for horizontal frequencies. This sub-microseconds precision range should be acceptable even
//          for a pro-video application (error in one microsecond for video signal synchronization would
//          imply a time drift with a cycle of 10^7/(60*60*24) = 115.741 days.
//
//          If rational number with a finite fractional sequence, use denominator of form 10^(length of fractional sequence).
//          If rational number without a finite fractional sequence, or a sequence exceeding the precision allowed by the
//          dynamic range of the denominator, or an irrational number, use an appropriate ratio of integers which best
//          represents the value.
//
typedef struct DXGI_DDI_RATIONAL
{
    UINT Numerator;
    UINT Denominator;
} DXGI_DDI_RATIONAL;

//--------------------------------------------------------------------------------------------------------
typedef enum DXGI_DDI_MODE_SCANLINE_ORDER
{
    DXGI_DDI_MODE_SCANLINE_ORDER_UNSPECIFIED = 0,
    DXGI_DDI_MODE_SCANLINE_ORDER_PROGRESSIVE = 1,
    DXGI_DDI_MODE_SCANLINE_ORDER_UPPER_FIELD_FIRST = 2,
    DXGI_DDI_MODE_SCANLINE_ORDER_LOWER_FIELD_FIRST = 3,
} DXGI_DDI_MODE_SCANLINE_ORDER;

typedef enum DXGI_DDI_MODE_SCALING
{
    DXGI_DDI_MODE_SCALING_UNSPECIFIED = 0,
    DXGI_DDI_MODE_SCALING_STRETCHED = 1,
    DXGI_DDI_MODE_SCALING_CENTERED = 2,
} DXGI_DDI_MODE_SCALING;

typedef enum DXGI_DDI_MODE_ROTATION
{
    DXGI_DDI_MODE_ROTATION_UNSPECIFIED = 0,
    DXGI_DDI_MODE_ROTATION_IDENTITY = 1,
    DXGI_DDI_MODE_ROTATION_ROTATE90 = 2,
    DXGI_DDI_MODE_ROTATION_ROTATE180 = 3,
    DXGI_DDI_MODE_ROTATION_ROTATE270 = 4,
} DXGI_DDI_MODE_ROTATION;

typedef struct DXGI_DDI_MODE_DESC
{
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format;
    DXGI_DDI_RATIONAL RefreshRate;
    DXGI_DDI_MODE_SCANLINE_ORDER ScanlineOrdering;
    DXGI_DDI_MODE_ROTATION Rotation;
    DXGI_DDI_MODE_SCALING Scaling;
} DXGI_DDI_MODE_DESC;

// Bit indicates that UMD has the option to prevent this Resource from ever being a Primary
// UMD can prevent the actual flip (from optional primary to regular primary) and use a copy
// operation, during Present. Thus, it's possible the UMD can opt out of this Resource being
// actually used as a primary.
#define DXGI_DDI_PRIMARY_OPTIONAL 0x1

// Bit indicates that the Primary really represents the IDENTITY rotation, eventhough it will
// be used with non-IDENTITY display modes, since the application will take on the burden of
// honoring the output orientation by rotating, say the viewport and projection matrix.
#define DXGI_DDI_PRIMARY_NONPREROTATED 0x2


// Bit indicates that the primary is stereoscopic.
#define DXGI_DDI_PRIMARY_STEREO 0x4


// Bit indicates that the driver cannot tolerate setting any subresource of the specified
// resource as a primary. The UMD should set this bit at resource creation time if it
// chooses to implement presentation from this surface via a copy operation. The DXGI
// runtime will not employ flip-style presentation if this bit is set
#define DXGI_DDI_PRIMARY_DRIVER_FLAG_NO_SCANOUT 0x1

typedef struct DXGI_DDI_PRIMARY_DESC
{
    UINT                           Flags;			// [in]
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;	// [in]
    DXGI_DDI_MODE_DESC             ModeDesc;		// [in]
    UINT						   DriverFlags;		// [out] Filled by the driver
} DXGI_DDI_PRIMARY_DESC;

typedef struct DXGI_DDI_ARG_BLT_FLAGS
{
    union
    {
        struct
        {
            UINT    Resolve                : 1;     // 0x00000001
            UINT    Convert                : 1;     // 0x00000002
            UINT    Stretch                : 1;     // 0x00000004
            UINT    Present                : 1;     // 0x00000008
            UINT    Reserved               :28;
        };
        UINT Value;
    };
} DXGI_DDI_ARG_BLT_FLAGS;

typedef struct DXGI_DDI_ARG_BLT
{
    DXGI_DDI_HDEVICE            hDevice;                //in
    DXGI_DDI_HRESOURCE          hDstResource;           //in
    UINT                        DstSubresource;         //in
    UINT                        DstLeft;                //in
    UINT                        DstTop;                 //in
    UINT                        DstRight;               //in
    UINT                        DstBottom;              //in
    DXGI_DDI_HRESOURCE          hSrcResource;           //in
    UINT                        SrcSubresource;         //in
    DXGI_DDI_ARG_BLT_FLAGS      Flags;                  //in
    DXGI_DDI_MODE_ROTATION      Rotate;                 //in
} DXGI_DDI_ARG_BLT;

typedef struct DXGI_DDI_ARG_RESOLVESHAREDRESOURCE
{
    DXGI_DDI_HDEVICE            hDevice;                //in
    DXGI_DDI_HRESOURCE          hResource;              //in
} DXGI_DDI_ARG_RESOLVESHAREDRESOURCE;

#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)
typedef struct DXGI_DDI_ARG_BLT1
{
    DXGI_DDI_HDEVICE            hDevice;                //in
    DXGI_DDI_HRESOURCE          hDstResource;           //in
    UINT                        DstSubresource;         //in
    UINT                        DstLeft;                //in
    UINT                        DstTop;                 //in
    UINT                        DstRight;               //in
    UINT                        DstBottom;              //in
    DXGI_DDI_HRESOURCE          hSrcResource;           //in
    UINT                        SrcSubresource;         //in
    UINT                        SrcLeft;                //in
    UINT                        SrcTop;                 //in
    UINT                        SrcRight;               //in
    UINT                        SrcBottom;              //in
    DXGI_DDI_ARG_BLT_FLAGS      Flags;                  //in
    DXGI_DDI_MODE_ROTATION      Rotate;                 //in
} DXGI_DDI_ARG_BLT1;

typedef struct _DXGI_DDI_ARG_OFFERRESOURCES {
    DXGI_DDI_HDEVICE hDevice;                           //in:  device that created the resources
    const DXGI_DDI_HRESOURCE* pResources;               //in:  array of resources to reset
    UINT Resources;                                     //in:  number of elements in pResources
    D3DDDI_OFFER_PRIORITY Priority;                     //in:  priority with which to reset the resources
} DXGI_DDI_ARG_OFFERRESOURCES;

typedef struct _DXGI_DDI_ARG_RECLAIMRESOURCES {
    DXGI_DDI_HDEVICE hDevice;                           //in:  device that created the resources
    const DXGI_DDI_HRESOURCE *pResources;               //in:  array of resources to reset
    BOOL *pDiscarded;                                   //out: optional array of booleans specifying whether each resource was discarded
    UINT Resources;                                     //in:  number of elements in pResources and pDiscarded
} DXGI_DDI_ARG_RECLAIMRESOURCES;

//-----------------------------------------------------------------------------------------------------------
// Multi Plane Overlay DDI
//

#define DXGI_DDI_MAX_MULTIPLANE_OVERLAY_ALLOCATIONS    16

typedef struct DXGI_DDI_MULTIPLANE_OVERLAY_CAPS
{
    UINT MaxPlanes;                  // Total number of planes supported (including the DWM's primary)
    UINT NumCapabilityGroups;        // Number of plane types supported.
} DXGI_DDI_MULTIPLANE_OVERLAY_CAPS;


typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_ROTATION          = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_VERTICAL_FLIP     = 0x2,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_HORIZONTAL_FLIP   = 0x4,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_DEINTERLACE       = 0x8, 
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_STEREO            = 0x10,    // D3D10 or above only.
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_RGB               = 0x20,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_YUV               = 0x40,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_BILINEAR_FILTER   = 0x80,    // Can do bilinear stretching
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_HIGH_FILTER       = 0x100,   // Can do better than bilinear stretching
} DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_SEPARATE           = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_ROW_INTERLEAVED    = 0x4,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_COLUMN_INTERLEAVED = 0x8,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_CHECKERBOARD       = 0x10,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_FLIP_MODE          = 0x20,
} DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS;

typedef struct DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS
{
    UINT  NumPlanes;
    float MaxStretchFactor;
    float MaxShrinkFactor;
    UINT  OverlayCaps;       // DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS
    UINT  StereoCaps;        // DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS
} DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_FLAGS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_FLAG_VERTICAL_FLIP   = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_FLAG_HORIZONTAL_FLIP = 0x2,
} DXGI_DDI_MULTIPLANE_OVERLAY_FLAGS;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_BLEND
{
    DXGI_DDI_MULTIPLANE_OVERLAY_BLEND_OPAQUE     = 0x0,
    DXGI_DDI_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND = 0x1,
} DXGI_DDI_MULTIPLANE_OVERLAY_BLEND;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT
{
    DXGI_DDI_MULIIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_PROGRESSIVE  = 0,
    DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST   = 1,
    DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST    = 2
} DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAGS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAG_NOMINAL_RANGE = 0x1, // 16 - 235 vs. 0 - 255
    DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAG_BT709         = 0x2, // BT.709 vs. BT.601
    DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAG_xvYCC         = 0x4, // xvYCC vs. conventional YCbCr
} DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAGS;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO               = 0,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_HORIZONTAL         = 1,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_VERTICAL           = 2,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_SEPARATE           = 3,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO_OFFSET        = 4,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_ROW_INTERLEAVED    = 5,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_COLUMN_INTERLEAVED = 6,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_CHECKERBOARD       = 7
} DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_NONE   = 0,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME0 = 1,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME1 = 2,
} DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE;

typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR        = 0x1,  // Bilinear
    DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH            = 0x2,  // Maximum
} DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY;

typedef struct DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES
{
    UINT                                           Flags;      // DXGI_DDI_MULTIPLANE_OVERLAY_FLAGS
    RECT                                           SrcRect;
    RECT                                           DstRect;
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // M1
    RECT                                           ClipRect;
#endif
    DXGI_DDI_MODE_ROTATION                         Rotation;
    DXGI_DDI_MULTIPLANE_OVERLAY_BLEND              Blend;
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // MP
    UINT                                           DirtyRectCount;
    RECT*                                          pDirtyRects;
#else
    UINT                                           NumFilters;
    void*                                          pFilters;
#endif
    DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    UINT                                           YCbCrFlags; // DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAGS
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT      StereoFormat;
    BOOL                                           StereoLeftViewFrame0;
    BOOL                                           StereoBaseViewFrame0;
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE   StereoFlipMode;
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // M1
    DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY    StretchQuality; 
#endif
} DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES;


typedef struct _DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS
{
    DXGI_DDI_HDEVICE                       hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID         VidPnSourceId;
    DXGI_DDI_MULTIPLANE_OVERLAY_CAPS       MultiplaneOverlayCaps;
} DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS;

typedef struct _DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS
{
    DXGI_DDI_HDEVICE                        hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID          VidPnSourceId;
    UINT                                    GroupIndex;
    DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS  MultiplaneOverlayGroupCaps; 
} DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS;

typedef struct DXGI_DDI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO
{
    DXGI_DDI_HRESOURCE                     hResource;
    UINT                                   SubResourceIndex;
    DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} DXGI_DDI_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO;

typedef struct _DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT
{
    DXGI_DDI_HDEVICE                                      hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID                        VidPnSourceId;
    UINT                                                  NumPlaneInfo;
    DXGI_DDI_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO* pPlaneInfo;
    BOOL                                                  Supported; // out: driver to fill TRUE/FALSE
} DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT;

typedef struct _DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY
{
    UINT                                 LayerIndex;
    BOOL                                 Enabled;
    DXGI_DDI_HRESOURCE                   hResource;
    UINT                                 SubResourceIndex;
    DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY;

typedef struct _DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY
{
    DXGI_DDI_HDEVICE                     hDevice;
    void *                               pDXGIContext;

    D3DDDI_VIDEO_PRESENT_SOURCE_ID       VidPnSourceId;
    DXGI_DDI_PRESENT_FLAGS               Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE          FlipInterval;

    UINT                                 PresentPlaneCount;
    DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY* pPresentPlanes;
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // M1
    UINT                                 Reserved;
#endif
} DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY;

#endif // (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)

#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // M1

typedef struct _DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT
{
    DXGI_DDI_HDEVICE                hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    UINT                            DesiredPresentDuration;
    UINT                            ClosestSmallerDuration;  // out
    UINT                            ClosestLargerDuration;   //out
} DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT;

typedef struct DXGI_DDI_ARG_PRESENTSURFACE
{
    DXGI_DDI_HRESOURCE hSurface;         // In
    UINT               SubResourceIndex; // Index of surface level
} DXGI_DDI_ARG_PRESENTSURFACE;

typedef struct DXGI_DDI_ARG_PRESENT1
{
    DXGI_DDI_HDEVICE                   hDevice;             //in
    CONST DXGI_DDI_ARG_PRESENTSURFACE* phSurfacesToPresent; //in
    UINT                               SurfacesToPresent;   //in
    DXGI_DDI_HRESOURCE                 hDstResource;        // if non-zero, it's the destination of the present
    UINT                               DstSubResourceIndex; // Index of surface level
    void *                             pDXGIContext;        // opaque: Pass this to the Present callback
    DXGI_DDI_PRESENT_FLAGS             Flags;               // Presentation flags.
    DXGI_DDI_FLIP_INTERVAL_TYPE        FlipInterval;        // Presentation interval (flip only)
    UINT                               Reserved;
    CONST RECT*                        pDirtyRects;         // in: Array of dirty rects
    UINT                               DirtyRects;          // in: Number of dirty rects
} DXGI_DDI_ARG_PRESENT1;

#endif // (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // M1

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall /*APIENTRY*/ * pfnPresent )               (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetGammaCaps )          (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetDisplayMode )        (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetResourcePriority )   (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnBlt                    )(DXGI_DDI_ARG_BLT*);
}DXGI_DDI_BASE_FUNCTIONS;

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI1_1_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall /*APIENTRY*/ * pfnPresent )               (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetGammaCaps )          (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetDisplayMode )        (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetResourcePriority )   (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnBlt                    )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
}DXGI1_1_DDI_BASE_FUNCTIONS;

#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI1_2_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall /*APIENTRY*/ * pfnPresent )               (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetGammaCaps )          (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetDisplayMode )        (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetResourcePriority )   (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnBlt                    )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnBlt1 )	              (DXGI_DDI_ARG_BLT1*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnOfferResources )        (DXGI_DDI_ARG_OFFERRESOURCES*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnReclaimResources )      (DXGI_DDI_ARG_RECLAIMRESOURCES*);
    // Use IS_DXGI_MULTIPLANE_OVERLAY_FUNCTIONS macro to determine these functions fields are available
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetMultiplaneOverlayCaps )        (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetMultiplaneOverlayFilterRange ) (void*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnCheckMultiplaneOverlaySupport )   (DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnPresentMultiplaneOverlay )        (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
}DXGI1_2_DDI_BASE_FUNCTIONS;

#endif

#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // M1

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI1_3_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall /*APIENTRY*/ * pfnPresent )               (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetGammaCaps )          (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetDisplayMode )        (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnSetResourcePriority )   (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnBlt                    )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnBlt1 )                  (DXGI_DDI_ARG_BLT1*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnOfferResources )        (DXGI_DDI_ARG_OFFERRESOURCES*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnReclaimResources )      (DXGI_DDI_ARG_RECLAIMRESOURCES*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetMultiplaneOverlayCaps )        (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnGetMultiplaneOverlayGroupCaps )   (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnReserved1 )                       (void*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnPresentMultiplaneOverlay )        (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnReserved2 )                       (void*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnPresent1 )                        (DXGI_DDI_ARG_PRESENT1*);
    HRESULT ( __stdcall /*APIENTRY*/ * pfnCheckPresentDurationSupport )     (DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT*);
}DXGI1_3_DDI_BASE_FUNCTIONS;

#endif

//========================================================================================================
// DXGI callback definitions.
//


//--------------------------------------------------------------------------------------------------------
typedef struct DXGIDDICB_PRESENT
{
    D3DKMT_HANDLE   hSrcAllocation;             // in: The allocation of which content will be presented
    D3DKMT_HANDLE   hDstAllocation;             // in: if non-zero, it's the destination allocation of the present
    void *          pDXGIContext;               // opaque: Fill this with the value in DXGI_DDI_ARG_PRESENT.pDXGIContext
    HANDLE          hContext;                   // in: Context being submitted to.
    UINT            BroadcastContextCount;      // in: Specifies the number of context
                                                //     to broadcast this present operation to.
                                                //     Only supported for flip operation.
    HANDLE          BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT]; // in: Specifies the handle of the context to
                                                                    //     broadcast to.
} DXGIDDICB_PRESENT;

#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)
typedef struct DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO
{
    D3DKMT_HANDLE PresentAllocation;
    UINT SubResourceIndex;
} DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO;

typedef struct DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY
{
    void *          pDXGIContext;               // opaque: Fill this with the value in DXGI_DDI_ARG_PRESENT.pDXGIContext
    HANDLE          hContext;

    UINT            BroadcastContextCount;
    HANDLE          BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];

    DWORD           AllocationInfoCount;
    DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO AllocationInfo[DXGI_DDI_MAX_MULTIPLANE_OVERLAY_ALLOCATIONS];
} DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY;
#endif // (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)


typedef _Check_return_ HRESULT (APIENTRY CALLBACK *PFNDDXGIDDI_PRESENTCB)(
        _In_ HANDLE hDevice, _In_ CONST DXGIDDICB_PRESENT*);

#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)
typedef _Check_return_ HRESULT (APIENTRY CALLBACK *PFNDDXGIDDI_PRESENT_MULTIPLANE_OVERLAYCB)(
        _In_ HANDLE hDevice, _In_ CONST DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY*);
#endif // (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)

//--------------------------------------------------------------------------------------------------------
typedef struct DXGI_DDI_BASE_CALLBACKS
{
    PFNDDXGIDDI_PRESENTCB                pfnPresentCb;
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)
    // Use IS_DXGI_MULTIPLANE_OVERLAY_FUNCTIONS macro to check if field is available.
    PFNDDXGIDDI_PRESENT_MULTIPLANE_OVERLAYCB pfnPresentMultiplaneOverlayCb;
#endif // (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)
} DXGI_DDI_BASE_CALLBACKS;

//========================================================================================================
// DXGI basic DDI device creation arguments

typedef struct DXGI_DDI_BASE_ARGS
{
    DXGI_DDI_BASE_CALLBACKS *pDXGIBaseCallbacks;            // in: The driver should record this pointer for later use
    union
    {
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3) // M1
        DXGI1_3_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions4; // in/out: The driver should fill the denoted struct with DXGI base driver entry points
#endif
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8)
        DXGI1_2_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions3; // in/out: The driver should fill the denoted struct with DXGI base driver entry points
#endif
        DXGI1_1_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions2; // in/out: The driver should fill the denoted struct with DXGI base driver entry points
        DXGI_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions;     // in/out: The driver should fill the denoted struct with DXGI base driver entry points
    };
} DXGI_DDI_BASE_ARGS;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif /* _DXGIDDI_H */

