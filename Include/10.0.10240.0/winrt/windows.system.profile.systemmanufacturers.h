

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
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

#ifndef __windows2Esystem2Eprofile2Esystemmanufacturers_h__
#define __windows2Esystem2Eprofile2Esystemmanufacturers_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                namespace SystemManufacturers {
                    interface ISmbiosInformationStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics[] = L"Windows.System.Profile.SystemManufacturers.ISmbiosInformationStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Profile {
                    namespace SystemManufacturers {
                        
                        MIDL_INTERFACE("080CCA7C-637C-48C4-B728-F9273812DB8E")
                        ISmbiosInformationStatics : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_ISmbiosInformationStatics = __uuidof(ISmbiosInformationStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_get_SerialNumber(This,value)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_System_Profile_SystemManufacturers_SmbiosInformation_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemManufacturers_SmbiosInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_SmbiosInformation[] = L"Windows.System.Profile.SystemManufacturers.SmbiosInformation";
#endif


/* interface __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile2Esystemmanufacturers_0000_0001_v0_0_s_ifspec;

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


