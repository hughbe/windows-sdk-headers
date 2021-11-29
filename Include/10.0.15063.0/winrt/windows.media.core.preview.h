

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

#ifndef __windows2Emedia2Ecore2Epreview_h__
#define __windows2Emedia2Ecore2Epreview_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                namespace Preview {
                    interface ISoundLevelBrokerStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Media.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

interface IInspectable;


/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview2Eidl_0000_4658 */




/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview2Eidl_0000_4658 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview2Eidl_0000_4658_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview2Eidl_0000_4658_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0001 */
/* [local] */ 

#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.EventHandler`1<Object>"; }
};
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define ____FIEventHandler_1_IInspectable_FWD_DEFINED__
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIEventHandler_1_IInspectable_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Emedia_h__)
#include <Windows.Media.h>
#endif // !defined(__windows2Emedia_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CSoundLevel __x_ABI_CWindows_CMedia_CSoundLevel;


#endif /* end if !defined(__cplusplus) */


#endif

#if !defined(____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_Preview_ISoundLevelBrokerStatics[] = L"Windows.Media.Core.Preview.ISoundLevelBrokerStatics";
#endif /* !defined(____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0001 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum SoundLevel SoundLevel;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::Core::Preview::ISoundLevelBrokerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                namespace Core {
                    namespace Preview {
                        
                        MIDL_INTERFACE("6A633961-DBED-464C-A09A-33412F5CAA3F")
                        ISoundLevelBrokerStatics : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SoundLevel( 
                                /* [out][retval] */ __RPC__out ABI::Windows::Media::SoundLevel *value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE add_SoundLevelChanged( 
                                /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                                /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE remove_SoundLevelChanged( 
                                /* [in] */ EventRegistrationToken token) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_ISoundLevelBrokerStatics = __uuidof(ISoundLevelBrokerStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CSoundLevel *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_SoundLevelChanged )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_SoundLevelChanged )( 
            __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStaticsVtbl;

    interface __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_get_SoundLevel(This,value)	\
    ( (This)->lpVtbl -> get_SoundLevel(This,value) ) 

#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_add_SoundLevelChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_SoundLevelChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_remove_SoundLevelChanged(This,token)	\
    ( (This)->lpVtbl -> remove_SoundLevelChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Media_Core_Preview_SoundLevelBroker_DEFINED
#define RUNTIMECLASS_Windows_Media_Core_Preview_SoundLevelBroker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_Preview_SoundLevelBroker[] = L"Windows.Media.Core.Preview.SoundLevelBroker";
#endif


/* interface __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Epreview_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


