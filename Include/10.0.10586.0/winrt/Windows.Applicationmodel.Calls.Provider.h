

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

#ifndef __windows2Eapplicationmodel2Ecalls2Eprovider_h__
#define __windows2Eapplicationmodel2Ecalls2Eprovider_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Provider {
                    interface IPhoneCallOrigin;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Provider {
                    interface IPhoneCallOrigin2;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Provider {
                    interface IPhoneCallOriginManagerStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace Calls {
namespace Provider {
class PhoneCallOrigin;
} /*Provider*/
} /*Calls*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin[] = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace Calls {
                    namespace Provider {
                        
                        MIDL_INTERFACE("20613479-0EF9-4454-871C-AFB66A14B6A5")
                        IPhoneCallOrigin : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Category( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Category( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CategoryDescription( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CategoryDescription( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Location( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Location( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IPhoneCallOrigin = __uuidof(IPhoneCallOrigin);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Category )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Category )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CategoryDescription )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CategoryDescription )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin * This,
            /* [in] */ __RPC__in HSTRING value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_get_Category(This,value)	\
    ( (This)->lpVtbl -> get_Category(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_put_Category(This,value)	\
    ( (This)->lpVtbl -> put_Category(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_get_CategoryDescription(This,value)	\
    ( (This)->lpVtbl -> get_CategoryDescription(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_put_CategoryDescription(This,value)	\
    ( (This)->lpVtbl -> put_CategoryDescription(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_get_Location(This,value)	\
    ( (This)->lpVtbl -> get_Location(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_put_Location(This,value)	\
    ( (This)->lpVtbl -> put_Location(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2[] = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin2";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2 */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace Calls {
                    namespace Provider {
                        
                        MIDL_INTERFACE("04C7E980-9AC2-4768-B536-B68DA4957D02")
                        IPhoneCallOrigin2 : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DisplayName( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IPhoneCallOrigin2 = __uuidof(IPhoneCallOrigin2);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 * This,
            /* [in] */ __RPC__in HSTRING value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_get_DisplayName(This,value)	\
    ( (This)->lpVtbl -> get_DisplayName(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_put_DisplayName(This,value)	\
    ( (This)->lpVtbl -> put_DisplayName(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics[] = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace Calls {
                    namespace Provider {
                        
                        MIDL_INTERFACE("CCFC5A0A-9AF7-6149-39D0-E076FCCE1395")
                        IPhoneCallOriginManagerStatics : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsCurrentAppActiveCallOriginApp( 
                                /* [out][retval] */ __RPC__out boolean *value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ShowPhoneCallOriginSettingsUI( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE SetCallOrigin( 
                                /* [in] */ GUID requestId,
                                /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin *callOrigin) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IPhoneCallOriginManagerStatics = __uuidof(IPhoneCallOriginManagerStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCurrentAppActiveCallOriginApp )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *ShowPhoneCallOriginSettingsUI )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCallOrigin )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics * This,
            /* [in] */ GUID requestId,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin *callOrigin);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_get_IsCurrentAppActiveCallOriginApp(This,value)	\
    ( (This)->lpVtbl -> get_IsCurrentAppActiveCallOriginApp(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_ShowPhoneCallOriginSettingsUI(This)	\
    ( (This)->lpVtbl -> ShowPhoneCallOriginSettingsUI(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_SetCallOrigin(This,requestId,callOrigin)	\
    ( (This)->lpVtbl -> SetCallOrigin(This,requestId,callOrigin) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Provider_PhoneCallOrigin_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Provider_PhoneCallOrigin_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Provider_PhoneCallOrigin[] = L"Windows.ApplicationModel.Calls.Provider.PhoneCallOrigin";
#endif
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Provider_PhoneCallOriginManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Provider_PhoneCallOriginManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Provider_PhoneCallOriginManager[] = L"Windows.ApplicationModel.Calls.Provider.PhoneCallOriginManager";
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ecalls2Eprovider_0000_0003_v0_0_s_ifspec;

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


