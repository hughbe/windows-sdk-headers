

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for workspaceruntimeclientext.idl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __workspaceruntimeclientext_h__
#define __workspaceruntimeclientext_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWorkspaceClientExt_FWD_DEFINED__
#define __IWorkspaceClientExt_FWD_DEFINED__
typedef interface IWorkspaceClientExt IWorkspaceClientExt;
#endif 	/* __IWorkspaceClientExt_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWorkspaceClientExt_INTERFACE_DEFINED__
#define __IWorkspaceClientExt_INTERFACE_DEFINED__

/* interface IWorkspaceClientExt */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWorkspaceClientExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12B952F4-41CA-4F21-A829-A6D07D9A16E5")
    IWorkspaceClientExt : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetResourceId( 
            /* [out] */ __RPC__deref_out_opt BSTR *bstrWorkspaceId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetResourceDisplayName( 
            /* [out] */ __RPC__deref_out_opt BSTR *bstrWorkspaceDisplayName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IssueDisconnect( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWorkspaceClientExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWorkspaceClientExt * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWorkspaceClientExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWorkspaceClientExt * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetResourceId )( 
            __RPC__in IWorkspaceClientExt * This,
            /* [out] */ __RPC__deref_out_opt BSTR *bstrWorkspaceId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetResourceDisplayName )( 
            __RPC__in IWorkspaceClientExt * This,
            /* [out] */ __RPC__deref_out_opt BSTR *bstrWorkspaceDisplayName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IssueDisconnect )( 
            __RPC__in IWorkspaceClientExt * This);
        
        END_INTERFACE
    } IWorkspaceClientExtVtbl;

    interface IWorkspaceClientExt
    {
        CONST_VTBL struct IWorkspaceClientExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWorkspaceClientExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorkspaceClientExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWorkspaceClientExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWorkspaceClientExt_GetResourceId(This,bstrWorkspaceId)	\
    ( (This)->lpVtbl -> GetResourceId(This,bstrWorkspaceId) ) 

#define IWorkspaceClientExt_GetResourceDisplayName(This,bstrWorkspaceDisplayName)	\
    ( (This)->lpVtbl -> GetResourceDisplayName(This,bstrWorkspaceDisplayName) ) 

#define IWorkspaceClientExt_IssueDisconnect(This)	\
    ( (This)->lpVtbl -> IssueDisconnect(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWorkspaceClientExt_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


