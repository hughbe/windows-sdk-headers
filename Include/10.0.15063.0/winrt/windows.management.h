

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
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

#ifndef __windows2Emanagement_h__
#define __windows2Emanagement_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
#define ____FIIterator_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
typedef interface __FIIterator_1_Windows__CManagement__CMdmAlert __FIIterator_1_Windows__CManagement__CMdmAlert;

#endif 	/* ____FIIterator_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
#define ____FIIterable_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
typedef interface __FIIterable_1_Windows__CManagement__CMdmAlert __FIIterable_1_Windows__CManagement__CMdmAlert;

#endif 	/* ____FIIterable_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
#define ____FIVectorView_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
typedef interface __FIVectorView_1_Windows__CManagement__CMdmAlert __FIVectorView_1_Windows__CManagement__CMdmAlert;

#endif 	/* ____FIVectorView_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CIMdmAlert __x_ABI_CWindows_CManagement_CIMdmAlert;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            interface IMdmAlert;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CIMdmSession __x_ABI_CWindows_CManagement_CIMdmSession;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            interface IMdmSession;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            interface IMdmSessionManagerStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emanagement_0000_0000 */
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
namespace Management {
class MdmAlert;
} /*Management*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Management {
interface IMdmAlert;
} /*Management*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Emanagement_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0331 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0331 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0331_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0331_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CManagement__CMdmAlert_USE
#define DEF___FIIterator_1_Windows__CManagement__CMdmAlert_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b4a6ebea-b19f-5da5-b3d1-e859f1f4df17"))
IIterator<ABI::Windows::Management::MdmAlert*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::MdmAlert*, ABI::Windows::Management::IMdmAlert*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Management.MdmAlert>"; }
};
typedef IIterator<ABI::Windows::Management::MdmAlert*> __FIIterator_1_Windows__CManagement__CMdmAlert_t;
#define ____FIIterator_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
#define __FIIterator_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CManagement__CMdmAlert_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CManagement__CMdmAlert_USE */


/* interface __MIDL_itf_windows2Emanagement_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0332 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0332 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0332_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0332_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CManagement__CMdmAlert_USE
#define DEF___FIIterable_1_Windows__CManagement__CMdmAlert_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a0a617dc-210c-529f-b5e9-29aeceebb5a8"))
IIterable<ABI::Windows::Management::MdmAlert*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::MdmAlert*, ABI::Windows::Management::IMdmAlert*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Management.MdmAlert>"; }
};
typedef IIterable<ABI::Windows::Management::MdmAlert*> __FIIterable_1_Windows__CManagement__CMdmAlert_t;
#define ____FIIterable_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
#define __FIIterable_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CManagement__CMdmAlert_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CManagement__CMdmAlert_USE */


/* interface __MIDL_itf_windows2Emanagement_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0333 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0333 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0333_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0333_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CManagement__CMdmAlert_USE
#define DEF___FIVectorView_1_Windows__CManagement__CMdmAlert_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2b94038c-24aa-5261-80d8-c90f7970644a"))
IVectorView<ABI::Windows::Management::MdmAlert*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::MdmAlert*, ABI::Windows::Management::IMdmAlert*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Management.MdmAlert>"; }
};
typedef IVectorView<ABI::Windows::Management::MdmAlert*> __FIVectorView_1_Windows__CManagement__CMdmAlert_t;
#define ____FIVectorView_1_Windows__CManagement__CMdmAlert_FWD_DEFINED__
#define __FIVectorView_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CManagement__CMdmAlert_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CManagement__CMdmAlert_USE */


/* interface __MIDL_itf_windows2Emanagement_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0334 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0334 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0334_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0334_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0004 */
/* [local] */ 

#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<String>"; }
};
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define ____FIIterator_1_HSTRING_FWD_DEFINED__
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Emanagement_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0335 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0335 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0335_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0335_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<String>"; }
};
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define ____FIIterable_1_HSTRING_FWD_DEFINED__
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Emanagement_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0336 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0336 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0336_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0336_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0006 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<String>"; }
};
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define ____FIVectorView_1_HSTRING_FWD_DEFINED__
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_HSTRING_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CManagement_CMdmAlertDataType __x_ABI_CWindows_CManagement_CMdmAlertDataType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CManagement_CMdmAlertMark __x_ABI_CWindows_CManagement_CMdmAlertMark;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CManagement_CMdmSessionState __x_ABI_CWindows_CManagement_CMdmSessionState;


#endif /* end if !defined(__cplusplus) */


#endif


#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Management {
class MdmSession;
} /*Management*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Emanagement_0000_0006 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            
            typedef enum MdmAlertDataType MdmAlertDataType;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            
            typedef enum MdmAlertMark MdmAlertMark;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            
            typedef enum MdmSessionState MdmSessionState;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0337 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0337 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0337_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0337_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0007 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CManagement__CMdmAlert
#define DEF___FIIterator_1_Windows__CManagement__CMdmAlert
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emanagement_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0007_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__
#define ____FIIterator_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

/* interface __FIIterator_1_Windows__CManagement__CMdmAlert */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Windows__CManagement__CMdmAlert */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Windows__CManagement__CMdmAlert;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4a6ebea-b19f-5da5-b3d1-e859f1f4df17")
    __FIIterator_1_Windows__CManagement__CMdmAlert : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Management::IMdmAlert **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Windows::Management::IMdmAlert **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Windows__CManagement__CMdmAlertVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CIMdmAlert **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CIMdmAlert **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Windows__CManagement__CMdmAlertVtbl;

    interface __FIIterator_1_Windows__CManagement__CMdmAlert
    {
        CONST_VTBL struct __FIIterator_1_Windows__CManagement__CMdmAlertVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Windows__CManagement__CMdmAlert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CManagement__CMdmAlert_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement_0000_0008 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CManagement__CMdmAlert */


/* interface __MIDL_itf_windows2Emanagement_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0338 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0338 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0338_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0338_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0009 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CManagement__CMdmAlert
#define DEF___FIIterable_1_Windows__CManagement__CMdmAlert
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emanagement_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0009_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__
#define ____FIIterable_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

/* interface __FIIterable_1_Windows__CManagement__CMdmAlert */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Windows__CManagement__CMdmAlert */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Windows__CManagement__CMdmAlert;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a0a617dc-210c-529f-b5e9-29aeceebb5a8")
    __FIIterable_1_Windows__CManagement__CMdmAlert : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CManagement__CMdmAlert **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Windows__CManagement__CMdmAlertVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CManagement__CMdmAlert **first);
        
        END_INTERFACE
    } __FIIterable_1_Windows__CManagement__CMdmAlertVtbl;

    interface __FIIterable_1_Windows__CManagement__CMdmAlert
    {
        CONST_VTBL struct __FIIterable_1_Windows__CManagement__CMdmAlertVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Windows__CManagement__CMdmAlert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CManagement__CMdmAlert_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CManagement__CMdmAlert_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement_0000_0010 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CManagement__CMdmAlert */


/* interface __MIDL_itf_windows2Emanagement_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0339 */




/* interface __MIDL_itf_windows2Emanagement2Eidl_0000_0339 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0339_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eidl_0000_0339_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement_0000_0011 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CManagement__CMdmAlert
#define DEF___FIVectorView_1_Windows__CManagement__CMdmAlert
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emanagement_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0011_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__
#define ____FIVectorView_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Windows__CManagement__CMdmAlert */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Windows__CManagement__CMdmAlert */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Windows__CManagement__CMdmAlert;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2b94038c-24aa-5261-80d8-c90f7970644a")
    __FIVectorView_1_Windows__CManagement__CMdmAlert : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Management::IMdmAlert **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Windows::Management::IMdmAlert *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Windows::Management::IMdmAlert **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Windows__CManagement__CMdmAlertVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CIMdmAlert **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CManagement_CIMdmAlert *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CIMdmAlert **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Windows__CManagement__CMdmAlertVtbl;

    interface __FIVectorView_1_Windows__CManagement__CMdmAlert
    {
        CONST_VTBL struct __FIVectorView_1_Windows__CManagement__CMdmAlertVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CManagement__CMdmAlert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement_0000_0012 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Windows__CManagement__CMdmAlert */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CManagement_CMdmAlertDataType
    {
        MdmAlertDataType_String	= 0,
        MdmAlertDataType_Base64	= 1,
        MdmAlertDataType_Boolean	= 2,
        MdmAlertDataType_Integer	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CManagement_CMdmAlertMark
    {
        MdmAlertMark_None	= 0,
        MdmAlertMark_Fatal	= 1,
        MdmAlertMark_Critical	= 2,
        MdmAlertMark_Warning	= 3,
        MdmAlertMark_Informational	= 4
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CManagement_CMdmSessionState
    {
        MdmSessionState_NotStarted	= 0,
        MdmSessionState_Starting	= 1,
        MdmSessionState_Connecting	= 2,
        MdmSessionState_Communicating	= 3,
        MdmSessionState_AlertStatusAvailable	= 4,
        MdmSessionState_Retrying	= 5,
        MdmSessionState_Completed	= 6
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmAlert[] = L"Windows.Management.IMdmAlert";
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement_0000_0012 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            
            /* [v1_enum] */ 
            enum MdmAlertDataType
                {
                    MdmAlertDataType_String	= 0,
                    MdmAlertDataType_Base64	= 1,
                    MdmAlertDataType_Boolean	= 2,
                    MdmAlertDataType_Integer	= 3
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            
            /* [v1_enum] */ 
            enum MdmAlertMark
                {
                    MdmAlertMark_None	= 0,
                    MdmAlertMark_Fatal	= 1,
                    MdmAlertMark_Critical	= 2,
                    MdmAlertMark_Warning	= 3,
                    MdmAlertMark_Informational	= 4
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            
            /* [v1_enum] */ 
            enum MdmSessionState
                {
                    MdmSessionState_NotStarted	= 0,
                    MdmSessionState_Starting	= 1,
                    MdmSessionState_Connecting	= 2,
                    MdmSessionState_Communicating	= 3,
                    MdmSessionState_AlertStatusAvailable	= 4,
                    MdmSessionState_Retrying	= 5,
                    MdmSessionState_Completed	= 6
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0012_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CIMdmAlert */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::IMdmAlert */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmAlert;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                
                MIDL_INTERFACE("B0FBC327-28C1-4B52-A548-C5807CAF70B6")
                IMdmAlert : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Data( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Format( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Management::MdmAlertDataType *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Format( 
                        /* [in] */ ABI::Windows::Management::MdmAlertDataType value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Mark( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Management::MdmAlertMark *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Mark( 
                        /* [in] */ ABI::Windows::Management::MdmAlertMark value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
                        /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Target( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMdmAlert = __uuidof(IMdmAlert);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CIMdmAlertVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Data )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Format )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CManagement_CMdmAlertDataType *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Format )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [in] */ __x_ABI_CWindows_CManagement_CMdmAlertDataType value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mark )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CManagement_CMdmAlertMark *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mark )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [in] */ __x_ABI_CWindows_CManagement_CMdmAlertMark value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Target )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
            /* [in] */ __RPC__in HSTRING value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CIMdmAlertVtbl;

    interface __x_ABI_CWindows_CManagement_CIMdmAlert
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmAlertVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CIMdmAlert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CIMdmAlert_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Data(This,value)	\
    ( (This)->lpVtbl -> get_Data(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Data(This,value)	\
    ( (This)->lpVtbl -> put_Data(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Format(This,value)	\
    ( (This)->lpVtbl -> get_Format(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Format(This,value)	\
    ( (This)->lpVtbl -> put_Format(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Mark(This,value)	\
    ( (This)->lpVtbl -> get_Mark(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Mark(This,value)	\
    ( (This)->lpVtbl -> put_Mark(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Source(This,value)	\
    ( (This)->lpVtbl -> get_Source(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Source(This,value)	\
    ( (This)->lpVtbl -> put_Source(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Status(This,value)	\
    ( (This)->lpVtbl -> get_Status(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Target(This,value)	\
    ( (This)->lpVtbl -> get_Target(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Target(This,value)	\
    ( (This)->lpVtbl -> put_Target(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Type(This,value)	\
    ( (This)->lpVtbl -> get_Type(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Type(This,value)	\
    ( (This)->lpVtbl -> put_Type(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement_0000_0013 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmSession[] = L"Windows.Management.IMdmSession";
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0013_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CIMdmSession */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::IMdmSession */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                
                MIDL_INTERFACE("FE89314C-8F64-4797-A9D7-9D88F86AE166")
                IMdmSession : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Alerts( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CManagement__CMdmAlert **value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedError( 
                        /* [out][retval] */ __RPC__out HRESULT *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_State( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Management::MdmSessionState *value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE AttachAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **action) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StartAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **action) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StartWithAlertsAsync( 
                        /* [in] */ __RPC__in_opt __FIIterable_1_Windows__CManagement__CMdmAlert *alerts,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **action) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMdmSession = __uuidof(IMdmSession);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CIMdmSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alerts )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CManagement__CMdmAlert **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out][retval] */ __RPC__out HRESULT *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CManagement_CMdmSessionState *value);
        
        HRESULT ( STDMETHODCALLTYPE *AttachAsync )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **action);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartAsync )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **action);
        
        HRESULT ( STDMETHODCALLTYPE *StartWithAlertsAsync )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
            /* [in] */ __RPC__in_opt __FIIterable_1_Windows__CManagement__CMdmAlert *alerts,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **action);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CIMdmSessionVtbl;

    interface __x_ABI_CWindows_CManagement_CIMdmSession
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CIMdmSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CIMdmSession_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CIMdmSession_get_Alerts(This,value)	\
    ( (This)->lpVtbl -> get_Alerts(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_get_ExtendedError(This,value)	\
    ( (This)->lpVtbl -> get_ExtendedError(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_get_Id(This,value)	\
    ( (This)->lpVtbl -> get_Id(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_get_State(This,value)	\
    ( (This)->lpVtbl -> get_State(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_AttachAsync(This,action)	\
    ( (This)->lpVtbl -> AttachAsync(This,action) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_StartAsync(This,action)	\
    ( (This)->lpVtbl -> StartAsync(This,action) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSession_StartWithAlertsAsync(This,alerts,action)	\
    ( (This)->lpVtbl -> StartWithAlertsAsync(This,alerts,action) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement_0000_0014 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmSessionManagerStatics[] = L"Windows.Management.IMdmSessionManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0014_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::IMdmSessionManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                
                MIDL_INTERFACE("CF4AD959-F745-4B79-9B5C-DE0BF8EFE44B")
                IMdmSessionManagerStatics : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SessionIds( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE TryCreateSession( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Management::IMdmSession **result) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE DeleteSessionById( 
                        /* [in] */ __RPC__in HSTRING sessionId) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE GetSessionById( 
                        /* [in] */ __RPC__in HSTRING sessionId,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Management::IMdmSession **result) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMdmSessionManagerStatics = __uuidof(IMdmSessionManagerStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SessionIds )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **value);
        
        HRESULT ( STDMETHODCALLTYPE *TryCreateSession )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CIMdmSession **result);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteSessionById )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [in] */ __RPC__in HSTRING sessionId);
        
        HRESULT ( STDMETHODCALLTYPE *GetSessionById )( 
            __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
            /* [in] */ __RPC__in HSTRING sessionId,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CIMdmSession **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_get_SessionIds(This,value)	\
    ( (This)->lpVtbl -> get_SessionIds(This,value) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_TryCreateSession(This,result)	\
    ( (This)->lpVtbl -> TryCreateSession(This,result) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_DeleteSessionById(This,sessionId)	\
    ( (This)->lpVtbl -> DeleteSessionById(This,sessionId) ) 

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetSessionById(This,sessionId,result)	\
    ( (This)->lpVtbl -> GetSessionById(This,sessionId,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement_0000_0015 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Management_MdmAlert_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmAlert_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmAlert[] = L"Windows.Management.MdmAlert";
#endif
#ifndef RUNTIMECLASS_Windows_Management_MdmSession_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmSession[] = L"Windows.Management.MdmSession";
#endif
#ifndef RUNTIMECLASS_Windows_Management_MdmSessionManager_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmSessionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmSessionManager[] = L"Windows.Management.MdmSessionManager";
#endif


/* interface __MIDL_itf_windows2Emanagement_0000_0015 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement_0000_0015_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


