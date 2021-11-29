

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


#ifndef __windows2Efoundation2Enumerics_h__
#define __windows2Efoundation2Enumerics_h__

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


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane __x_ABI_CWindows_CFoundation_CNumerics_CPlane;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;

#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2
    {
    FLOAT X;
    FLOAT Y;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3
    {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4
    {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    FLOAT W;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2
    {
    FLOAT M11;
    FLOAT M12;
    FLOAT M21;
    FLOAT M22;
    FLOAT M31;
    FLOAT M32;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4
    {
    FLOAT M11;
    FLOAT M12;
    FLOAT M13;
    FLOAT M14;
    FLOAT M21;
    FLOAT M22;
    FLOAT M23;
    FLOAT M24;
    FLOAT M31;
    FLOAT M32;
    FLOAT M33;
    FLOAT M34;
    FLOAT M41;
    FLOAT M42;
    FLOAT M43;
    FLOAT M44;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane
    {
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Normal;
    FLOAT D;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion
    {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    FLOAT W;
    } ;
#endif


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector2 Vector2;
                
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
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
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
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector4 Vector4;
                
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
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix3x2 Matrix3x2;
                
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
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix4x4 Matrix4x4;
                
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
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Plane Plane;
                
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
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Quaternion Quaternion;
                
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
        namespace Foundation {
            namespace Numerics {
                
                struct Vector2
                    {
                    FLOAT X;
                    FLOAT Y;
                    } ;
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
        namespace Foundation {
            namespace Numerics {
                
                struct Vector3
                    {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                    } ;
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
        namespace Foundation {
            namespace Numerics {
                
                struct Vector4
                    {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                    FLOAT W;
                    } ;
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
        namespace Foundation {
            namespace Numerics {
                
                struct Matrix3x2
                    {
                    FLOAT M11;
                    FLOAT M12;
                    FLOAT M21;
                    FLOAT M22;
                    FLOAT M31;
                    FLOAT M32;
                    } ;
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
        namespace Foundation {
            namespace Numerics {
                
                struct Matrix4x4
                    {
                    FLOAT M11;
                    FLOAT M12;
                    FLOAT M13;
                    FLOAT M14;
                    FLOAT M21;
                    FLOAT M22;
                    FLOAT M23;
                    FLOAT M24;
                    FLOAT M31;
                    FLOAT M32;
                    FLOAT M33;
                    FLOAT M34;
                    FLOAT M41;
                    FLOAT M42;
                    FLOAT M43;
                    FLOAT M44;
                    } ;
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
        namespace Foundation {
            namespace Numerics {
                
                struct Plane
                    {
                    Vector3 Normal;
                    FLOAT D;
                    } ;
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
        namespace Foundation {
            namespace Numerics {
                
                struct Quaternion
                    {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                    FLOAT W;
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


