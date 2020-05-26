

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for imagetranscode.idl:
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

#ifndef __imagetranscode_h__
#define __imagetranscode_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITranscodeImage_FWD_DEFINED__
#define __ITranscodeImage_FWD_DEFINED__
typedef interface ITranscodeImage ITranscodeImage;
#endif 	/* __ITranscodeImage_FWD_DEFINED__ */


#ifndef __ImageTranscode_FWD_DEFINED__
#define __ImageTranscode_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageTranscode ImageTranscode;
#else
typedef struct ImageTranscode ImageTranscode;
#endif /* __cplusplus */

#endif 	/* __ImageTranscode_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "propidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITranscodeImage_INTERFACE_DEFINED__
#define __ITranscodeImage_INTERFACE_DEFINED__

/* interface ITranscodeImage */
/* [unique][uuid][object] */ 

typedef /* [v1_enum] */ 
enum tagTI_FLAGS
    {	TI_BITMAP	= 1,
	TI_JPEG	= 2
    } 	TI_FLAGS;


EXTERN_C const IID IID_ITranscodeImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAE86DDD-DC11-421c-B7AB-CC55D1D65C44")
    ITranscodeImage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TranscodeImage( 
            /* [in] */ __RPC__in_opt IShellItem *pShellItem,
            /* [in] */ UINT uiMaxWidth,
            /* [in] */ UINT uiMaxHeight,
            /* [in] */ DWORD flags,
            /* [in] */ __RPC__in_opt IStream *pvImage,
            /* [out] */ __RPC__out UINT *puiWidth,
            /* [out] */ __RPC__out UINT *puiHeight) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITranscodeImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ITranscodeImage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ITranscodeImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ITranscodeImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *TranscodeImage )( 
            __RPC__in ITranscodeImage * This,
            /* [in] */ __RPC__in_opt IShellItem *pShellItem,
            /* [in] */ UINT uiMaxWidth,
            /* [in] */ UINT uiMaxHeight,
            /* [in] */ DWORD flags,
            /* [in] */ __RPC__in_opt IStream *pvImage,
            /* [out] */ __RPC__out UINT *puiWidth,
            /* [out] */ __RPC__out UINT *puiHeight);
        
        END_INTERFACE
    } ITranscodeImageVtbl;

    interface ITranscodeImage
    {
        CONST_VTBL struct ITranscodeImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITranscodeImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITranscodeImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITranscodeImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITranscodeImage_TranscodeImage(This,pShellItem,uiMaxWidth,uiMaxHeight,flags,pvImage,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> TranscodeImage(This,pShellItem,uiMaxWidth,uiMaxHeight,flags,pvImage,puiWidth,puiHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITranscodeImage_INTERFACE_DEFINED__ */



#ifndef __TranscodeLibrary_LIBRARY_DEFINED__
#define __TranscodeLibrary_LIBRARY_DEFINED__

/* library TranscodeLibrary */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TranscodeLibrary;

EXTERN_C const CLSID CLSID_ImageTranscode;

#ifdef __cplusplus

class DECLSPEC_UUID("17B75166-928F-417d-9685-64AA135565C1")
ImageTranscode;
#endif
#endif /* __TranscodeLibrary_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



