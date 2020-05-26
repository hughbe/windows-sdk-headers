

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for msdaosp.idl:
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


#ifndef __msdaosp_h__
#define __msdaosp_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __DataSourceObject_FWD_DEFINED__
#define __DataSourceObject_FWD_DEFINED__
typedef interface DataSourceObject DataSourceObject;
#endif 	/* __DataSourceObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdaosp_0000_0000 */
/* [local] */ 

#include "msdatsrc.h"
#include "simpdata.h"
#ifdef DBINITCONSTANTS
extern const GUID CLSID_MSDAOSP		= {0xdfc8bdc0,0xe378,0x11d0,{0x9b,0x30,0x0,0x80,0xc7,0xe9,0xfe,0x95}};
extern const GUID DBPROPSET_PWROWSET = {0xe6e478db,0xf226,0x11d0,{0x94,0xee,0x0,0xc0,0x4f,0xb6,0x6a,0x50}};
#else  // !DBINITCONSTANTS
extern const GUID CLSID_MSDAOSP;
extern const GUID DBPROPSET_PWROWSET;
#endif // DBINITCONSTANTS
#define PWPROP_OSPVALUE			2


extern RPC_IF_HANDLE __MIDL_itf_msdaosp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdaosp_0000_0000_v0_0_s_ifspec;


#ifndef __MSDAOSPT_LIBRARY_DEFINED__
#define __MSDAOSPT_LIBRARY_DEFINED__

/* library MSDAOSPT */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MSDAOSPT;

#ifndef __DataSourceObject_DISPINTERFACE_DEFINED__
#define __DataSourceObject_DISPINTERFACE_DEFINED__

/* dispinterface DataSourceObject */
/* [uuid] */ 


EXTERN_C const IID DIID_DataSourceObject;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0ae9a4e4-18d4-11d1-b3b3-00aa00c1a924")
    DataSourceObject : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DataSourceObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in DataSourceObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in DataSourceObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in DataSourceObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in DataSourceObject * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in DataSourceObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in DataSourceObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DataSourceObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DataSourceObjectVtbl;

    interface DataSourceObject
    {
        CONST_VTBL struct DataSourceObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DataSourceObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define DataSourceObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define DataSourceObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define DataSourceObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define DataSourceObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define DataSourceObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define DataSourceObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DataSourceObject_DISPINTERFACE_DEFINED__ */

#endif /* __MSDAOSPT_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



