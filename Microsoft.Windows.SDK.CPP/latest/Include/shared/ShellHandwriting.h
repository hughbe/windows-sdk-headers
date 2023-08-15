

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 501
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

#ifndef __shellhandwriting_h__
#define __shellhandwriting_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ITfTargetProximateArgs_FWD_DEFINED__
#define __ITfTargetProximateArgs_FWD_DEFINED__
typedef interface ITfTargetProximateArgs ITfTargetProximateArgs;

#endif 	/* __ITfTargetProximateArgs_FWD_DEFINED__ */


#ifndef __ITfFocusHandwritingTargetArgs_FWD_DEFINED__
#define __ITfFocusHandwritingTargetArgs_FWD_DEFINED__
typedef interface ITfFocusHandwritingTargetArgs ITfFocusHandwritingTargetArgs;

#endif 	/* __ITfFocusHandwritingTargetArgs_FWD_DEFINED__ */


#ifndef __ITfHandwritingCallbackSink_FWD_DEFINED__
#define __ITfHandwritingCallbackSink_FWD_DEFINED__
typedef interface ITfHandwritingCallbackSink ITfHandwritingCallbackSink;

#endif 	/* __ITfHandwritingCallbackSink_FWD_DEFINED__ */


#ifndef __ITfHandwriting_FWD_DEFINED__
#define __ITfHandwriting_FWD_DEFINED__
typedef interface ITfHandwriting ITfHandwriting;

#endif 	/* __ITfHandwriting_FWD_DEFINED__ */


#ifndef __IHandwritingInputRoutingCallback_FWD_DEFINED__
#define __IHandwritingInputRoutingCallback_FWD_DEFINED__
typedef interface IHandwritingInputRoutingCallback IHandwritingInputRoutingCallback;

#endif 	/* __IHandwritingInputRoutingCallback_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_shellhandwriting_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#if (NTDDI_VERSION >= NTDDI_WIN10_NI)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef /* [v1_enum] */ 
enum TfHandwritingState
    {
        TF_HANDWRITING_DEFAULT	= 0,
        TF_HANDWRITING_DISABLED	= ( TF_HANDWRITING_DEFAULT + 1 ) ,
        TF_HANDWRITING_ENABLED	= ( TF_HANDWRITING_DISABLED + 1 ) ,
        TF_HANDWRITING_POINTERDELIVERY	= ( TF_HANDWRITING_ENABLED + 1 ) 
    } 	TfHandwritingState;

typedef /* [v1_enum] */ 
enum TfHandwritingTargetProximateResponse
    {
        TF_USE_SYSTEM_DEFAULT	= 0,
        TF_NO_HANDWRITING_TARGET_PROXIMATE	= ( TF_USE_SYSTEM_DEFAULT + 1 ) ,
        TF_HANDWRITING_TARGET_PROXIMATE	= ( TF_NO_HANDWRITING_TARGET_PROXIMATE + 1 ) ,
        TF_USE_POINTER_DELIVERY	= ( TF_HANDWRITING_TARGET_PROXIMATE + 1 ) 
    } 	TfHandwritingTargetProximateResponse;

typedef /* [v1_enum] */ 
enum TfHandwritingFocusTargetResponse
    {
        TF_USE_SYSTEM_TARGETING	= 0,
        TF_NO_HANDWRITING_TARGET	= ( TF_USE_SYSTEM_TARGETING + 1 ) ,
        TF_HANDWRITING_TARGET_FOCUSED	= ( TF_NO_HANDWRITING_TARGET + 1 ) ,
        TF_HANDWRITING_TARGET_FOCUSED_NO_CORRECTIONS	= ( TF_HANDWRITING_TARGET_FOCUSED + 1 ) 
    } 	TfHandwritingFocusTargetResponse;



extern RPC_IF_HANDLE __MIDL_itf_shellhandwriting_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shellhandwriting_0000_0000_v0_0_s_ifspec;

#ifndef __ITfTargetProximateArgs_INTERFACE_DEFINED__
#define __ITfTargetProximateArgs_INTERFACE_DEFINED__

/* interface ITfTargetProximateArgs */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITfTargetProximateArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C0450C5-7B47-4343-ABF7-23009D2640D2")
    ITfTargetProximateArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTopLevelWindow( 
            /* [out] */ HWND *topLevelWindow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTargetScreenPoint( 
            /* [out] */ POINT *targetScreenPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDistanceBufferPixels( 
            /* [out] */ SIZE *distanceBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetResponse( 
            TfHandwritingTargetProximateResponse response) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITfTargetProximateArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfTargetProximateArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfTargetProximateArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfTargetProximateArgs * This);
        
        DECLSPEC_XFGVIRT(ITfTargetProximateArgs, GetTopLevelWindow)
        HRESULT ( STDMETHODCALLTYPE *GetTopLevelWindow )( 
            ITfTargetProximateArgs * This,
            /* [out] */ HWND *topLevelWindow);
        
        DECLSPEC_XFGVIRT(ITfTargetProximateArgs, GetTargetScreenPoint)
        HRESULT ( STDMETHODCALLTYPE *GetTargetScreenPoint )( 
            ITfTargetProximateArgs * This,
            /* [out] */ POINT *targetScreenPoint);
        
        DECLSPEC_XFGVIRT(ITfTargetProximateArgs, GetDistanceBufferPixels)
        HRESULT ( STDMETHODCALLTYPE *GetDistanceBufferPixels )( 
            ITfTargetProximateArgs * This,
            /* [out] */ SIZE *distanceBuffer);
        
        DECLSPEC_XFGVIRT(ITfTargetProximateArgs, SetResponse)
        HRESULT ( STDMETHODCALLTYPE *SetResponse )( 
            ITfTargetProximateArgs * This,
            TfHandwritingTargetProximateResponse response);
        
        END_INTERFACE
    } ITfTargetProximateArgsVtbl;

    interface ITfTargetProximateArgs
    {
        CONST_VTBL struct ITfTargetProximateArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfTargetProximateArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfTargetProximateArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfTargetProximateArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfTargetProximateArgs_GetTopLevelWindow(This,topLevelWindow)	\
    ( (This)->lpVtbl -> GetTopLevelWindow(This,topLevelWindow) ) 

#define ITfTargetProximateArgs_GetTargetScreenPoint(This,targetScreenPoint)	\
    ( (This)->lpVtbl -> GetTargetScreenPoint(This,targetScreenPoint) ) 

#define ITfTargetProximateArgs_GetDistanceBufferPixels(This,distanceBuffer)	\
    ( (This)->lpVtbl -> GetDistanceBufferPixels(This,distanceBuffer) ) 

#define ITfTargetProximateArgs_SetResponse(This,response)	\
    ( (This)->lpVtbl -> SetResponse(This,response) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfTargetProximateArgs_INTERFACE_DEFINED__ */


#ifndef __ITfFocusHandwritingTargetArgs_INTERFACE_DEFINED__
#define __ITfFocusHandwritingTargetArgs_INTERFACE_DEFINED__

/* interface ITfFocusHandwritingTargetArgs */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITfFocusHandwritingTargetArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FEA19D78-F456-48B4-A1DF-75C14887D27F")
    ITfFocusHandwritingTargetArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTopLevelWindow( 
            /* [out] */ HWND *topLevelWindow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTargetScreenArea( 
            /* [out] */ RECT *targetScreenArea) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDistanceBufferPixels( 
            /* [out] */ SIZE *distanceBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetResponse( 
            TfHandwritingFocusTargetResponse response) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITfFocusHandwritingTargetArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFocusHandwritingTargetArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFocusHandwritingTargetArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFocusHandwritingTargetArgs * This);
        
        DECLSPEC_XFGVIRT(ITfFocusHandwritingTargetArgs, GetTopLevelWindow)
        HRESULT ( STDMETHODCALLTYPE *GetTopLevelWindow )( 
            ITfFocusHandwritingTargetArgs * This,
            /* [out] */ HWND *topLevelWindow);
        
        DECLSPEC_XFGVIRT(ITfFocusHandwritingTargetArgs, GetTargetScreenArea)
        HRESULT ( STDMETHODCALLTYPE *GetTargetScreenArea )( 
            ITfFocusHandwritingTargetArgs * This,
            /* [out] */ RECT *targetScreenArea);
        
        DECLSPEC_XFGVIRT(ITfFocusHandwritingTargetArgs, GetDistanceBufferPixels)
        HRESULT ( STDMETHODCALLTYPE *GetDistanceBufferPixels )( 
            ITfFocusHandwritingTargetArgs * This,
            /* [out] */ SIZE *distanceBuffer);
        
        DECLSPEC_XFGVIRT(ITfFocusHandwritingTargetArgs, SetResponse)
        HRESULT ( STDMETHODCALLTYPE *SetResponse )( 
            ITfFocusHandwritingTargetArgs * This,
            TfHandwritingFocusTargetResponse response);
        
        END_INTERFACE
    } ITfFocusHandwritingTargetArgsVtbl;

    interface ITfFocusHandwritingTargetArgs
    {
        CONST_VTBL struct ITfFocusHandwritingTargetArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFocusHandwritingTargetArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFocusHandwritingTargetArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFocusHandwritingTargetArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFocusHandwritingTargetArgs_GetTopLevelWindow(This,topLevelWindow)	\
    ( (This)->lpVtbl -> GetTopLevelWindow(This,topLevelWindow) ) 

#define ITfFocusHandwritingTargetArgs_GetTargetScreenArea(This,targetScreenArea)	\
    ( (This)->lpVtbl -> GetTargetScreenArea(This,targetScreenArea) ) 

#define ITfFocusHandwritingTargetArgs_GetDistanceBufferPixels(This,distanceBuffer)	\
    ( (This)->lpVtbl -> GetDistanceBufferPixels(This,distanceBuffer) ) 

#define ITfFocusHandwritingTargetArgs_SetResponse(This,response)	\
    ( (This)->lpVtbl -> SetResponse(This,response) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFocusHandwritingTargetArgs_INTERFACE_DEFINED__ */


#ifndef __ITfHandwritingCallbackSink_INTERFACE_DEFINED__
#define __ITfHandwritingCallbackSink_INTERFACE_DEFINED__

/* interface ITfHandwritingCallbackSink */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITfHandwritingCallbackSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23FE8915-DEBF-4558-A903-97BFBCB806FC")
    ITfHandwritingCallbackSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsHandwritingTargetProximate( 
            /* [in] */ ITfTargetProximateArgs *targetProximateArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FocusHandwritingTarget( 
            /* [in] */ ITfFocusHandwritingTargetArgs *focusHandwritingTargetArgs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITfHandwritingCallbackSinkVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfHandwritingCallbackSink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfHandwritingCallbackSink * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfHandwritingCallbackSink * This);
        
        DECLSPEC_XFGVIRT(ITfHandwritingCallbackSink, IsHandwritingTargetProximate)
        HRESULT ( STDMETHODCALLTYPE *IsHandwritingTargetProximate )( 
            ITfHandwritingCallbackSink * This,
            /* [in] */ ITfTargetProximateArgs *targetProximateArgs);
        
        DECLSPEC_XFGVIRT(ITfHandwritingCallbackSink, FocusHandwritingTarget)
        HRESULT ( STDMETHODCALLTYPE *FocusHandwritingTarget )( 
            ITfHandwritingCallbackSink * This,
            /* [in] */ ITfFocusHandwritingTargetArgs *focusHandwritingTargetArgs);
        
        END_INTERFACE
    } ITfHandwritingCallbackSinkVtbl;

    interface ITfHandwritingCallbackSink
    {
        CONST_VTBL struct ITfHandwritingCallbackSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfHandwritingCallbackSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfHandwritingCallbackSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfHandwritingCallbackSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfHandwritingCallbackSink_IsHandwritingTargetProximate(This,targetProximateArgs)	\
    ( (This)->lpVtbl -> IsHandwritingTargetProximate(This,targetProximateArgs) ) 

#define ITfHandwritingCallbackSink_FocusHandwritingTarget(This,focusHandwritingTargetArgs)	\
    ( (This)->lpVtbl -> FocusHandwritingTarget(This,focusHandwritingTargetArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfHandwritingCallbackSink_INTERFACE_DEFINED__ */


#ifndef __ITfHandwriting_INTERFACE_DEFINED__
#define __ITfHandwriting_INTERFACE_DEFINED__

/* interface ITfHandwriting */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITfHandwriting;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D829663-627B-4FA5-B759-68A6253BDEBE")
    ITfHandwriting : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHandwritingState( 
            /* [out] */ TfHandwritingState *handwritingState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHandwritingState( 
            TfHandwritingState handwritingState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestHandwritingForPointer( 
            UINT64 pointerId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHandwritingDistanceBuffer( 
            /* [out] */ SIZE *distanceBufferPixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TapEvaluatedForHandwritingPointer( 
            UINT64 pointerId,
            BOOL wasTapDetected) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITfHandwritingVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfHandwriting * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfHandwriting * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfHandwriting * This);
        
        DECLSPEC_XFGVIRT(ITfHandwriting, GetHandwritingState)
        HRESULT ( STDMETHODCALLTYPE *GetHandwritingState )( 
            ITfHandwriting * This,
            /* [out] */ TfHandwritingState *handwritingState);
        
        DECLSPEC_XFGVIRT(ITfHandwriting, SetHandwritingState)
        HRESULT ( STDMETHODCALLTYPE *SetHandwritingState )( 
            ITfHandwriting * This,
            TfHandwritingState handwritingState);
        
        DECLSPEC_XFGVIRT(ITfHandwriting, RequestHandwritingForPointer)
        HRESULT ( STDMETHODCALLTYPE *RequestHandwritingForPointer )( 
            ITfHandwriting * This,
            UINT64 pointerId);
        
        DECLSPEC_XFGVIRT(ITfHandwriting, GetHandwritingDistanceBuffer)
        HRESULT ( STDMETHODCALLTYPE *GetHandwritingDistanceBuffer )( 
            ITfHandwriting * This,
            /* [out] */ SIZE *distanceBufferPixels);
        
        DECLSPEC_XFGVIRT(ITfHandwriting, TapEvaluatedForHandwritingPointer)
        HRESULT ( STDMETHODCALLTYPE *TapEvaluatedForHandwritingPointer )( 
            ITfHandwriting * This,
            UINT64 pointerId,
            BOOL wasTapDetected);
        
        END_INTERFACE
    } ITfHandwritingVtbl;

    interface ITfHandwriting
    {
        CONST_VTBL struct ITfHandwritingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfHandwriting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfHandwriting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfHandwriting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfHandwriting_GetHandwritingState(This,handwritingState)	\
    ( (This)->lpVtbl -> GetHandwritingState(This,handwritingState) ) 

#define ITfHandwriting_SetHandwritingState(This,handwritingState)	\
    ( (This)->lpVtbl -> SetHandwritingState(This,handwritingState) ) 

#define ITfHandwriting_RequestHandwritingForPointer(This,pointerId)	\
    ( (This)->lpVtbl -> RequestHandwritingForPointer(This,pointerId) ) 

#define ITfHandwriting_GetHandwritingDistanceBuffer(This,distanceBufferPixels)	\
    ( (This)->lpVtbl -> GetHandwritingDistanceBuffer(This,distanceBufferPixels) ) 

#define ITfHandwriting_TapEvaluatedForHandwritingPointer(This,pointerId,wasTapDetected)	\
    ( (This)->lpVtbl -> TapEvaluatedForHandwritingPointer(This,pointerId,wasTapDetected) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfHandwriting_INTERFACE_DEFINED__ */


#ifndef __IHandwritingInputRoutingCallback_INTERFACE_DEFINED__
#define __IHandwritingInputRoutingCallback_INTERFACE_DEFINED__

/* interface IHandwritingInputRoutingCallback */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_IHandwritingInputRoutingCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FB403AC9-2441-48A9-B294-3423834FD13C")
    IHandwritingInputRoutingCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetThreadIdForInput( 
            UINT64 PointerId,
            POINT *targetScreenPoint,
            HWND targetHWnd,
            /* [out] */ UINT32 *threadId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHandwritingInputRoutingCallbackVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHandwritingInputRoutingCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHandwritingInputRoutingCallback * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHandwritingInputRoutingCallback * This);
        
        DECLSPEC_XFGVIRT(IHandwritingInputRoutingCallback, GetThreadIdForInput)
        HRESULT ( STDMETHODCALLTYPE *GetThreadIdForInput )( 
            IHandwritingInputRoutingCallback * This,
            UINT64 PointerId,
            POINT *targetScreenPoint,
            HWND targetHWnd,
            /* [out] */ UINT32 *threadId);
        
        END_INTERFACE
    } IHandwritingInputRoutingCallbackVtbl;

    interface IHandwritingInputRoutingCallback
    {
        CONST_VTBL struct IHandwritingInputRoutingCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHandwritingInputRoutingCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHandwritingInputRoutingCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHandwritingInputRoutingCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHandwritingInputRoutingCallback_GetThreadIdForInput(This,PointerId,targetScreenPoint,targetHWnd,threadId)	\
    ( (This)->lpVtbl -> GetThreadIdForInput(This,PointerId,targetScreenPoint,targetHWnd,threadId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHandwritingInputRoutingCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shellhandwriting_0000_0005 */
/* [local] */ 

HRESULT WINAPI RegisterHandwritingInputRoutingCallback(IHandwritingInputRoutingCallback * callback);
HRESULT WINAPI GetHandwritingStrokeIdForPointer(_In_ UINT32 pointerId, _Out_ UINT64* handwritingStrokeId);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
#endif // NTDDI_WIN10_NI


extern RPC_IF_HANDLE __MIDL_itf_shellhandwriting_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shellhandwriting_0000_0005_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


