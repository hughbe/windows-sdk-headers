

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0447 */
/* Compiler settings for chanmgr.idl:
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

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __chanmgr_h__
#define __chanmgr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IChannelMgr_FWD_DEFINED__
#define __IChannelMgr_FWD_DEFINED__
typedef interface IChannelMgr IChannelMgr;
#endif 	/* __IChannelMgr_FWD_DEFINED__ */


#ifndef __IEnumChannels_FWD_DEFINED__
#define __IEnumChannels_FWD_DEFINED__
typedef interface IEnumChannels IEnumChannels;
#endif 	/* __IEnumChannels_FWD_DEFINED__ */


#ifndef __ChannelMgr_FWD_DEFINED__
#define __ChannelMgr_FWD_DEFINED__

#ifdef __cplusplus
typedef class ChannelMgr ChannelMgr;
#else
typedef struct ChannelMgr ChannelMgr;
#endif /* __cplusplus */

#endif 	/* __ChannelMgr_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_chanmgr_0000_0000 */
/* [local] */ 

//=--------------------------------------------------------------------------=
// chanmgr.h
//=--------------------------------------------------------------------------=
// Copyright (c) Microsoft Corporation. All rights reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=

#pragma comment(lib,"uuid.lib")

//---------------------------------------------------------------------------=
// Channel Manager Interfaces.





extern RPC_IF_HANDLE __MIDL_itf_chanmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_chanmgr_0000_0000_v0_0_s_ifspec;


#ifndef __CHANNELMGR_LIBRARY_DEFINED__
#define __CHANNELMGR_LIBRARY_DEFINED__

/* library CHANNELMGR */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_CHANNELMGR;

#ifndef __IChannelMgr_INTERFACE_DEFINED__
#define __IChannelMgr_INTERFACE_DEFINED__

/* interface IChannelMgr */
/* [object][helpstring][uuid] */ 

typedef struct _tagChannelShortcutInfo
    {
    DWORD cbSize;
    LPWSTR pszTitle;
    LPWSTR pszURL;
    LPWSTR pszLogo;
    LPWSTR pszIcon;
    LPWSTR pszWideLogo;
    BOOL bIsSoftware;
    } 	CHANNELSHORTCUTINFO;

typedef struct _tagChannelCategoryInfo
    {
    DWORD cbSize;
    LPWSTR pszTitle;
    LPWSTR pszURL;
    LPWSTR pszLogo;
    LPWSTR pszIcon;
    LPWSTR pszWideLogo;
    } 	CHANNELCATEGORYINFO;

typedef 
enum _tagChannelEnumFlags
    {	CHANENUM_CHANNELFOLDER	= 0x1,
	CHANENUM_SOFTUPDATEFOLDER	= 0x2,
	CHANENUM_DESKTOPFOLDER	= 0x4,
	CHANENUM_TITLE	= 0x10000,
	CHANENUM_PATH	= 0x20000,
	CHANENUM_URL	= 0x40000,
	CHANENUM_SUBSCRIBESTATE	= 0x80000
    } 	CHANNELENUMFLAGS;

#define CHANENUM_ALLFOLDERS (CHANENUM_CHANNELFOLDER    |    \
                             CHANENUM_SOFTUPDATEFOLDER |    \
                             CHANENUM_DESKTOPFOLDER          )

#define CHANENUM_ALLDATA    (CHANENUM_TITLE            |    \
                             CHANENUM_PATH             |    \
                             CHANENUM_URL              |    \
                             CHANENUM_SUBSCRIBESTATE         )

#define CHANENUM_ALL        (CHANENUM_CHANNELFOLDER    |    \
                             CHANENUM_SOFTUPDATEFOLDER |    \
                             CHANENUM_DESKTOPFOLDER    |    \
                             CHANENUM_TITLE            |    \
                             CHANENUM_PATH             |    \
                             CHANENUM_URL              |    \
                             CHANENUM_SUBSCRIBESTATE         )


EXTERN_C const IID IID_IChannelMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85BD8E82-0FBA-11d1-90C3-00C04FC2F568")
    IChannelMgr : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddChannelShortcut( 
            /* [in] */ __RPC__in CHANNELSHORTCUTINFO *pChannelInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteChannelShortcut( 
            /* [in] */ __RPC__in LPWSTR pszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCategory( 
            /* [in] */ __RPC__in CHANNELCATEGORYINFO *pCategoryInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteCategory( 
            /* [in] */ __RPC__in LPWSTR pszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumChannels( 
            /* [in] */ DWORD dwEnumFlags,
            /* [in] */ __RPC__in LPCWSTR pszURL,
            /* [out] */ __RPC__deref_out_opt IEnumChannels **pIEnumChannels) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IChannelMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChannelMgr * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChannelMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChannelMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddChannelShortcut )( 
            IChannelMgr * This,
            /* [in] */ __RPC__in CHANNELSHORTCUTINFO *pChannelInfo);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteChannelShortcut )( 
            IChannelMgr * This,
            /* [in] */ __RPC__in LPWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *AddCategory )( 
            IChannelMgr * This,
            /* [in] */ __RPC__in CHANNELCATEGORYINFO *pCategoryInfo);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteCategory )( 
            IChannelMgr * This,
            /* [in] */ __RPC__in LPWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumChannels )( 
            IChannelMgr * This,
            /* [in] */ DWORD dwEnumFlags,
            /* [in] */ __RPC__in LPCWSTR pszURL,
            /* [out] */ __RPC__deref_out_opt IEnumChannels **pIEnumChannels);
        
        END_INTERFACE
    } IChannelMgrVtbl;

    interface IChannelMgr
    {
        CONST_VTBL struct IChannelMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChannelMgr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChannelMgr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChannelMgr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChannelMgr_AddChannelShortcut(This,pChannelInfo)	\
    ( (This)->lpVtbl -> AddChannelShortcut(This,pChannelInfo) ) 

#define IChannelMgr_DeleteChannelShortcut(This,pszTitle)	\
    ( (This)->lpVtbl -> DeleteChannelShortcut(This,pszTitle) ) 

#define IChannelMgr_AddCategory(This,pCategoryInfo)	\
    ( (This)->lpVtbl -> AddCategory(This,pCategoryInfo) ) 

#define IChannelMgr_DeleteCategory(This,pszTitle)	\
    ( (This)->lpVtbl -> DeleteCategory(This,pszTitle) ) 

#define IChannelMgr_EnumChannels(This,dwEnumFlags,pszURL,pIEnumChannels)	\
    ( (This)->lpVtbl -> EnumChannels(This,dwEnumFlags,pszURL,pIEnumChannels) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IChannelMgr_AddChannelShortcut_Proxy( 
    IChannelMgr * This,
    /* [in] */ __RPC__in CHANNELSHORTCUTINFO *pChannelInfo);


void __RPC_STUB IChannelMgr_AddChannelShortcut_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IChannelMgr_DeleteChannelShortcut_Proxy( 
    IChannelMgr * This,
    /* [in] */ __RPC__in LPWSTR pszTitle);


void __RPC_STUB IChannelMgr_DeleteChannelShortcut_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IChannelMgr_AddCategory_Proxy( 
    IChannelMgr * This,
    /* [in] */ __RPC__in CHANNELCATEGORYINFO *pCategoryInfo);


void __RPC_STUB IChannelMgr_AddCategory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IChannelMgr_DeleteCategory_Proxy( 
    IChannelMgr * This,
    /* [in] */ __RPC__in LPWSTR pszTitle);


void __RPC_STUB IChannelMgr_DeleteCategory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IChannelMgr_EnumChannels_Proxy( 
    IChannelMgr * This,
    /* [in] */ DWORD dwEnumFlags,
    /* [in] */ __RPC__in LPCWSTR pszURL,
    /* [out] */ __RPC__deref_out_opt IEnumChannels **pIEnumChannels);


void __RPC_STUB IChannelMgr_EnumChannels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IChannelMgr_INTERFACE_DEFINED__ */


#ifndef __IEnumChannels_INTERFACE_DEFINED__
#define __IEnumChannels_INTERFACE_DEFINED__

/* interface IEnumChannels */
/* [object][helpstring][uuid] */ 

typedef 
enum _tagSubcriptionState
    {	SUBSTATE_NOTSUBSCRIBED	= 0,
	SUBSTATE_PARTIALSUBSCRIPTION	= ( SUBSTATE_NOTSUBSCRIBED + 1 ) ,
	SUBSTATE_FULLSUBSCRIPTION	= ( SUBSTATE_PARTIALSUBSCRIPTION + 1 ) 
    } 	SUBSCRIPTIONSTATE;

typedef struct _tagChannelInfo
    {
    LPOLESTR pszTitle;
    LPOLESTR pszPath;
    LPOLESTR pszURL;
    SUBSCRIPTIONSTATE stSubscriptionState;
    } 	CHANNELENUMINFO;


EXTERN_C const IID IID_IEnumChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4C65425-0F82-11d1-90C3-00C04FC2F568")
    IEnumChannels : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            ULONG celt,
            __RPC__in CHANNELENUMINFO *rgChanInf,
            __RPC__in ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            __RPC__deref_in_opt IEnumChannels **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumChannels * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumChannels * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumChannels * This,
            ULONG celt,
            __RPC__in CHANNELENUMINFO *rgChanInf,
            __RPC__in ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumChannels * This,
            ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumChannels * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumChannels * This,
            __RPC__deref_in_opt IEnumChannels **ppenum);
        
        END_INTERFACE
    } IEnumChannelsVtbl;

    interface IEnumChannels
    {
        CONST_VTBL struct IEnumChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumChannels_Next(This,celt,rgChanInf,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgChanInf,pceltFetched) ) 

#define IEnumChannels_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumChannels_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumChannels_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumChannels_Next_Proxy( 
    IEnumChannels * This,
    ULONG celt,
    __RPC__in CHANNELENUMINFO *rgChanInf,
    __RPC__in ULONG *pceltFetched);


void __RPC_STUB IEnumChannels_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumChannels_Skip_Proxy( 
    IEnumChannels * This,
    ULONG celt);


void __RPC_STUB IEnumChannels_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumChannels_Reset_Proxy( 
    IEnumChannels * This);


void __RPC_STUB IEnumChannels_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumChannels_Clone_Proxy( 
    IEnumChannels * This,
    __RPC__deref_in_opt IEnumChannels **ppenum);


void __RPC_STUB IEnumChannels_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumChannels_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ChannelMgr;

#ifdef __cplusplus

class DECLSPEC_UUID("b3cdae90-d170-11d0-802b-00c04fd75d13")
ChannelMgr;
#endif
#endif /* __CHANNELMGR_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



