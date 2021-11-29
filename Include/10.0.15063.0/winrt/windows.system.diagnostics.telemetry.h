

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

#ifndef __windows2Esystem2Ediagnostics2Etelemetry_h__
#define __windows2Esystem2Ediagnostics2Etelemetry_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    interface IPlatformTelemetryClientStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    interface IPlatformTelemetryRegistrationResult;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    interface IPlatformTelemetryRegistrationSettings;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus;


#endif /* end if !defined(__cplusplus) */


#endif



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
namespace Diagnostics {
namespace Telemetry {
class PlatformTelemetryRegistrationResult;
} /*Telemetry*/
} /*Diagnostics*/
} /*System*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
namespace Diagnostics {
namespace Telemetry {
class PlatformTelemetryRegistrationSettings;
} /*Telemetry*/
} /*Diagnostics*/
} /*System*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus
    {
        PlatformTelemetryRegistrationStatus_Success	= 0,
        PlatformTelemetryRegistrationStatus_SettingsOutOfRange	= 1,
        PlatformTelemetryRegistrationStatus_UnknownFailure	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    
                    typedef enum PlatformTelemetryRegistrationStatus PlatformTelemetryRegistrationStatus;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    
                    /* [v1_enum] */ 
                    enum PlatformTelemetryRegistrationStatus
                        {
                            PlatformTelemetryRegistrationStatus_Success	= 0,
                            PlatformTelemetryRegistrationStatus_SettingsOutOfRange	= 1,
                            PlatformTelemetryRegistrationStatus_UnknownFailure	= 2
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Diagnostics {
                    namespace Telemetry {
                        
                        MIDL_INTERFACE("9BF3F25D-D5C3-4EEA-8DBE-9C8DBB0D9D8F")
                        IPlatformTelemetryClientStatics : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE Register( 
                                /* [in] */ __RPC__in HSTRING id,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult **result) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE RegisterWithSettings( 
                                /* [in] */ __RPC__in HSTRING id,
                                /* [in] */ __RPC__in_opt ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings *settings,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult **result) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IPlatformTelemetryClientStatics = __uuidof(IPlatformTelemetryClientStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Register )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
            /* [in] */ __RPC__in HSTRING id,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult **result);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWithSettings )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
            /* [in] */ __RPC__in HSTRING id,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings *settings,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_Register(This,id,result)	\
    ( (This)->lpVtbl -> Register(This,id,result) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_RegisterWithSettings(This,id,settings,result)	\
    ( (This)->lpVtbl -> RegisterWithSettings(This,id,settings,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult";
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Diagnostics {
                    namespace Telemetry {
                        
                        MIDL_INTERFACE("4D8518AB-2292-49BD-A15A-3D71D2145112")
                        IPlatformTelemetryRegistrationResult : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
                                /* [out][retval] */ __RPC__out ABI::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus *value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IPlatformTelemetryRegistrationResult = __uuidof(IPlatformTelemetryRegistrationResult);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl;

    interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_get_Status(This,value)	\
    ( (This)->lpVtbl -> get_Status(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings";
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Diagnostics {
                    namespace Telemetry {
                        
                        MIDL_INTERFACE("819A8582-CA19-415E-BB79-9C224BFA3A73")
                        IPlatformTelemetryRegistrationSettings : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StorageSize( 
                                /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StorageSize( 
                                /* [in] */ UINT32 value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UploadQuotaSize( 
                                /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UploadQuotaSize( 
                                /* [in] */ UINT32 value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IPlatformTelemetryRegistrationSettings = __uuidof(IPlatformTelemetryRegistrationSettings);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StorageSize )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StorageSize )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [in] */ UINT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UploadQuotaSize )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UploadQuotaSize )( 
            __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
            /* [in] */ UINT32 value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl;

    interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_get_StorageSize(This,value)	\
    ( (This)->lpVtbl -> get_StorageSize(This,value) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_put_StorageSize(This,value)	\
    ( (This)->lpVtbl -> put_StorageSize(This,value) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_get_UploadQuotaSize(This,value)	\
    ( (This)->lpVtbl -> get_UploadQuotaSize(This,value) ) 

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_put_UploadQuotaSize(This,value)	\
    ( (This)->lpVtbl -> put_UploadQuotaSize(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient";
#endif
#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult";
#endif
#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings";
#endif


/* interface __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ediagnostics2Etelemetry_0000_0003_v0_0_s_ifspec;

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


