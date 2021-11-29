

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

#ifndef __windows2Eui2Examl2Ehosting_h__
#define __windows2Eui2Examl2Ehosting_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenter;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenterStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenterHost;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.UI.Xaml.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui2Examl_h__)
#include <Windows.UI.Xaml.h>
#endif // !defined(__windows2Eui2Examl_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Xaml {
class UIElement;
} /*Xaml*/
} /*UI*/
} /*Windows*/
}
#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Xaml {
namespace Hosting {
class XamlUIPresenter;
} /*Hosting*/
} /*Xaml*/
} /*UI*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenter";
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0000 */
/* [local] */ 







extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Xaml {
                    namespace Hosting {
                        
                        MIDL_INTERFACE("A714944A-1619-4FC6-B31B-89512EF022A2")
                        IXamlUIPresenter : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RootElement( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement **value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RootElement( 
                                /* [in] */ __RPC__in_opt ABI::Windows::UI::Xaml::IUIElement *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ThemeKey( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ThemeKey( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ThemeResourcesXaml( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ThemeResourcesXaml( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE SetSize( 
                                /* [in] */ INT32 width,
                                /* [in] */ INT32 height) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE Render( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE Present( void) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IXamlUIPresenter = __uuidof(IXamlUIPresenter);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootElement )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RootElement )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThemeKey )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThemeKey )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThemeResourcesXaml )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThemeResourcesXaml )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [in] */ __RPC__in HSTRING value);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
            /* [in] */ INT32 width,
            /* [in] */ INT32 height);
        
        HRESULT ( STDMETHODCALLTYPE *Render )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This);
        
        HRESULT ( STDMETHODCALLTYPE *Present )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl;

    interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_get_RootElement(This,value)	\
    ( (This)->lpVtbl -> get_RootElement(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_put_RootElement(This,value)	\
    ( (This)->lpVtbl -> put_RootElement(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_get_ThemeKey(This,value)	\
    ( (This)->lpVtbl -> get_ThemeKey(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_put_ThemeKey(This,value)	\
    ( (This)->lpVtbl -> put_ThemeKey(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_get_ThemeResourcesXaml(This,value)	\
    ( (This)->lpVtbl -> get_ThemeResourcesXaml(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_put_ThemeResourcesXaml(This,value)	\
    ( (This)->lpVtbl -> put_ThemeResourcesXaml(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_SetSize(This,width,height)	\
    ( (This)->lpVtbl -> SetSize(This,width,height) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_Render(This)	\
    ( (This)->lpVtbl -> Render(This) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_Present(This)	\
    ( (This)->lpVtbl -> Present(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics";
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Xaml {
                    namespace Hosting {
                        
                        MIDL_INTERFACE("71EAEAC8-45E1-4192-85AA-3A422EDD23CF")
                        IXamlUIPresenterStatics : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CompleteTimelinesAutomatically( 
                                /* [out][retval] */ __RPC__out boolean *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CompleteTimelinesAutomatically( 
                                /* [in] */ boolean value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE SetHost( 
                                /* [in] */ __RPC__in_opt ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost *host) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE NotifyWindowSizeChanged( void) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IXamlUIPresenterStatics = __uuidof(IXamlUIPresenterStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CompleteTimelinesAutomatically )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CompleteTimelinesAutomatically )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
            /* [in] */ boolean value);
        
        HRESULT ( STDMETHODCALLTYPE *SetHost )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost *host);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyWindowSizeChanged )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl;

    interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_get_CompleteTimelinesAutomatically(This,value)	\
    ( (This)->lpVtbl -> get_CompleteTimelinesAutomatically(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_put_CompleteTimelinesAutomatically(This,value)	\
    ( (This)->lpVtbl -> put_CompleteTimelinesAutomatically(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_SetHost(This,host)	\
    ( (This)->lpVtbl -> SetHost(This,host) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_NotifyWindowSizeChanged(This)	\
    ( (This)->lpVtbl -> NotifyWindowSizeChanged(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost";
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Xaml {
                    namespace Hosting {
                        
                        MIDL_INTERFACE("AAFB84CD-9F6D-4F80-AC2C-0E6CB9F31659")
                        IXamlUIPresenterHost : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE ResolveFileResource( 
                                /* [in] */ __RPC__in HSTRING path,
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *returnValue) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IXamlUIPresenterHost = __uuidof(IXamlUIPresenterHost);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *ResolveFileResource )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
            /* [in] */ __RPC__in HSTRING path,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *returnValue);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl;

    interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_ResolveFileResource(This,path,returnValue)	\
    ( (This)->lpVtbl -> ResolveFileResource(This,path,returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlUIPresenter_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlUIPresenter_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.XamlUIPresenter";
#endif


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting_0000_0003_v0_0_s_ifspec;

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


