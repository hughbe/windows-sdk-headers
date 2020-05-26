

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0416 */
/* Compiler settings for dshowasf.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __dshowasf_h__
#define __dshowasf_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAMWMBufferPass_FWD_DEFINED__
#define __IAMWMBufferPass_FWD_DEFINED__
typedef interface IAMWMBufferPass IAMWMBufferPass;
#endif 	/* __IAMWMBufferPass_FWD_DEFINED__ */


#ifndef __IAMWMBufferPassCallback_FWD_DEFINED__
#define __IAMWMBufferPassCallback_FWD_DEFINED__
typedef interface IAMWMBufferPassCallback IAMWMBufferPassCallback;
#endif 	/* __IAMWMBufferPassCallback_FWD_DEFINED__ */


#ifndef __IConfigAsfWriter_FWD_DEFINED__
#define __IConfigAsfWriter_FWD_DEFINED__
typedef interface IConfigAsfWriter IConfigAsfWriter;
#endif 	/* __IConfigAsfWriter_FWD_DEFINED__ */


#ifndef __IConfigAsfWriter2_FWD_DEFINED__
#define __IConfigAsfWriter2_FWD_DEFINED__
typedef interface IConfigAsfWriter2 IConfigAsfWriter2;
#endif 	/* __IConfigAsfWriter2_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "strmif.h"
#include "wmsdkidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_dshowasf_0000 */
/* [local] */ 

//=========================================================================
//
// Microsoft Windows Media Technologies
// Copyright (C) Microsoft Corporation.  All Rights Reserved.
//
//=========================================================================
EXTERN_GUID( IID_IConfigAsfWriter2,0x7989ccaa, 0x53f0, 0x44f0, 0x88, 0x4a, 0xf3, 0xb0, 0x3f, 0x6a, 0xe0, 0x66 );
EXTERN_GUID( IID_IConfigAsfWriter,0x45086030,0xF7E4,0x486a,0xB5,0x04,0x82,0x6B,0xB5,0x79,0x2A,0x3B );
EXTERN_GUID( IID_IAMWMBufferPass,0x6dd816d7, 0xe740, 0x4123, 0x9e, 0x24, 0x24, 0x44, 0x41, 0x26, 0x44, 0xd8 );
EXTERN_GUID( IID_IAMWMBufferPassCallback,0xb25b8372, 0xd2d2, 0x44b2, 0x86, 0x53, 0x1b, 0x8d, 0xae, 0x33, 0x24, 0x89 );
#ifndef EC_PREPROCESS_COMPLETE
#define EC_PREPROCESS_COMPLETE 0x56
#endif








extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_v0_0_s_ifspec;

#ifndef __IAMWMBufferPass_INTERFACE_DEFINED__
#define __IAMWMBufferPass_INTERFACE_DEFINED__

/* interface IAMWMBufferPass */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAMWMBufferPass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6DD816D7-E740-4123-9E24-2444412644D8")
    IAMWMBufferPass : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNotify( 
            /* [in] */ IAMWMBufferPassCallback *pCallback) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAMWMBufferPassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAMWMBufferPass * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAMWMBufferPass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAMWMBufferPass * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNotify )( 
            IAMWMBufferPass * This,
            /* [in] */ IAMWMBufferPassCallback *pCallback);
        
        END_INTERFACE
    } IAMWMBufferPassVtbl;

    interface IAMWMBufferPass
    {
        CONST_VTBL struct IAMWMBufferPassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAMWMBufferPass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAMWMBufferPass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAMWMBufferPass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAMWMBufferPass_SetNotify(This,pCallback)	\
    ( (This)->lpVtbl -> SetNotify(This,pCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IAMWMBufferPass_SetNotify_Proxy( 
    IAMWMBufferPass * This,
    /* [in] */ IAMWMBufferPassCallback *pCallback);


void __RPC_STUB IAMWMBufferPass_SetNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAMWMBufferPass_INTERFACE_DEFINED__ */


#ifndef __IAMWMBufferPassCallback_INTERFACE_DEFINED__
#define __IAMWMBufferPassCallback_INTERFACE_DEFINED__

/* interface IAMWMBufferPassCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAMWMBufferPassCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B25B8372-D2D2-44b2-8653-1B8DAE332489")
    IAMWMBufferPassCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ INSSBuffer3 *pNSSBuffer3,
            /* [in] */ IPin *pPin,
            /* [in] */ REFERENCE_TIME *prtStart,
            /* [in] */ REFERENCE_TIME *prtEnd) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAMWMBufferPassCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAMWMBufferPassCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAMWMBufferPassCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAMWMBufferPassCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IAMWMBufferPassCallback * This,
            /* [in] */ INSSBuffer3 *pNSSBuffer3,
            /* [in] */ IPin *pPin,
            /* [in] */ REFERENCE_TIME *prtStart,
            /* [in] */ REFERENCE_TIME *prtEnd);
        
        END_INTERFACE
    } IAMWMBufferPassCallbackVtbl;

    interface IAMWMBufferPassCallback
    {
        CONST_VTBL struct IAMWMBufferPassCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAMWMBufferPassCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAMWMBufferPassCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAMWMBufferPassCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAMWMBufferPassCallback_Notify(This,pNSSBuffer3,pPin,prtStart,prtEnd)	\
    ( (This)->lpVtbl -> Notify(This,pNSSBuffer3,pPin,prtStart,prtEnd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IAMWMBufferPassCallback_Notify_Proxy( 
    IAMWMBufferPassCallback * This,
    /* [in] */ INSSBuffer3 *pNSSBuffer3,
    /* [in] */ IPin *pPin,
    /* [in] */ REFERENCE_TIME *prtStart,
    /* [in] */ REFERENCE_TIME *prtEnd);


void __RPC_STUB IAMWMBufferPassCallback_Notify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAMWMBufferPassCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dshowasf_0506 */
/* [local] */ 


enum _AM_ASFWRITERCONFIG_PARAM
    {	AM_CONFIGASFWRITER_PARAM_AUTOINDEX	= 1,
	AM_CONFIGASFWRITER_PARAM_MULTIPASS	= ( AM_CONFIGASFWRITER_PARAM_AUTOINDEX + 1 ) ,
	AM_CONFIGASFWRITER_PARAM_DONTCOMPRESS	= ( AM_CONFIGASFWRITER_PARAM_MULTIPASS + 1 ) 
    } ;


extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0506_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0506_v0_0_s_ifspec;

#ifndef __IConfigAsfWriter_INTERFACE_DEFINED__
#define __IConfigAsfWriter_INTERFACE_DEFINED__

/* interface IConfigAsfWriter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IConfigAsfWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45086030-F7E4-486a-B504-826BB5792A3B")
    IConfigAsfWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConfigureFilterUsingProfileId( 
            /* [in] */ DWORD dwProfileId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentProfileId( 
            /* [out] */ DWORD *pdwProfileId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureFilterUsingProfileGuid( 
            /* [in] */ REFGUID guidProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentProfileGuid( 
            /* [out] */ GUID *pProfileGuid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureFilterUsingProfile( 
            /* [in] */ IWMProfile *pProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentProfile( 
            /* [out] */ IWMProfile **ppProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIndexMode( 
            /* [in] */ BOOL bIndexFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIndexMode( 
            /* [out] */ BOOL *pbIndexFile) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigAsfWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigAsfWriter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigAsfWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigAsfWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileId )( 
            IConfigAsfWriter * This,
            /* [in] */ DWORD dwProfileId);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileId )( 
            IConfigAsfWriter * This,
            /* [out] */ DWORD *pdwProfileId);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileGuid )( 
            IConfigAsfWriter * This,
            /* [in] */ REFGUID guidProfile);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileGuid )( 
            IConfigAsfWriter * This,
            /* [out] */ GUID *pProfileGuid);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfile )( 
            IConfigAsfWriter * This,
            /* [in] */ IWMProfile *pProfile);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfile )( 
            IConfigAsfWriter * This,
            /* [out] */ IWMProfile **ppProfile);
        
        HRESULT ( STDMETHODCALLTYPE *SetIndexMode )( 
            IConfigAsfWriter * This,
            /* [in] */ BOOL bIndexFile);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndexMode )( 
            IConfigAsfWriter * This,
            /* [out] */ BOOL *pbIndexFile);
        
        END_INTERFACE
    } IConfigAsfWriterVtbl;

    interface IConfigAsfWriter
    {
        CONST_VTBL struct IConfigAsfWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigAsfWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigAsfWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigAsfWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigAsfWriter_ConfigureFilterUsingProfileId(This,dwProfileId)	\
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileId(This,dwProfileId) ) 

#define IConfigAsfWriter_GetCurrentProfileId(This,pdwProfileId)	\
    ( (This)->lpVtbl -> GetCurrentProfileId(This,pdwProfileId) ) 

#define IConfigAsfWriter_ConfigureFilterUsingProfileGuid(This,guidProfile)	\
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileGuid(This,guidProfile) ) 

#define IConfigAsfWriter_GetCurrentProfileGuid(This,pProfileGuid)	\
    ( (This)->lpVtbl -> GetCurrentProfileGuid(This,pProfileGuid) ) 

#define IConfigAsfWriter_ConfigureFilterUsingProfile(This,pProfile)	\
    ( (This)->lpVtbl -> ConfigureFilterUsingProfile(This,pProfile) ) 

#define IConfigAsfWriter_GetCurrentProfile(This,ppProfile)	\
    ( (This)->lpVtbl -> GetCurrentProfile(This,ppProfile) ) 

#define IConfigAsfWriter_SetIndexMode(This,bIndexFile)	\
    ( (This)->lpVtbl -> SetIndexMode(This,bIndexFile) ) 

#define IConfigAsfWriter_GetIndexMode(This,pbIndexFile)	\
    ( (This)->lpVtbl -> GetIndexMode(This,pbIndexFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IConfigAsfWriter_ConfigureFilterUsingProfileId_Proxy( 
    IConfigAsfWriter * This,
    /* [in] */ DWORD dwProfileId);


void __RPC_STUB IConfigAsfWriter_ConfigureFilterUsingProfileId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter_GetCurrentProfileId_Proxy( 
    IConfigAsfWriter * This,
    /* [out] */ DWORD *pdwProfileId);


void __RPC_STUB IConfigAsfWriter_GetCurrentProfileId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter_ConfigureFilterUsingProfileGuid_Proxy( 
    IConfigAsfWriter * This,
    /* [in] */ REFGUID guidProfile);


void __RPC_STUB IConfigAsfWriter_ConfigureFilterUsingProfileGuid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter_GetCurrentProfileGuid_Proxy( 
    IConfigAsfWriter * This,
    /* [out] */ GUID *pProfileGuid);


void __RPC_STUB IConfigAsfWriter_GetCurrentProfileGuid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter_ConfigureFilterUsingProfile_Proxy( 
    IConfigAsfWriter * This,
    /* [in] */ IWMProfile *pProfile);


void __RPC_STUB IConfigAsfWriter_ConfigureFilterUsingProfile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter_GetCurrentProfile_Proxy( 
    IConfigAsfWriter * This,
    /* [out] */ IWMProfile **ppProfile);


void __RPC_STUB IConfigAsfWriter_GetCurrentProfile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter_SetIndexMode_Proxy( 
    IConfigAsfWriter * This,
    /* [in] */ BOOL bIndexFile);


void __RPC_STUB IConfigAsfWriter_SetIndexMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter_GetIndexMode_Proxy( 
    IConfigAsfWriter * This,
    /* [out] */ BOOL *pbIndexFile);


void __RPC_STUB IConfigAsfWriter_GetIndexMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IConfigAsfWriter_INTERFACE_DEFINED__ */


#ifndef __IConfigAsfWriter2_INTERFACE_DEFINED__
#define __IConfigAsfWriter2_INTERFACE_DEFINED__

/* interface IConfigAsfWriter2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IConfigAsfWriter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7989CCAA-53F0-44f0-884A-F3B03F6AE066")
    IConfigAsfWriter2 : public IConfigAsfWriter
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StreamNumFromPin( 
            /* [in] */ IPin *pPin,
            /* [out] */ WORD *pwStreamNum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParam( 
            /* [in] */ DWORD dwParam,
            /* [in] */ DWORD dwParam1,
            /* [in] */ DWORD dwParam2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParam( 
            /* [in] */ DWORD dwParam,
            /* [out] */ DWORD *pdwParam1,
            /* [out] */ DWORD *pdwParam2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMultiPassState( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigAsfWriter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigAsfWriter2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigAsfWriter2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigAsfWriter2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileId )( 
            IConfigAsfWriter2 * This,
            /* [in] */ DWORD dwProfileId);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileId )( 
            IConfigAsfWriter2 * This,
            /* [out] */ DWORD *pdwProfileId);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileGuid )( 
            IConfigAsfWriter2 * This,
            /* [in] */ REFGUID guidProfile);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileGuid )( 
            IConfigAsfWriter2 * This,
            /* [out] */ GUID *pProfileGuid);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfile )( 
            IConfigAsfWriter2 * This,
            /* [in] */ IWMProfile *pProfile);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfile )( 
            IConfigAsfWriter2 * This,
            /* [out] */ IWMProfile **ppProfile);
        
        HRESULT ( STDMETHODCALLTYPE *SetIndexMode )( 
            IConfigAsfWriter2 * This,
            /* [in] */ BOOL bIndexFile);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndexMode )( 
            IConfigAsfWriter2 * This,
            /* [out] */ BOOL *pbIndexFile);
        
        HRESULT ( STDMETHODCALLTYPE *StreamNumFromPin )( 
            IConfigAsfWriter2 * This,
            /* [in] */ IPin *pPin,
            /* [out] */ WORD *pwStreamNum);
        
        HRESULT ( STDMETHODCALLTYPE *SetParam )( 
            IConfigAsfWriter2 * This,
            /* [in] */ DWORD dwParam,
            /* [in] */ DWORD dwParam1,
            /* [in] */ DWORD dwParam2);
        
        HRESULT ( STDMETHODCALLTYPE *GetParam )( 
            IConfigAsfWriter2 * This,
            /* [in] */ DWORD dwParam,
            /* [out] */ DWORD *pdwParam1,
            /* [out] */ DWORD *pdwParam2);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMultiPassState )( 
            IConfigAsfWriter2 * This);
        
        END_INTERFACE
    } IConfigAsfWriter2Vtbl;

    interface IConfigAsfWriter2
    {
        CONST_VTBL struct IConfigAsfWriter2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigAsfWriter2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigAsfWriter2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigAsfWriter2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigAsfWriter2_ConfigureFilterUsingProfileId(This,dwProfileId)	\
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileId(This,dwProfileId) ) 

#define IConfigAsfWriter2_GetCurrentProfileId(This,pdwProfileId)	\
    ( (This)->lpVtbl -> GetCurrentProfileId(This,pdwProfileId) ) 

#define IConfigAsfWriter2_ConfigureFilterUsingProfileGuid(This,guidProfile)	\
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileGuid(This,guidProfile) ) 

#define IConfigAsfWriter2_GetCurrentProfileGuid(This,pProfileGuid)	\
    ( (This)->lpVtbl -> GetCurrentProfileGuid(This,pProfileGuid) ) 

#define IConfigAsfWriter2_ConfigureFilterUsingProfile(This,pProfile)	\
    ( (This)->lpVtbl -> ConfigureFilterUsingProfile(This,pProfile) ) 

#define IConfigAsfWriter2_GetCurrentProfile(This,ppProfile)	\
    ( (This)->lpVtbl -> GetCurrentProfile(This,ppProfile) ) 

#define IConfigAsfWriter2_SetIndexMode(This,bIndexFile)	\
    ( (This)->lpVtbl -> SetIndexMode(This,bIndexFile) ) 

#define IConfigAsfWriter2_GetIndexMode(This,pbIndexFile)	\
    ( (This)->lpVtbl -> GetIndexMode(This,pbIndexFile) ) 


#define IConfigAsfWriter2_StreamNumFromPin(This,pPin,pwStreamNum)	\
    ( (This)->lpVtbl -> StreamNumFromPin(This,pPin,pwStreamNum) ) 

#define IConfigAsfWriter2_SetParam(This,dwParam,dwParam1,dwParam2)	\
    ( (This)->lpVtbl -> SetParam(This,dwParam,dwParam1,dwParam2) ) 

#define IConfigAsfWriter2_GetParam(This,dwParam,pdwParam1,pdwParam2)	\
    ( (This)->lpVtbl -> GetParam(This,dwParam,pdwParam1,pdwParam2) ) 

#define IConfigAsfWriter2_ResetMultiPassState(This)	\
    ( (This)->lpVtbl -> ResetMultiPassState(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IConfigAsfWriter2_StreamNumFromPin_Proxy( 
    IConfigAsfWriter2 * This,
    /* [in] */ IPin *pPin,
    /* [out] */ WORD *pwStreamNum);


void __RPC_STUB IConfigAsfWriter2_StreamNumFromPin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter2_SetParam_Proxy( 
    IConfigAsfWriter2 * This,
    /* [in] */ DWORD dwParam,
    /* [in] */ DWORD dwParam1,
    /* [in] */ DWORD dwParam2);


void __RPC_STUB IConfigAsfWriter2_SetParam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter2_GetParam_Proxy( 
    IConfigAsfWriter2 * This,
    /* [in] */ DWORD dwParam,
    /* [out] */ DWORD *pdwParam1,
    /* [out] */ DWORD *pdwParam2);


void __RPC_STUB IConfigAsfWriter2_GetParam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConfigAsfWriter2_ResetMultiPassState_Proxy( 
    IConfigAsfWriter2 * This);


void __RPC_STUB IConfigAsfWriter2_ResetMultiPassState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IConfigAsfWriter2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dshowasf_0508 */
/* [local] */ 

////////////////////////////////////////////////////////////////
//
// Windows Media Filters compatibility option flags
//
static DWORD EXCLUDE_SCRIPT_STREAM_DELIVERY_SYNCHRONIZATION = 0x00000001;

////////////////////////////////////////////////////////////////
//
// ATOM strings to match compatibility option flags above for certain applications that don't want to (or not allowed to) update registry entries
// These need to be setup by the application using the WM filters to enable the particular functionality
//
static const WCHAR* g_wszExcludeScriptStreamDeliverySynchronization = L"ExcludeScriptStreamDeliverySynchronization";



extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0508_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0508_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



