

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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Efoundation2Enumerics_h__
#define __windows2Efoundation2Enumerics_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_FWD_DEFINED__
#define ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_FWD_DEFINED__
typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;

#endif 	/* ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_FWD_DEFINED__ */


#ifndef ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3 __FIReference_1_Windows__CFoundation__CNumerics__CVector3;

#endif 	/* ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__ */


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

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
namespace Numerics {
struct Matrix4x4;
} /*Numerics*/
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0312 */




/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0312 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0312_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0312_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0001 */
/* [local] */ 

#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dacbffdc-68ef-5fd0-b657-782d0ac9807e"))
IReference<struct ABI::Windows::Foundation::Numerics::Matrix4x4> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Matrix4x4> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>"; }
};
typedef IReference<struct ABI::Windows::Foundation::Numerics::Matrix4x4> __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t;
#define ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_FWD_DEFINED__
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
namespace Numerics {
struct Vector3;
} /*Numerics*/
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0001 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0313 */




/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0313 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0313_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0313_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0002 */
/* [local] */ 

#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1ee770ff-c954-59ca-a754-6199a9be282c"))
IReference<struct ABI::Windows::Foundation::Numerics::Vector3> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Vector3> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>"; }
};
typedef IReference<struct ABI::Windows::Foundation::Numerics::Vector3> __FIReference_1_Windows__CFoundation__CNumerics__CVector3_t;
#define ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CVector3_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE */
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


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0002 */
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



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0314 */




/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0314 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0314_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0314_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0003 */
/* [local] */ 

#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0003_v0_0_s_ifspec;

#ifndef ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__
#define ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__

/* interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 */
/* [unique][uuid][object] */ 



/* interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dacbffdc-68ef-5fd0-b657-782d0ac9807e")
    __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ __RPC__out struct ABI::Windows::Foundation::Numerics::Matrix4x4 *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
            /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value);
        
        END_INTERFACE
    } __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl;

    interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4
    {
        CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0004 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 */


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0315 */




/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0315 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0315_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0315_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0005 */
/* [local] */ 

#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0005_v0_0_s_ifspec;

#ifndef ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__
#define ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

/* interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 



/* interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CVector3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1ee770ff-c954-59ca-a754-6199a9be282c")
    __FIReference_1_Windows__CFoundation__CNumerics__CVector3 : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ __RPC__out struct ABI::Windows::Foundation::Numerics::Vector3 *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        END_INTERFACE
    } __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

    interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3
    {
        CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0006 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3 */
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


/* interface __MIDL_itf_windows2Efoundation2Enumerics_0000_0006 */
/* [local] */ 

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



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Enumerics_0000_0006_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


