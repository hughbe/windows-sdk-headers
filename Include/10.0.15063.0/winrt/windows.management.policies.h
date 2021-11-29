

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

#ifndef __windows2Emanagement2Epolicies_h__
#define __windows2Emanagement2Epolicies_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_FWD_DEFINED__
#define ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable;

#endif 	/* ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                interface INamedPolicyData;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                interface INamedPolicyStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0000 */
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
namespace Policies {
class NamedPolicyData;
} /*Policies*/
} /*Management*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Management {
namespace Policies {
interface INamedPolicyData;
} /*Policies*/
} /*Management*/
} /*Windows*/
}
#endif

interface IInspectable;


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4660 */




/* interface __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4660 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4660_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4660_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0001 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("791a3c00-5aa2-5f0e-bb17-3480bc2d96cc"))
ITypedEventHandler<ABI::Windows::Management::Policies::NamedPolicyData*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Policies::NamedPolicyData*, ABI::Windows::Management::Policies::INamedPolicyData*>,IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.Management.Policies.NamedPolicyData, Object>"; }
};
typedef ITypedEventHandler<ABI::Windows::Management::Policies::NamedPolicyData*,IInspectable*> __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_t;
#define ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if !defined(__windows2Esystem_h__)
#include <Windows.System.h>
#endif // !defined(__windows2Esystem_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
class User;
} /*System*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind;


#endif /* end if !defined(__cplusplus) */


#endif



/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0001 */
/* [local] */ 




#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                
                typedef enum NamedPolicyKind NamedPolicyKind;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4661 */




/* interface __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4661 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4661_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies2Eidl_0000_4661_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0002 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable
#define DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0002_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("791a3c00-5aa2-5f0e-bb17-3480bc2d96cc")
    __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt ABI::Windows::Management::Policies::INamedPolicyData *sender,
            /* [in] */ __RPC__in_opt IInspectable *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData *sender,
            /* [in] */ __RPC__in_opt IInspectable *e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl;

    interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable
    {
        CONST_VTBL struct __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0003 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind
    {
        NamedPolicyKind_Invalid	= 0,
        NamedPolicyKind_Binary	= 1,
        NamedPolicyKind_Boolean	= 2,
        NamedPolicyKind_Int32	= 3,
        NamedPolicyKind_Int64	= 4,
        NamedPolicyKind_String	= 5
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyData[] = L"Windows.Management.Policies.INamedPolicyData";
#endif /* !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0003 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                
                /* [v1_enum] */ 
                enum NamedPolicyKind
                    {
                        NamedPolicyKind_Invalid	= 0,
                        NamedPolicyKind_Binary	= 1,
                        NamedPolicyKind_Boolean	= 2,
                        NamedPolicyKind_Int32	= 3,
                        NamedPolicyKind_Int64	= 4,
                        NamedPolicyKind_String	= 5
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Policies::INamedPolicyData */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Policies {
                    
                    MIDL_INTERFACE("38DCB198-95AC-4077-A643-8078CAE26400")
                    INamedPolicyData : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Area( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Kind( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Management::Policies::NamedPolicyKind *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsManaged( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsUserPolicy( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_User( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::IUser **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetBoolean( 
                            /* [out][retval] */ __RPC__out boolean *result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetBinary( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetInt32( 
                            /* [out][retval] */ __RPC__out INT32 *result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetInt64( 
                            /* [out][retval] */ __RPC__out INT64 *result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetString( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_Changed( 
                            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable *changedHandler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_Changed( 
                            /* [in] */ EventRegistrationToken cookie) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_INamedPolicyData = __uuidof(INamedPolicyData);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Area )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kind )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsManaged )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsUserPolicy )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_User )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoolean )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__out boolean *result);
        
        HRESULT ( STDMETHODCALLTYPE *GetBinary )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **result);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt32 )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__out INT32 *result);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt64 )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__out INT64 *result);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *result);
        
        HRESULT ( STDMETHODCALLTYPE *add_Changed )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable *changedHandler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Changed )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
            /* [in] */ EventRegistrationToken cookie);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl;

    interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_Area(This,value)	\
    ( (This)->lpVtbl -> get_Area(This,value) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_Name(This,value)	\
    ( (This)->lpVtbl -> get_Name(This,value) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_Kind(This,value)	\
    ( (This)->lpVtbl -> get_Kind(This,value) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_IsManaged(This,value)	\
    ( (This)->lpVtbl -> get_IsManaged(This,value) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_IsUserPolicy(This,value)	\
    ( (This)->lpVtbl -> get_IsUserPolicy(This,value) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_User(This,value)	\
    ( (This)->lpVtbl -> get_User(This,value) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetBoolean(This,result)	\
    ( (This)->lpVtbl -> GetBoolean(This,result) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetBinary(This,result)	\
    ( (This)->lpVtbl -> GetBinary(This,result) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetInt32(This,result)	\
    ( (This)->lpVtbl -> GetInt32(This,result) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetInt64(This,result)	\
    ( (This)->lpVtbl -> GetInt64(This,result) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetString(This,result)	\
    ( (This)->lpVtbl -> GetString(This,result) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_add_Changed(This,changedHandler,cookie)	\
    ( (This)->lpVtbl -> add_Changed(This,changedHandler,cookie) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_remove_Changed(This,cookie)	\
    ( (This)->lpVtbl -> remove_Changed(This,cookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0004 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyStatics[] = L"Windows.Management.Policies.INamedPolicyStatics";
#endif /* !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Policies::INamedPolicyStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Policies {
                    
                    MIDL_INTERFACE("7F793BE7-76C4-4058-8CAD-67662CD05F0D")
                    INamedPolicyStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetPolicyFromPath( 
                            /* [in] */ __RPC__in HSTRING area,
                            /* [in] */ __RPC__in HSTRING name,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Management::Policies::INamedPolicyData **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetPolicyFromPathForUser( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::IUser *user,
                            /* [in] */ __RPC__in HSTRING area,
                            /* [in] */ __RPC__in HSTRING name,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Management::Policies::INamedPolicyData **result) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_INamedPolicyStatics = __uuidof(INamedPolicyStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetPolicyFromPath )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
            /* [in] */ __RPC__in HSTRING area,
            /* [in] */ __RPC__in HSTRING name,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData **result);
        
        HRESULT ( STDMETHODCALLTYPE *GetPolicyFromPathForUser )( 
            __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser *user,
            /* [in] */ __RPC__in HSTRING area,
            /* [in] */ __RPC__in HSTRING name,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetPolicyFromPath(This,area,name,result)	\
    ( (This)->lpVtbl -> GetPolicyFromPath(This,area,name,result) ) 

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetPolicyFromPathForUser(This,user,area,name,result)	\
    ( (This)->lpVtbl -> GetPolicyFromPathForUser(This,user,area,name,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0005 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Management_Policies_NamedPolicy_DEFINED
#define RUNTIMECLASS_Windows_Management_Policies_NamedPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicy[] = L"Windows.Management.Policies.NamedPolicy";
#endif
#ifndef RUNTIMECLASS_Windows_Management_Policies_NamedPolicyData_DEFINED
#define RUNTIMECLASS_Windows_Management_Policies_NamedPolicyData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicyData[] = L"Windows.Management.Policies.NamedPolicyData";
#endif


/* interface __MIDL_itf_windows2Emanagement2Epolicies_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Epolicies_0000_0005_v0_0_s_ifspec;

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


