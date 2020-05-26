

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for correngine.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


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
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __correngine_h__
#define __correngine_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICorrelationEngine_FWD_DEFINED__
#define __ICorrelationEngine_FWD_DEFINED__
typedef interface ICorrelationEngine ICorrelationEngine;
#endif 	/* __ICorrelationEngine_FWD_DEFINED__ */


#ifndef __CorrelationEngine_FWD_DEFINED__
#define __CorrelationEngine_FWD_DEFINED__

#ifdef __cplusplus
typedef class CorrelationEngine CorrelationEngine;
#else
typedef struct CorrelationEngine CorrelationEngine;
#endif /* __cplusplus */

#endif 	/* __CorrelationEngine_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_correngine_0000_0000 */
/* [local] */ 

//+--------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1992-2007.
//
//---------------------------------------------------------------------------


extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0000_v0_0_s_ifspec;

#ifndef __ICorrelationEngine_INTERFACE_DEFINED__
#define __ICorrelationEngine_INTERFACE_DEFINED__

/* interface ICorrelationEngine */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICorrelationEngine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A188440E-DB11-45B8-B42C-B2149FA71453")
    ICorrelationEngine : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RetainGlobalEvents( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RetainGlobalEvents( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Filter( 
            /* [in] */ __RPC__in BSTR InputTraceFile,
            /* [in] */ __RPC__in BSTR OutputTraceFile,
            /* [in] */ __RPC__in BSTR FilterActivityId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Normalize( 
            /* [in] */ __RPC__in BSTR InputTraceFile,
            /* [in] */ __RPC__in BSTR OutputTraceFile) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RetainPII( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RetainPII( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RetainCorrelationEvents( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RetainCorrelationEvents( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICorrelationEngineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICorrelationEngine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICorrelationEngine * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICorrelationEngine * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICorrelationEngine * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RetainGlobalEvents )( 
            __RPC__in ICorrelationEngine * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RetainGlobalEvents )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Filter )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ __RPC__in BSTR InputTraceFile,
            /* [in] */ __RPC__in BSTR OutputTraceFile,
            /* [in] */ __RPC__in BSTR FilterActivityId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Normalize )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ __RPC__in BSTR InputTraceFile,
            /* [in] */ __RPC__in BSTR OutputTraceFile);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RetainPII )( 
            __RPC__in ICorrelationEngine * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RetainPII )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RetainCorrelationEvents )( 
            __RPC__in ICorrelationEngine * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RetainCorrelationEvents )( 
            __RPC__in ICorrelationEngine * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } ICorrelationEngineVtbl;

    interface ICorrelationEngine
    {
        CONST_VTBL struct ICorrelationEngineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICorrelationEngine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICorrelationEngine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICorrelationEngine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICorrelationEngine_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICorrelationEngine_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICorrelationEngine_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICorrelationEngine_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICorrelationEngine_get_RetainGlobalEvents(This,pVal)	\
    ( (This)->lpVtbl -> get_RetainGlobalEvents(This,pVal) ) 

#define ICorrelationEngine_put_RetainGlobalEvents(This,newVal)	\
    ( (This)->lpVtbl -> put_RetainGlobalEvents(This,newVal) ) 

#define ICorrelationEngine_Filter(This,InputTraceFile,OutputTraceFile,FilterActivityId)	\
    ( (This)->lpVtbl -> Filter(This,InputTraceFile,OutputTraceFile,FilterActivityId) ) 

#define ICorrelationEngine_Normalize(This,InputTraceFile,OutputTraceFile)	\
    ( (This)->lpVtbl -> Normalize(This,InputTraceFile,OutputTraceFile) ) 

#define ICorrelationEngine_get_RetainPII(This,pVal)	\
    ( (This)->lpVtbl -> get_RetainPII(This,pVal) ) 

#define ICorrelationEngine_put_RetainPII(This,newVal)	\
    ( (This)->lpVtbl -> put_RetainPII(This,newVal) ) 

#define ICorrelationEngine_get_RetainCorrelationEvents(This,pVal)	\
    ( (This)->lpVtbl -> get_RetainCorrelationEvents(This,pVal) ) 

#define ICorrelationEngine_put_RetainCorrelationEvents(This,newVal)	\
    ( (This)->lpVtbl -> put_RetainCorrelationEvents(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICorrelationEngine_INTERFACE_DEFINED__ */



#ifndef __CorrEngineLib_LIBRARY_DEFINED__
#define __CorrEngineLib_LIBRARY_DEFINED__

/* library CorrEngineLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CorrEngineLib;

EXTERN_C const CLSID CLSID_CorrelationEngine;

#ifdef __cplusplus

class DECLSPEC_UUID("FCDC2CF5-ABCD-4BA5-94DA-1823AE06FE2B")
CorrelationEngine;
#endif
#endif /* __CorrEngineLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



