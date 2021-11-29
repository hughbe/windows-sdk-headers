

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

#ifndef __windows2Emedia2Estreaming2Einternal_h__
#define __windows2Emedia2Estreaming2Einternal_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Internal {
                    interface IMediaRendererBrokerStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Media.Streaming.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0000 */
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
namespace Media {
namespace Streaming {
class MediaRenderer;
} /*Streaming*/
} /*Media*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
namespace Streaming {
interface IMediaRenderer;
} /*Streaming*/
} /*Media*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4721 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4721 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4721_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4721_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f0d971af-e054-5616-9fdf-0903b9ceb182"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Streaming::MediaRenderer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::MediaRenderer*, ABI::Windows::Media::Streaming::IMediaRenderer*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Streaming.MediaRenderer>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Streaming::MediaRenderer*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer_USE */


/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4722 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4722 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4722_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal2Eidl_0000_4722_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("557dd3fb-4710-5059-921c-0dee68361fb5"))
IAsyncOperation<ABI::Windows::Media::Streaming::MediaRenderer*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::MediaRenderer*, ABI::Windows::Media::Streaming::IMediaRenderer*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Streaming.MediaRenderer>"; }
};
typedef IAsyncOperation<ABI::Windows::Media::Streaming::MediaRenderer*> __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer_t;
#define ____FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Emedia2Estreaming_h__)
#include <Windows.Media.Streaming.h>
#endif // !defined(__windows2Emedia2Estreaming_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
namespace Streaming {
class CreateMediaRendererOperation;
} /*Streaming*/
} /*Media*/
} /*Windows*/
}
#endif


#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Internal_IMediaRendererBrokerStatics[] = L"Windows.Media.Streaming.Internal.IMediaRendererBrokerStatics";
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0002 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::Streaming::Internal::IMediaRendererBrokerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                namespace Streaming {
                    namespace Internal {
                        
                        MIDL_INTERFACE("19974CB1-9A1D-45C0-87CF-2C1E835A981C")
                        IMediaRendererBrokerStatics : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE CreateMediaRendererAsync( 
                                /* [in] */ __RPC__in HSTRING deviceIdentifier,
                                /* [in] */ __RPC__in_opt IInspectable *mediaSessionFactoryMF,
                                /* [in] */ __RPC__in HSTRING applicationUserModelId,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer **value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE CreateMediaRendererFromBasicDeviceAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Media::Streaming::IBasicDevice *basicDevice,
                                /* [in] */ __RPC__in_opt IInspectable *mediaSessionFactoryMF,
                                /* [in] */ __RPC__in HSTRING applicationUserModelId,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer **value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IMediaRendererBrokerStatics = __uuidof(IMediaRendererBrokerStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMediaRendererAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
            /* [in] */ __RPC__in HSTRING deviceIdentifier,
            /* [in] */ __RPC__in_opt IInspectable *mediaSessionFactoryMF,
            /* [in] */ __RPC__in HSTRING applicationUserModelId,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer **value);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMediaRendererFromBasicDeviceAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice *basicDevice,
            /* [in] */ __RPC__in_opt IInspectable *mediaSessionFactoryMF,
            /* [in] */ __RPC__in HSTRING applicationUserModelId,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStaticsVtbl;

    interface __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_CreateMediaRendererAsync(This,deviceIdentifier,mediaSessionFactoryMF,applicationUserModelId,value)	\
    ( (This)->lpVtbl -> CreateMediaRendererAsync(This,deviceIdentifier,mediaSessionFactoryMF,applicationUserModelId,value) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_CreateMediaRendererFromBasicDeviceAsync(This,basicDevice,mediaSessionFactoryMF,applicationUserModelId,value)	\
    ( (This)->lpVtbl -> CreateMediaRendererFromBasicDeviceAsync(This,basicDevice,mediaSessionFactoryMF,applicationUserModelId,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Internal_MediaRendererBroker_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Internal_MediaRendererBroker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Internal_MediaRendererBroker[] = L"Windows.Media.Streaming.Internal.MediaRendererBroker";
#endif


/* interface __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Einternal_0000_0003_v0_0_s_ifspec;

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


