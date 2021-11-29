

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
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

#ifndef __corewindow_h__
#define __corewindow_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICoreWindowInterop_FWD_DEFINED__
#define __ICoreWindowInterop_FWD_DEFINED__
typedef interface ICoreWindowInterop ICoreWindowInterop;

#endif 	/* __ICoreWindowInterop_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_corewindow_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if (NTDDI_VERSION >= NTDDI_WIN8)


extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0000_v0_0_s_ifspec;

#ifndef __ICoreWindowInterop_INTERFACE_DEFINED__
#define __ICoreWindowInterop_INTERFACE_DEFINED__

/* interface ICoreWindowInterop */
/* [uuid][object] */ 


EXTERN_C const IID IID_ICoreWindowInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45D64A29-A63E-4CB6-B498-5781D298CB4F")
    ICoreWindowInterop : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WindowHandle( 
            /* [retval][out] */ __RPC__deref_out_opt HWND *hwnd) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MessageHandled( 
            /* [in] */ boolean value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWindowInteropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICoreWindowInterop * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICoreWindowInterop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICoreWindowInterop * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WindowHandle )( 
            __RPC__in ICoreWindowInterop * This,
            /* [retval][out] */ __RPC__deref_out_opt HWND *hwnd);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageHandled )( 
            __RPC__in ICoreWindowInterop * This,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } ICoreWindowInteropVtbl;

    interface ICoreWindowInterop
    {
        CONST_VTBL struct ICoreWindowInteropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWindowInterop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWindowInterop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWindowInterop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWindowInterop_get_WindowHandle(This,hwnd)	\
    ( (This)->lpVtbl -> get_WindowHandle(This,hwnd) ) 

#define ICoreWindowInterop_put_MessageHandled(This,value)	\
    ( (This)->lpVtbl -> put_MessageHandled(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWindowInterop_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_corewindow_0000_0001 */
/* [local] */ 

#endif // NTDDI_VERSION >= NTDDI_WIN8
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     __RPC__in unsigned long *, __RPC__in HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


