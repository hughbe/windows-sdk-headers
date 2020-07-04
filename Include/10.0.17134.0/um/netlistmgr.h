

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

#ifndef __netlistmgr_h__
#define __netlistmgr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INetworkListManager_FWD_DEFINED__
#define __INetworkListManager_FWD_DEFINED__
typedef interface INetworkListManager INetworkListManager;

#endif 	/* __INetworkListManager_FWD_DEFINED__ */


#ifndef __INetworkListManagerEvents_FWD_DEFINED__
#define __INetworkListManagerEvents_FWD_DEFINED__
typedef interface INetworkListManagerEvents INetworkListManagerEvents;

#endif 	/* __INetworkListManagerEvents_FWD_DEFINED__ */


#ifndef __INetwork_FWD_DEFINED__
#define __INetwork_FWD_DEFINED__
typedef interface INetwork INetwork;

#endif 	/* __INetwork_FWD_DEFINED__ */


#ifndef __IEnumNetworks_FWD_DEFINED__
#define __IEnumNetworks_FWD_DEFINED__
typedef interface IEnumNetworks IEnumNetworks;

#endif 	/* __IEnumNetworks_FWD_DEFINED__ */


#ifndef __INetworkEvents_FWD_DEFINED__
#define __INetworkEvents_FWD_DEFINED__
typedef interface INetworkEvents INetworkEvents;

#endif 	/* __INetworkEvents_FWD_DEFINED__ */


#ifndef __INetworkConnection_FWD_DEFINED__
#define __INetworkConnection_FWD_DEFINED__
typedef interface INetworkConnection INetworkConnection;

#endif 	/* __INetworkConnection_FWD_DEFINED__ */


#ifndef __IEnumNetworkConnections_FWD_DEFINED__
#define __IEnumNetworkConnections_FWD_DEFINED__
typedef interface IEnumNetworkConnections IEnumNetworkConnections;

#endif 	/* __IEnumNetworkConnections_FWD_DEFINED__ */


#ifndef __INetworkConnectionEvents_FWD_DEFINED__
#define __INetworkConnectionEvents_FWD_DEFINED__
typedef interface INetworkConnectionEvents INetworkConnectionEvents;

#endif 	/* __INetworkConnectionEvents_FWD_DEFINED__ */


#ifndef __INetworkCostManager_FWD_DEFINED__
#define __INetworkCostManager_FWD_DEFINED__
typedef interface INetworkCostManager INetworkCostManager;

#endif 	/* __INetworkCostManager_FWD_DEFINED__ */


#ifndef __INetworkCostManagerEvents_FWD_DEFINED__
#define __INetworkCostManagerEvents_FWD_DEFINED__
typedef interface INetworkCostManagerEvents INetworkCostManagerEvents;

#endif 	/* __INetworkCostManagerEvents_FWD_DEFINED__ */


#ifndef __INetworkConnectionCost_FWD_DEFINED__
#define __INetworkConnectionCost_FWD_DEFINED__
typedef interface INetworkConnectionCost INetworkConnectionCost;

#endif 	/* __INetworkConnectionCost_FWD_DEFINED__ */


#ifndef __INetworkConnectionCostEvents_FWD_DEFINED__
#define __INetworkConnectionCostEvents_FWD_DEFINED__
typedef interface INetworkConnectionCostEvents INetworkConnectionCostEvents;

#endif 	/* __INetworkConnectionCostEvents_FWD_DEFINED__ */


#ifndef __INetworkConnectionCost_FWD_DEFINED__
#define __INetworkConnectionCost_FWD_DEFINED__
typedef interface INetworkConnectionCost INetworkConnectionCost;

#endif 	/* __INetworkConnectionCost_FWD_DEFINED__ */


#ifndef __NetworkListManager_FWD_DEFINED__
#define __NetworkListManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkListManager NetworkListManager;
#else
typedef struct NetworkListManager NetworkListManager;
#endif /* __cplusplus */

#endif 	/* __NetworkListManager_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_netlistmgr_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)












#define NA_DomainAuthenticationFailed  L"NA_DomainAuthenticationFailed"
#define NA_NetworkClass  L"NA_NetworkClass"
#define NA_NameSetByPolicy  L"NA_NameSetByPolicy"
#define NA_IconSetByPolicy  L"NA_IconSetByPolicy"
#define NA_DescriptionSetByPolicy  L"NA_DescriptionSetByPolicy"
#define NA_CategorySetByPolicy  L"NA_CategorySetByPolicy"
#define NA_NameReadOnly  L"NA_NameReadOnly"
#define NA_IconReadOnly  L"NA_IconReadOnly"
#define NA_DescriptionReadOnly  L"NA_DescriptionReadOnly"
#define NA_CategoryReadOnly  L"NA_CategoryReadOnly"
#define NA_AllowMerge  L"NA_AllowMerge"
#define NA_InternetConnectivityV4 L"NA_InternetConnectivityV4"
#define NA_InternetConnectivityV6 L"NA_InternetConnectivityV6"
#define	NLM_MAX_ADDRESS_LIST_SIZE	( 10 )

#define	NLM_UNKNOWN_DATAPLAN_STATUS	( 0xffffffff )

typedef /* [helpstring][v1_enum][version] */ 
enum NLM_CONNECTION_COST
    {
        NLM_CONNECTION_COST_UNKNOWN	= 0,
        NLM_CONNECTION_COST_UNRESTRICTED	= 0x1,
        NLM_CONNECTION_COST_FIXED	= 0x2,
        NLM_CONNECTION_COST_VARIABLE	= 0x4,
        NLM_CONNECTION_COST_OVERDATALIMIT	= 0x10000,
        NLM_CONNECTION_COST_CONGESTED	= 0x20000,
        NLM_CONNECTION_COST_ROAMING	= 0x40000,
        NLM_CONNECTION_COST_APPROACHINGDATALIMIT	= 0x80000
    } 	NLM_CONNECTION_COST;

typedef /* [helpstring][version] */ struct NLM_USAGE_DATA
    {
    DWORD UsageInMegabytes;
    FILETIME LastSyncTime;
    } 	NLM_USAGE_DATA;

typedef /* [helpstring][version] */ struct NLM_DATAPLAN_STATUS
    {
    GUID InterfaceGuid;
    NLM_USAGE_DATA UsageData;
    DWORD DataLimitInMegabytes;
    DWORD InboundBandwidthInKbps;
    DWORD OutboundBandwidthInKbps;
    FILETIME NextBillingCycle;
    DWORD MaxTransferSizeInMegabytes;
    DWORD Reserved;
    } 	NLM_DATAPLAN_STATUS;

typedef /* [helpstring][version] */ struct NLM_SOCKADDR
    {
    BYTE data[ 128 ];
    } 	NLM_SOCKADDR;

typedef /* [v1_enum] */ 
enum NLM_NETWORK_CLASS
    {
        NLM_NETWORK_IDENTIFYING	= 0x1,
        NLM_NETWORK_IDENTIFIED	= 0x2,
        NLM_NETWORK_UNIDENTIFIED	= 0x3
    } 	NLM_NETWORK_CLASS;

typedef /* [helpstring][version] */ struct NLM_SIMULATED_PROFILE_INFO
    {
    WCHAR ProfileName[ 256 ];
    NLM_CONNECTION_COST cost;
    DWORD UsageInMegabytes;
    DWORD DataLimitInMegabytes;
    } 	NLM_SIMULATED_PROFILE_INFO;

typedef /* [v1_enum] */ 
enum NLM_INTERNET_CONNECTIVITY
    {
        NLM_INTERNET_CONNECTIVITY_WEBHIJACK	= 0x1,
        NLM_INTERNET_CONNECTIVITY_PROXIED	= 0x2,
        NLM_INTERNET_CONNECTIVITY_CORPORATE	= 0x4
    } 	NLM_INTERNET_CONNECTIVITY;

typedef /* [v1_enum] */ 
enum NLM_CONNECTIVITY
    {
        NLM_CONNECTIVITY_DISCONNECTED	= 0,
        NLM_CONNECTIVITY_IPV4_NOTRAFFIC	= 0x1,
        NLM_CONNECTIVITY_IPV6_NOTRAFFIC	= 0x2,
        NLM_CONNECTIVITY_IPV4_SUBNET	= 0x10,
        NLM_CONNECTIVITY_IPV4_LOCALNETWORK	= 0x20,
        NLM_CONNECTIVITY_IPV4_INTERNET	= 0x40,
        NLM_CONNECTIVITY_IPV6_SUBNET	= 0x100,
        NLM_CONNECTIVITY_IPV6_LOCALNETWORK	= 0x200,
        NLM_CONNECTIVITY_IPV6_INTERNET	= 0x400
    } 	NLM_CONNECTIVITY;

typedef 
enum NLM_DOMAIN_TYPE
    {
        NLM_DOMAIN_TYPE_NON_DOMAIN_NETWORK	= 0,
        NLM_DOMAIN_TYPE_DOMAIN_NETWORK	= 0x1,
        NLM_DOMAIN_TYPE_DOMAIN_AUTHENTICATED	= 0x2
    } 	NLM_DOMAIN_TYPE;



extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0000_v0_0_s_ifspec;

#ifndef __INetworkListManager_INTERFACE_DEFINED__
#define __INetworkListManager_INTERFACE_DEFINED__

/* interface INetworkListManager */
/* [dual][unique][oleautomation][object][helpstring][uuid] */ 

typedef /* [v1_enum] */ 
enum NLM_ENUM_NETWORK
    {
        NLM_ENUM_NETWORK_CONNECTED	= 0x1,
        NLM_ENUM_NETWORK_DISCONNECTED	= 0x2,
        NLM_ENUM_NETWORK_ALL	= 0x3
    } 	NLM_ENUM_NETWORK;


EXTERN_C const IID IID_INetworkListManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00000-570F-4A9B-8D69-199FDBA5723B")
    INetworkListManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworks( 
            /* [in] */ NLM_ENUM_NETWORK Flags,
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworks **ppEnumNetwork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetwork( 
            /* [in] */ GUID gdNetworkId,
            /* [retval][out] */ __RPC__deref_out_opt INetwork **ppNetwork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworkConnections( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworkConnections **ppEnum) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworkConnection( 
            /* [in] */ GUID gdNetworkConnectionId,
            /* [retval][out] */ __RPC__deref_out_opt INetworkConnection **ppNetworkConnection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnectedToInternet( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConnectivity( 
            /* [retval][out] */ __RPC__out NLM_CONNECTIVITY *pConnectivity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSimulatedProfileInfo( 
            /* [in] */ __RPC__in NLM_SIMULATED_PROFILE_INFO *pSimulatedInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearSimulatedProfileInfo( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkListManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkListManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkListManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkListManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in INetworkListManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in INetworkListManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in INetworkListManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetworkListManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworks )( 
            __RPC__in INetworkListManager * This,
            /* [in] */ NLM_ENUM_NETWORK Flags,
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworks **ppEnumNetwork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetwork )( 
            __RPC__in INetworkListManager * This,
            /* [in] */ GUID gdNetworkId,
            /* [retval][out] */ __RPC__deref_out_opt INetwork **ppNetwork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkConnections )( 
            __RPC__in INetworkListManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworkConnections **ppEnum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkConnection )( 
            __RPC__in INetworkListManager * This,
            /* [in] */ GUID gdNetworkConnectionId,
            /* [retval][out] */ __RPC__deref_out_opt INetworkConnection **ppNetworkConnection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnectedToInternet )( 
            __RPC__in INetworkListManager * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            __RPC__in INetworkListManager * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConnectivity )( 
            __RPC__in INetworkListManager * This,
            /* [retval][out] */ __RPC__out NLM_CONNECTIVITY *pConnectivity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSimulatedProfileInfo )( 
            __RPC__in INetworkListManager * This,
            /* [in] */ __RPC__in NLM_SIMULATED_PROFILE_INFO *pSimulatedInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearSimulatedProfileInfo )( 
            __RPC__in INetworkListManager * This);
        
        END_INTERFACE
    } INetworkListManagerVtbl;

    interface INetworkListManager
    {
        CONST_VTBL struct INetworkListManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkListManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkListManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkListManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkListManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetworkListManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetworkListManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetworkListManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetworkListManager_GetNetworks(This,Flags,ppEnumNetwork)	\
    ( (This)->lpVtbl -> GetNetworks(This,Flags,ppEnumNetwork) ) 

#define INetworkListManager_GetNetwork(This,gdNetworkId,ppNetwork)	\
    ( (This)->lpVtbl -> GetNetwork(This,gdNetworkId,ppNetwork) ) 

#define INetworkListManager_GetNetworkConnections(This,ppEnum)	\
    ( (This)->lpVtbl -> GetNetworkConnections(This,ppEnum) ) 

#define INetworkListManager_GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection)	\
    ( (This)->lpVtbl -> GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection) ) 

#define INetworkListManager_get_IsConnectedToInternet(This,pbIsConnected)	\
    ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) ) 

#define INetworkListManager_get_IsConnected(This,pbIsConnected)	\
    ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) ) 

#define INetworkListManager_GetConnectivity(This,pConnectivity)	\
    ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) ) 

#define INetworkListManager_SetSimulatedProfileInfo(This,pSimulatedInfo)	\
    ( (This)->lpVtbl -> SetSimulatedProfileInfo(This,pSimulatedInfo) ) 

#define INetworkListManager_ClearSimulatedProfileInfo(This)	\
    ( (This)->lpVtbl -> ClearSimulatedProfileInfo(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkListManager_INTERFACE_DEFINED__ */


#ifndef __INetworkListManagerEvents_INTERFACE_DEFINED__
#define __INetworkListManagerEvents_INTERFACE_DEFINED__

/* interface INetworkListManagerEvents */
/* [unique][oleautomation][object][helpstring][uuid] */ 


EXTERN_C const IID IID_INetworkListManagerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00001-570F-4A9B-8D69-199FDBA5723B")
    INetworkListManagerEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectivityChanged( 
            /* [in] */ NLM_CONNECTIVITY newConnectivity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkListManagerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkListManagerEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkListManagerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkListManagerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectivityChanged )( 
            __RPC__in INetworkListManagerEvents * This,
            /* [in] */ NLM_CONNECTIVITY newConnectivity);
        
        END_INTERFACE
    } INetworkListManagerEventsVtbl;

    interface INetworkListManagerEvents
    {
        CONST_VTBL struct INetworkListManagerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkListManagerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkListManagerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkListManagerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkListManagerEvents_ConnectivityChanged(This,newConnectivity)	\
    ( (This)->lpVtbl -> ConnectivityChanged(This,newConnectivity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkListManagerEvents_INTERFACE_DEFINED__ */


#ifndef __INetwork_INTERFACE_DEFINED__
#define __INetwork_INTERFACE_DEFINED__

/* interface INetwork */
/* [dual][unique][oleautomation][object][helpstring][uuid] */ 

typedef 
enum NLM_NETWORK_CATEGORY
    {
        NLM_NETWORK_CATEGORY_PUBLIC	= 0,
        NLM_NETWORK_CATEGORY_PRIVATE	= 0x1,
        NLM_NETWORK_CATEGORY_DOMAIN_AUTHENTICATED	= 0x2
    } 	NLM_NETWORK_CATEGORY;


EXTERN_C const IID IID_INetwork;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00002-570F-4A9B-8D69-199FDBA5723B")
    INetwork : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string BSTR *pszNetworkName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [string][in] */ __RPC__in_string BSTR szNetworkNewName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string BSTR *pszDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [string][in] */ __RPC__in_string BSTR szDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworkId( 
            /* [retval][out] */ __RPC__out GUID *pgdGuidNetworkId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDomainType( 
            /* [retval][out] */ __RPC__out NLM_DOMAIN_TYPE *pNetworkType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworkConnections( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworkConnections **ppEnumNetworkConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTimeCreatedAndConnected( 
            /* [out] */ __RPC__out DWORD *pdwLowDateTimeCreated,
            /* [out] */ __RPC__out DWORD *pdwHighDateTimeCreated,
            /* [out] */ __RPC__out DWORD *pdwLowDateTimeConnected,
            /* [out] */ __RPC__out DWORD *pdwHighDateTimeConnected) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnectedToInternet( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConnectivity( 
            /* [retval][out] */ __RPC__out NLM_CONNECTIVITY *pConnectivity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [retval][out] */ __RPC__out NLM_NETWORK_CATEGORY *pCategory) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCategory( 
            /* [in] */ NLM_NETWORK_CATEGORY NewCategory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetwork * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetwork * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetwork * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in INetwork * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in INetwork * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in INetwork * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetwork * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in INetwork * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string BSTR *pszNetworkName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            __RPC__in INetwork * This,
            /* [string][in] */ __RPC__in_string BSTR szNetworkNewName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in INetwork * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string BSTR *pszDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            __RPC__in INetwork * This,
            /* [string][in] */ __RPC__in_string BSTR szDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkId )( 
            __RPC__in INetwork * This,
            /* [retval][out] */ __RPC__out GUID *pgdGuidNetworkId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDomainType )( 
            __RPC__in INetwork * This,
            /* [retval][out] */ __RPC__out NLM_DOMAIN_TYPE *pNetworkType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkConnections )( 
            __RPC__in INetwork * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworkConnections **ppEnumNetworkConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTimeCreatedAndConnected )( 
            __RPC__in INetwork * This,
            /* [out] */ __RPC__out DWORD *pdwLowDateTimeCreated,
            /* [out] */ __RPC__out DWORD *pdwHighDateTimeCreated,
            /* [out] */ __RPC__out DWORD *pdwLowDateTimeConnected,
            /* [out] */ __RPC__out DWORD *pdwHighDateTimeConnected);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnectedToInternet )( 
            __RPC__in INetwork * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            __RPC__in INetwork * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConnectivity )( 
            __RPC__in INetwork * This,
            /* [retval][out] */ __RPC__out NLM_CONNECTIVITY *pConnectivity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            __RPC__in INetwork * This,
            /* [retval][out] */ __RPC__out NLM_NETWORK_CATEGORY *pCategory);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCategory )( 
            __RPC__in INetwork * This,
            /* [in] */ NLM_NETWORK_CATEGORY NewCategory);
        
        END_INTERFACE
    } INetworkVtbl;

    interface INetwork
    {
        CONST_VTBL struct INetworkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetwork_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetwork_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetwork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetwork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetwork_GetName(This,pszNetworkName)	\
    ( (This)->lpVtbl -> GetName(This,pszNetworkName) ) 

#define INetwork_SetName(This,szNetworkNewName)	\
    ( (This)->lpVtbl -> SetName(This,szNetworkNewName) ) 

#define INetwork_GetDescription(This,pszDescription)	\
    ( (This)->lpVtbl -> GetDescription(This,pszDescription) ) 

#define INetwork_SetDescription(This,szDescription)	\
    ( (This)->lpVtbl -> SetDescription(This,szDescription) ) 

#define INetwork_GetNetworkId(This,pgdGuidNetworkId)	\
    ( (This)->lpVtbl -> GetNetworkId(This,pgdGuidNetworkId) ) 

#define INetwork_GetDomainType(This,pNetworkType)	\
    ( (This)->lpVtbl -> GetDomainType(This,pNetworkType) ) 

#define INetwork_GetNetworkConnections(This,ppEnumNetworkConnection)	\
    ( (This)->lpVtbl -> GetNetworkConnections(This,ppEnumNetworkConnection) ) 

#define INetwork_GetTimeCreatedAndConnected(This,pdwLowDateTimeCreated,pdwHighDateTimeCreated,pdwLowDateTimeConnected,pdwHighDateTimeConnected)	\
    ( (This)->lpVtbl -> GetTimeCreatedAndConnected(This,pdwLowDateTimeCreated,pdwHighDateTimeCreated,pdwLowDateTimeConnected,pdwHighDateTimeConnected) ) 

#define INetwork_get_IsConnectedToInternet(This,pbIsConnected)	\
    ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) ) 

#define INetwork_get_IsConnected(This,pbIsConnected)	\
    ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) ) 

#define INetwork_GetConnectivity(This,pConnectivity)	\
    ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) ) 

#define INetwork_GetCategory(This,pCategory)	\
    ( (This)->lpVtbl -> GetCategory(This,pCategory) ) 

#define INetwork_SetCategory(This,NewCategory)	\
    ( (This)->lpVtbl -> SetCategory(This,NewCategory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetwork_INTERFACE_DEFINED__ */


#ifndef __IEnumNetworks_INTERFACE_DEFINED__
#define __IEnumNetworks_INTERFACE_DEFINED__

/* interface IEnumNetworks */
/* [dual][unique][oleautomation][object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumNetworks;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00003-570F-4A9B-8D69-199FDBA5723B")
    IEnumNetworks : public IDispatch
    {
    public:
        virtual /* [restricted][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumVARIANT **ppEnumVar) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) INetwork **rgelt,
            /* [full][out][in] */ __RPC__inout_opt ULONG *pceltFetched) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworks **ppEnumNetwork) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumNetworksVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumNetworks * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumNetworks * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumNetworks * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IEnumNetworks * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IEnumNetworks * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IEnumNetworks * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnumNetworks * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [restricted][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IEnumNetworks * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumVARIANT **ppEnumVar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumNetworks * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) INetwork **rgelt,
            /* [full][out][in] */ __RPC__inout_opt ULONG *pceltFetched);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumNetworks * This,
            /* [in] */ ULONG celt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumNetworks * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumNetworks * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworks **ppEnumNetwork);
        
        END_INTERFACE
    } IEnumNetworksVtbl;

    interface IEnumNetworks
    {
        CONST_VTBL struct IEnumNetworksVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumNetworks_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumNetworks_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumNetworks_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumNetworks_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnumNetworks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnumNetworks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnumNetworks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnumNetworks_get__NewEnum(This,ppEnumVar)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVar) ) 

#define IEnumNetworks_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumNetworks_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumNetworks_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumNetworks_Clone(This,ppEnumNetwork)	\
    ( (This)->lpVtbl -> Clone(This,ppEnumNetwork) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumNetworks_INTERFACE_DEFINED__ */


#ifndef __INetworkEvents_INTERFACE_DEFINED__
#define __INetworkEvents_INTERFACE_DEFINED__

/* interface INetworkEvents */
/* [unique][oleautomation][object][helpstring][uuid] */ 

typedef 
enum NLM_NETWORK_PROPERTY_CHANGE
    {
        NLM_NETWORK_PROPERTY_CHANGE_CONNECTION	= 0x1,
        NLM_NETWORK_PROPERTY_CHANGE_DESCRIPTION	= 0x2,
        NLM_NETWORK_PROPERTY_CHANGE_NAME	= 0x4,
        NLM_NETWORK_PROPERTY_CHANGE_ICON	= 0x8,
        NLM_NETWORK_PROPERTY_CHANGE_CATEGORY_VALUE	= 0x10
    } 	NLM_NETWORK_PROPERTY_CHANGE;


EXTERN_C const IID IID_INetworkEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00004-570F-4A9B-8D69-199FDBA5723B")
    INetworkEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NetworkAdded( 
            /* [in] */ GUID networkId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NetworkDeleted( 
            /* [in] */ GUID networkId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NetworkConnectivityChanged( 
            /* [in] */ GUID networkId,
            /* [in] */ NLM_CONNECTIVITY newConnectivity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NetworkPropertyChanged( 
            /* [in] */ GUID networkId,
            /* [in] */ NLM_NETWORK_PROPERTY_CHANGE flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *NetworkAdded )( 
            __RPC__in INetworkEvents * This,
            /* [in] */ GUID networkId);
        
        HRESULT ( STDMETHODCALLTYPE *NetworkDeleted )( 
            __RPC__in INetworkEvents * This,
            /* [in] */ GUID networkId);
        
        HRESULT ( STDMETHODCALLTYPE *NetworkConnectivityChanged )( 
            __RPC__in INetworkEvents * This,
            /* [in] */ GUID networkId,
            /* [in] */ NLM_CONNECTIVITY newConnectivity);
        
        HRESULT ( STDMETHODCALLTYPE *NetworkPropertyChanged )( 
            __RPC__in INetworkEvents * This,
            /* [in] */ GUID networkId,
            /* [in] */ NLM_NETWORK_PROPERTY_CHANGE flags);
        
        END_INTERFACE
    } INetworkEventsVtbl;

    interface INetworkEvents
    {
        CONST_VTBL struct INetworkEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkEvents_NetworkAdded(This,networkId)	\
    ( (This)->lpVtbl -> NetworkAdded(This,networkId) ) 

#define INetworkEvents_NetworkDeleted(This,networkId)	\
    ( (This)->lpVtbl -> NetworkDeleted(This,networkId) ) 

#define INetworkEvents_NetworkConnectivityChanged(This,networkId,newConnectivity)	\
    ( (This)->lpVtbl -> NetworkConnectivityChanged(This,networkId,newConnectivity) ) 

#define INetworkEvents_NetworkPropertyChanged(This,networkId,flags)	\
    ( (This)->lpVtbl -> NetworkPropertyChanged(This,networkId,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkEvents_INTERFACE_DEFINED__ */


#ifndef __INetworkConnection_INTERFACE_DEFINED__
#define __INetworkConnection_INTERFACE_DEFINED__

/* interface INetworkConnection */
/* [dual][unique][oleautomation][object][helpstring][uuid] */ 


EXTERN_C const IID IID_INetworkConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00005-570F-4A9B-8D69-199FDBA5723B")
    INetworkConnection : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetwork( 
            /* [retval][out] */ __RPC__deref_out_opt INetwork **ppNetwork) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnectedToInternet( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConnectivity( 
            /* [retval][out] */ __RPC__out NLM_CONNECTIVITY *pConnectivity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConnectionId( 
            /* [retval][out] */ __RPC__out GUID *pgdConnectionId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAdapterId( 
            /* [retval][out] */ __RPC__out GUID *pgdAdapterId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDomainType( 
            /* [retval][out] */ __RPC__out NLM_DOMAIN_TYPE *pDomainType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in INetworkConnection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in INetworkConnection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in INetworkConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetworkConnection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetwork )( 
            __RPC__in INetworkConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt INetwork **ppNetwork);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnectedToInternet )( 
            __RPC__in INetworkConnection * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            __RPC__in INetworkConnection * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbIsConnected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConnectivity )( 
            __RPC__in INetworkConnection * This,
            /* [retval][out] */ __RPC__out NLM_CONNECTIVITY *pConnectivity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConnectionId )( 
            __RPC__in INetworkConnection * This,
            /* [retval][out] */ __RPC__out GUID *pgdConnectionId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAdapterId )( 
            __RPC__in INetworkConnection * This,
            /* [retval][out] */ __RPC__out GUID *pgdAdapterId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDomainType )( 
            __RPC__in INetworkConnection * This,
            /* [retval][out] */ __RPC__out NLM_DOMAIN_TYPE *pDomainType);
        
        END_INTERFACE
    } INetworkConnectionVtbl;

    interface INetworkConnection
    {
        CONST_VTBL struct INetworkConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkConnection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetworkConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetworkConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetworkConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetworkConnection_GetNetwork(This,ppNetwork)	\
    ( (This)->lpVtbl -> GetNetwork(This,ppNetwork) ) 

#define INetworkConnection_get_IsConnectedToInternet(This,pbIsConnected)	\
    ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) ) 

#define INetworkConnection_get_IsConnected(This,pbIsConnected)	\
    ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) ) 

#define INetworkConnection_GetConnectivity(This,pConnectivity)	\
    ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) ) 

#define INetworkConnection_GetConnectionId(This,pgdConnectionId)	\
    ( (This)->lpVtbl -> GetConnectionId(This,pgdConnectionId) ) 

#define INetworkConnection_GetAdapterId(This,pgdAdapterId)	\
    ( (This)->lpVtbl -> GetAdapterId(This,pgdAdapterId) ) 

#define INetworkConnection_GetDomainType(This,pDomainType)	\
    ( (This)->lpVtbl -> GetDomainType(This,pDomainType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkConnection_INTERFACE_DEFINED__ */


#ifndef __IEnumNetworkConnections_INTERFACE_DEFINED__
#define __IEnumNetworkConnections_INTERFACE_DEFINED__

/* interface IEnumNetworkConnections */
/* [dual][unique][oleautomation][object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumNetworkConnections;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00006-570F-4A9B-8D69-199FDBA5723B")
    IEnumNetworkConnections : public IDispatch
    {
    public:
        virtual /* [restricted][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumVARIANT **ppEnumVar) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) INetworkConnection **rgelt,
            /* [full][out][in] */ __RPC__inout_opt ULONG *pceltFetched) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworkConnections **ppEnumNetwork) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumNetworkConnectionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumNetworkConnections * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumNetworkConnections * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnumNetworkConnections * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [restricted][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumVARIANT **ppEnumVar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) INetworkConnection **rgelt,
            /* [full][out][in] */ __RPC__inout_opt ULONG *pceltFetched);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [in] */ ULONG celt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumNetworkConnections * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumNetworkConnections * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumNetworkConnections **ppEnumNetwork);
        
        END_INTERFACE
    } IEnumNetworkConnectionsVtbl;

    interface IEnumNetworkConnections
    {
        CONST_VTBL struct IEnumNetworkConnectionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumNetworkConnections_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumNetworkConnections_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumNetworkConnections_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumNetworkConnections_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnumNetworkConnections_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnumNetworkConnections_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnumNetworkConnections_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnumNetworkConnections_get__NewEnum(This,ppEnumVar)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVar) ) 

#define IEnumNetworkConnections_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumNetworkConnections_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumNetworkConnections_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumNetworkConnections_Clone(This,ppEnumNetwork)	\
    ( (This)->lpVtbl -> Clone(This,ppEnumNetwork) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumNetworkConnections_INTERFACE_DEFINED__ */


#ifndef __INetworkConnectionEvents_INTERFACE_DEFINED__
#define __INetworkConnectionEvents_INTERFACE_DEFINED__

/* interface INetworkConnectionEvents */
/* [unique][oleautomation][object][helpstring][uuid] */ 

typedef 
enum NLM_CONNECTION_PROPERTY_CHANGE
    {
        NLM_CONNECTION_PROPERTY_CHANGE_AUTHENTICATION	= 0x1
    } 	NLM_CONNECTION_PROPERTY_CHANGE;


EXTERN_C const IID IID_INetworkConnectionEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00007-570F-4A9B-8D69-199FDBA5723B")
    INetworkConnectionEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NetworkConnectionConnectivityChanged( 
            /* [in] */ GUID connectionId,
            /* [in] */ NLM_CONNECTIVITY newConnectivity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NetworkConnectionPropertyChanged( 
            /* [in] */ GUID connectionId,
            /* [in] */ NLM_CONNECTION_PROPERTY_CHANGE flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkConnectionEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkConnectionEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkConnectionEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkConnectionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *NetworkConnectionConnectivityChanged )( 
            __RPC__in INetworkConnectionEvents * This,
            /* [in] */ GUID connectionId,
            /* [in] */ NLM_CONNECTIVITY newConnectivity);
        
        HRESULT ( STDMETHODCALLTYPE *NetworkConnectionPropertyChanged )( 
            __RPC__in INetworkConnectionEvents * This,
            /* [in] */ GUID connectionId,
            /* [in] */ NLM_CONNECTION_PROPERTY_CHANGE flags);
        
        END_INTERFACE
    } INetworkConnectionEventsVtbl;

    interface INetworkConnectionEvents
    {
        CONST_VTBL struct INetworkConnectionEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkConnectionEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkConnectionEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkConnectionEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkConnectionEvents_NetworkConnectionConnectivityChanged(This,connectionId,newConnectivity)	\
    ( (This)->lpVtbl -> NetworkConnectionConnectivityChanged(This,connectionId,newConnectivity) ) 

#define INetworkConnectionEvents_NetworkConnectionPropertyChanged(This,connectionId,flags)	\
    ( (This)->lpVtbl -> NetworkConnectionPropertyChanged(This,connectionId,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkConnectionEvents_INTERFACE_DEFINED__ */


#ifndef __INetworkCostManager_INTERFACE_DEFINED__
#define __INetworkCostManager_INTERFACE_DEFINED__

/* interface INetworkCostManager */
/* [unique][object][helpstring][uuid] */ 


EXTERN_C const IID IID_INetworkCostManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00008-570F-4A9B-8D69-199FDBA5723B")
    INetworkCostManager : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCost( 
            /* [out] */ __RPC__out DWORD *pCost,
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestIPAddr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDataPlanStatus( 
            /* [out] */ __RPC__out NLM_DATAPLAN_STATUS *pDataPlanStatus,
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestIPAddr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDestinationAddresses( 
            /* [range][in] */ __RPC__in_range(0,NLM_MAX_ADDRESS_LIST_SIZE) UINT32 length,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(length) NLM_SOCKADDR *pDestIPAddrList,
            /* [in] */ VARIANT_BOOL bAppend) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkCostManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkCostManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkCostManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkCostManager * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCost )( 
            __RPC__in INetworkCostManager * This,
            /* [out] */ __RPC__out DWORD *pCost,
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestIPAddr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDataPlanStatus )( 
            __RPC__in INetworkCostManager * This,
            /* [out] */ __RPC__out NLM_DATAPLAN_STATUS *pDataPlanStatus,
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestIPAddr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDestinationAddresses )( 
            __RPC__in INetworkCostManager * This,
            /* [range][in] */ __RPC__in_range(0,NLM_MAX_ADDRESS_LIST_SIZE) UINT32 length,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(length) NLM_SOCKADDR *pDestIPAddrList,
            /* [in] */ VARIANT_BOOL bAppend);
        
        END_INTERFACE
    } INetworkCostManagerVtbl;

    interface INetworkCostManager
    {
        CONST_VTBL struct INetworkCostManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkCostManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkCostManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkCostManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkCostManager_GetCost(This,pCost,pDestIPAddr)	\
    ( (This)->lpVtbl -> GetCost(This,pCost,pDestIPAddr) ) 

#define INetworkCostManager_GetDataPlanStatus(This,pDataPlanStatus,pDestIPAddr)	\
    ( (This)->lpVtbl -> GetDataPlanStatus(This,pDataPlanStatus,pDestIPAddr) ) 

#define INetworkCostManager_SetDestinationAddresses(This,length,pDestIPAddrList,bAppend)	\
    ( (This)->lpVtbl -> SetDestinationAddresses(This,length,pDestIPAddrList,bAppend) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkCostManager_INTERFACE_DEFINED__ */


#ifndef __INetworkCostManagerEvents_INTERFACE_DEFINED__
#define __INetworkCostManagerEvents_INTERFACE_DEFINED__

/* interface INetworkCostManagerEvents */
/* [unique][object][helpstring][uuid] */ 


EXTERN_C const IID IID_INetworkCostManagerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB00009-570F-4A9B-8D69-199FDBA5723B")
    INetworkCostManagerEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CostChanged( 
            /* [in] */ DWORD newCost,
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DataPlanStatusChanged( 
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestAddr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkCostManagerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkCostManagerEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkCostManagerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkCostManagerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *CostChanged )( 
            __RPC__in INetworkCostManagerEvents * This,
            /* [in] */ DWORD newCost,
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestAddr);
        
        HRESULT ( STDMETHODCALLTYPE *DataPlanStatusChanged )( 
            __RPC__in INetworkCostManagerEvents * This,
            /* [unique][in] */ __RPC__in_opt NLM_SOCKADDR *pDestAddr);
        
        END_INTERFACE
    } INetworkCostManagerEventsVtbl;

    interface INetworkCostManagerEvents
    {
        CONST_VTBL struct INetworkCostManagerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkCostManagerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkCostManagerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkCostManagerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkCostManagerEvents_CostChanged(This,newCost,pDestAddr)	\
    ( (This)->lpVtbl -> CostChanged(This,newCost,pDestAddr) ) 

#define INetworkCostManagerEvents_DataPlanStatusChanged(This,pDestAddr)	\
    ( (This)->lpVtbl -> DataPlanStatusChanged(This,pDestAddr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkCostManagerEvents_INTERFACE_DEFINED__ */


#ifndef __INetworkConnectionCost_INTERFACE_DEFINED__
#define __INetworkConnectionCost_INTERFACE_DEFINED__

/* interface INetworkConnectionCost */
/* [unique][object][helpstring][uuid] */ 


EXTERN_C const IID IID_INetworkConnectionCost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB0000a-570F-4A9B-8D69-199FDBA5723B")
    INetworkConnectionCost : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCost( 
            /* [out] */ __RPC__out DWORD *pCost) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDataPlanStatus( 
            /* [out] */ __RPC__out NLM_DATAPLAN_STATUS *pDataPlanStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkConnectionCostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkConnectionCost * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkConnectionCost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkConnectionCost * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCost )( 
            __RPC__in INetworkConnectionCost * This,
            /* [out] */ __RPC__out DWORD *pCost);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDataPlanStatus )( 
            __RPC__in INetworkConnectionCost * This,
            /* [out] */ __RPC__out NLM_DATAPLAN_STATUS *pDataPlanStatus);
        
        END_INTERFACE
    } INetworkConnectionCostVtbl;

    interface INetworkConnectionCost
    {
        CONST_VTBL struct INetworkConnectionCostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkConnectionCost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkConnectionCost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkConnectionCost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkConnectionCost_GetCost(This,pCost)	\
    ( (This)->lpVtbl -> GetCost(This,pCost) ) 

#define INetworkConnectionCost_GetDataPlanStatus(This,pDataPlanStatus)	\
    ( (This)->lpVtbl -> GetDataPlanStatus(This,pDataPlanStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkConnectionCost_INTERFACE_DEFINED__ */


#ifndef __INetworkConnectionCostEvents_INTERFACE_DEFINED__
#define __INetworkConnectionCostEvents_INTERFACE_DEFINED__

/* interface INetworkConnectionCostEvents */
/* [unique][object][helpstring][uuid] */ 


EXTERN_C const IID IID_INetworkConnectionCostEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCB0000b-570F-4A9B-8D69-199FDBA5723B")
    INetworkConnectionCostEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectionCostChanged( 
            /* [in] */ GUID connectionId,
            /* [in] */ DWORD newCost) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectionDataPlanStatusChanged( 
            /* [in] */ GUID connectionId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkConnectionCostEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INetworkConnectionCostEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INetworkConnectionCostEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INetworkConnectionCostEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectionCostChanged )( 
            __RPC__in INetworkConnectionCostEvents * This,
            /* [in] */ GUID connectionId,
            /* [in] */ DWORD newCost);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectionDataPlanStatusChanged )( 
            __RPC__in INetworkConnectionCostEvents * This,
            /* [in] */ GUID connectionId);
        
        END_INTERFACE
    } INetworkConnectionCostEventsVtbl;

    interface INetworkConnectionCostEvents
    {
        CONST_VTBL struct INetworkConnectionCostEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkConnectionCostEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkConnectionCostEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkConnectionCostEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkConnectionCostEvents_ConnectionCostChanged(This,connectionId,newCost)	\
    ( (This)->lpVtbl -> ConnectionCostChanged(This,connectionId,newCost) ) 

#define INetworkConnectionCostEvents_ConnectionDataPlanStatusChanged(This,connectionId)	\
    ( (This)->lpVtbl -> ConnectionDataPlanStatusChanged(This,connectionId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkConnectionCostEvents_INTERFACE_DEFINED__ */



#ifndef __NETWORKLIST_LIBRARY_DEFINED__
#define __NETWORKLIST_LIBRARY_DEFINED__

/* library NETWORKLIST */
/* [helpstring][version][uuid] */ 




EXTERN_C const IID LIBID_NETWORKLIST;

EXTERN_C const CLSID CLSID_NetworkListManager;

#ifdef __cplusplus

class DECLSPEC_UUID("DCB00C01-570F-4A9B-8D69-199FDBA5723B")
NetworkListManager;
#endif
#endif /* __NETWORKLIST_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_netlistmgr_0000_0013 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0013_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


