

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for credentialprovider.idl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __credentialprovider_h__
#define __credentialprovider_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICredentialProviderCredential_FWD_DEFINED__
#define __ICredentialProviderCredential_FWD_DEFINED__
typedef interface ICredentialProviderCredential ICredentialProviderCredential;
#endif 	/* __ICredentialProviderCredential_FWD_DEFINED__ */


#ifndef __IQueryContinueWithStatus_FWD_DEFINED__
#define __IQueryContinueWithStatus_FWD_DEFINED__
typedef interface IQueryContinueWithStatus IQueryContinueWithStatus;
#endif 	/* __IQueryContinueWithStatus_FWD_DEFINED__ */


#ifndef __IConnectableCredentialProviderCredential_FWD_DEFINED__
#define __IConnectableCredentialProviderCredential_FWD_DEFINED__
typedef interface IConnectableCredentialProviderCredential IConnectableCredentialProviderCredential;
#endif 	/* __IConnectableCredentialProviderCredential_FWD_DEFINED__ */


#ifndef __ICredentialProviderCredentialEvents_FWD_DEFINED__
#define __ICredentialProviderCredentialEvents_FWD_DEFINED__
typedef interface ICredentialProviderCredentialEvents ICredentialProviderCredentialEvents;
#endif 	/* __ICredentialProviderCredentialEvents_FWD_DEFINED__ */


#ifndef __ICredentialProvider_FWD_DEFINED__
#define __ICredentialProvider_FWD_DEFINED__
typedef interface ICredentialProvider ICredentialProvider;
#endif 	/* __ICredentialProvider_FWD_DEFINED__ */


#ifndef __ICredentialProviderEvents_FWD_DEFINED__
#define __ICredentialProviderEvents_FWD_DEFINED__
typedef interface ICredentialProviderEvents ICredentialProviderEvents;
#endif 	/* __ICredentialProviderEvents_FWD_DEFINED__ */


#ifndef __ICredentialProviderFilter_FWD_DEFINED__
#define __ICredentialProviderFilter_FWD_DEFINED__
typedef interface ICredentialProviderFilter ICredentialProviderFilter;
#endif 	/* __ICredentialProviderFilter_FWD_DEFINED__ */


#ifndef __PasswordCredentialProvider_FWD_DEFINED__
#define __PasswordCredentialProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class PasswordCredentialProvider PasswordCredentialProvider;
#else
typedef struct PasswordCredentialProvider PasswordCredentialProvider;
#endif /* __cplusplus */

#endif 	/* __PasswordCredentialProvider_FWD_DEFINED__ */


#ifndef __NPCredentialProvider_FWD_DEFINED__
#define __NPCredentialProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class NPCredentialProvider NPCredentialProvider;
#else
typedef struct NPCredentialProvider NPCredentialProvider;
#endif /* __cplusplus */

#endif 	/* __NPCredentialProvider_FWD_DEFINED__ */


#ifndef __SmartcardCredentialProvider_FWD_DEFINED__
#define __SmartcardCredentialProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmartcardCredentialProvider SmartcardCredentialProvider;
#else
typedef struct SmartcardCredentialProvider SmartcardCredentialProvider;
#endif /* __cplusplus */

#endif 	/* __SmartcardCredentialProvider_FWD_DEFINED__ */


#ifndef __SmartcardPinProvider_FWD_DEFINED__
#define __SmartcardPinProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmartcardPinProvider SmartcardPinProvider;
#else
typedef struct SmartcardPinProvider SmartcardPinProvider;
#endif /* __cplusplus */

#endif 	/* __SmartcardPinProvider_FWD_DEFINED__ */


#ifndef __GenericCredentialProvider_FWD_DEFINED__
#define __GenericCredentialProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class GenericCredentialProvider GenericCredentialProvider;
#else
typedef struct GenericCredentialProvider GenericCredentialProvider;
#endif /* __cplusplus */

#endif 	/* __GenericCredentialProvider_FWD_DEFINED__ */


#ifndef __RASProvider_FWD_DEFINED__
#define __RASProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class RASProvider RASProvider;
#else
typedef struct RASProvider RASProvider;
#endif /* __cplusplus */

#endif 	/* __RASProvider_FWD_DEFINED__ */


#ifndef __OnexCredentialProvider_FWD_DEFINED__
#define __OnexCredentialProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class OnexCredentialProvider OnexCredentialProvider;
#else
typedef struct OnexCredentialProvider OnexCredentialProvider;
#endif /* __cplusplus */

#endif 	/* __OnexCredentialProvider_FWD_DEFINED__ */


#ifndef __OnexPlapSmartcardCredentialProvider_FWD_DEFINED__
#define __OnexPlapSmartcardCredentialProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class OnexPlapSmartcardCredentialProvider OnexPlapSmartcardCredentialProvider;
#else
typedef struct OnexPlapSmartcardCredentialProvider OnexPlapSmartcardCredentialProvider;
#endif /* __cplusplus */

#endif 	/* __OnexPlapSmartcardCredentialProvider_FWD_DEFINED__ */


#ifndef __VaultProvider_FWD_DEFINED__
#define __VaultProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class VaultProvider VaultProvider;
#else
typedef struct VaultProvider VaultProvider;
#endif /* __cplusplus */

#endif 	/* __VaultProvider_FWD_DEFINED__ */


#ifndef __WinBioCredentialProvider_FWD_DEFINED__
#define __WinBioCredentialProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class WinBioCredentialProvider WinBioCredentialProvider;
#else
typedef struct WinBioCredentialProvider WinBioCredentialProvider;
#endif /* __cplusplus */

#endif 	/* __WinBioCredentialProvider_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_credentialprovider_0000_0000 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum _CREDENTIAL_PROVIDER_USAGE_SCENARIO
    {	CPUS_INVALID	= 0,
	CPUS_LOGON	= ( CPUS_INVALID + 1 ) ,
	CPUS_UNLOCK_WORKSTATION	= ( CPUS_LOGON + 1 ) ,
	CPUS_CHANGE_PASSWORD	= ( CPUS_UNLOCK_WORKSTATION + 1 ) ,
	CPUS_CREDUI	= ( CPUS_CHANGE_PASSWORD + 1 ) ,
	CPUS_PLAP	= ( CPUS_CREDUI + 1 ) 
    } 	CREDENTIAL_PROVIDER_USAGE_SCENARIO;

typedef /* [v1_enum] */ 
enum _CREDENTIAL_PROVIDER_FIELD_TYPE
    {	CPFT_INVALID	= 0,
	CPFT_LARGE_TEXT	= ( CPFT_INVALID + 1 ) ,
	CPFT_SMALL_TEXT	= ( CPFT_LARGE_TEXT + 1 ) ,
	CPFT_COMMAND_LINK	= ( CPFT_SMALL_TEXT + 1 ) ,
	CPFT_EDIT_TEXT	= ( CPFT_COMMAND_LINK + 1 ) ,
	CPFT_PASSWORD_TEXT	= ( CPFT_EDIT_TEXT + 1 ) ,
	CPFT_TILE_IMAGE	= ( CPFT_PASSWORD_TEXT + 1 ) ,
	CPFT_CHECKBOX	= ( CPFT_TILE_IMAGE + 1 ) ,
	CPFT_COMBOBOX	= ( CPFT_CHECKBOX + 1 ) ,
	CPFT_SUBMIT_BUTTON	= ( CPFT_COMBOBOX + 1 ) 
    } 	CREDENTIAL_PROVIDER_FIELD_TYPE;

typedef /* [v1_enum] */ 
enum _CREDENTIAL_PROVIDER_FIELD_STATE
    {	CPFS_HIDDEN	= 0,
	CPFS_DISPLAY_IN_SELECTED_TILE	= ( CPFS_HIDDEN + 1 ) ,
	CPFS_DISPLAY_IN_DESELECTED_TILE	= ( CPFS_DISPLAY_IN_SELECTED_TILE + 1 ) ,
	CPFS_DISPLAY_IN_BOTH	= ( CPFS_DISPLAY_IN_DESELECTED_TILE + 1 ) 
    } 	CREDENTIAL_PROVIDER_FIELD_STATE;

typedef /* [v1_enum] */ 
enum _CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE
    {	CPFIS_NONE	= 0,
	CPFIS_READONLY	= ( CPFIS_NONE + 1 ) ,
	CPFIS_DISABLED	= ( CPFIS_READONLY + 1 ) ,
	CPFIS_FOCUSED	= ( CPFIS_DISABLED + 1 ) 
    } 	CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE;

typedef struct _CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR
    {
    DWORD dwFieldID;
    CREDENTIAL_PROVIDER_FIELD_TYPE cpft;
    LPWSTR pszLabel;
    GUID guidFieldType;
    } 	CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR;

typedef /* [v1_enum] */ 
enum _CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE
    {	CPGSR_NO_CREDENTIAL_NOT_FINISHED	= 0,
	CPGSR_NO_CREDENTIAL_FINISHED	= ( CPGSR_NO_CREDENTIAL_NOT_FINISHED + 1 ) ,
	CPGSR_RETURN_CREDENTIAL_FINISHED	= ( CPGSR_NO_CREDENTIAL_FINISHED + 1 ) 
    } 	CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE;

typedef /* [v1_enum] */ 
enum _CREDENTIAL_PROVIDER_STATUS_ICON
    {	CPSI_NONE	= 0,
	CPSI_ERROR	= ( CPSI_NONE + 1 ) ,
	CPSI_WARNING	= ( CPSI_ERROR + 1 ) ,
	CPSI_SUCCESS	= ( CPSI_WARNING + 1 ) 
    } 	CREDENTIAL_PROVIDER_STATUS_ICON;

typedef struct _CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION
    {
    ULONG ulAuthenticationPackage;
    GUID clsidCredentialProvider;
    ULONG cbSerialization;
    byte *rgbSerialization;
    } 	CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION;

typedef LONG NTSTATUS;

#define CREDENTIAL_PROVIDER_NO_DEFAULT       ((DWORD)-1)



extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0000_v0_0_s_ifspec;

#ifndef __ICredentialProviderCredential_INTERFACE_DEFINED__
#define __ICredentialProviderCredential_INTERFACE_DEFINED__

/* interface ICredentialProviderCredential */
/* [uuid][ref][object][local] */ 


EXTERN_C const IID IID_ICredentialProviderCredential;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("63913a93-40c1-481a-818d-4072ff8c70cc")
    ICredentialProviderCredential : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ICredentialProviderCredentialEvents *pcpce) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnAdvise( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSelected( 
            /* [out] */ BOOL *pbAutoLogon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDeselected( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldState( 
            /* [in] */ DWORD dwFieldID,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_STATE *pcpfs,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *pcpfis) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStringValue( 
            /* [in] */ DWORD dwFieldID,
            /* [string][out] */ LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBitmapValue( 
            /* [in] */ DWORD dwFieldID,
            /* [out] */ HBITMAP *phbmp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCheckboxValue( 
            /* [in] */ DWORD dwFieldID,
            /* [out] */ BOOL *pbChecked,
            /* [string][out] */ LPWSTR *ppszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSubmitButtonValue( 
            /* [in] */ DWORD dwFieldID,
            /* [out] */ DWORD *pdwAdjacentTo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComboBoxValueCount( 
            /* [in] */ DWORD dwFieldID,
            /* [out] */ DWORD *pcItems,
            /* [out] */ DWORD *pdwSelectedItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComboBoxValueAt( 
            /* [in] */ DWORD dwFieldID,
            DWORD dwItem,
            /* [string][out] */ LPWSTR *ppszItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStringValue( 
            /* [in] */ DWORD dwFieldID,
            /* [string][in] */ LPCWSTR psz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCheckboxValue( 
            /* [in] */ DWORD dwFieldID,
            /* [in] */ BOOL bChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetComboBoxSelectedValue( 
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwSelectedItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CommandLinkClicked( 
            /* [in] */ DWORD dwFieldID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSerialization( 
            /* [out] */ CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *pcpgsr,
            /* [out] */ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs,
            /* [out] */ LPWSTR *ppszOptionalStatusText,
            /* [out] */ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportResult( 
            /* [in] */ NTSTATUS ntsStatus,
            /* [in] */ NTSTATUS ntsSubstatus,
            /* [out] */ LPWSTR *ppszOptionalStatusText,
            /* [out] */ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICredentialProviderCredentialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICredentialProviderCredential * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICredentialProviderCredential * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICredentialProviderCredential * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ICredentialProviderCredential * This,
            /* [in] */ ICredentialProviderCredentialEvents *pcpce);
        
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )( 
            ICredentialProviderCredential * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSelected )( 
            ICredentialProviderCredential * This,
            /* [out] */ BOOL *pbAutoLogon);
        
        HRESULT ( STDMETHODCALLTYPE *SetDeselected )( 
            ICredentialProviderCredential * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldState )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_STATE *pcpfs,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *pcpfis);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [string][out] */ LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetBitmapValue )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ HBITMAP *phbmp);
        
        HRESULT ( STDMETHODCALLTYPE *GetCheckboxValue )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ BOOL *pbChecked,
            /* [string][out] */ LPWSTR *ppszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetSubmitButtonValue )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ DWORD *pdwAdjacentTo);
        
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueCount )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ DWORD *pcItems,
            /* [out] */ DWORD *pdwSelectedItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueAt )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            DWORD dwItem,
            /* [string][out] */ LPWSTR *ppszItem);
        
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [string][in] */ LPCWSTR psz);
        
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxValue )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ BOOL bChecked);
        
        HRESULT ( STDMETHODCALLTYPE *SetComboBoxSelectedValue )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwSelectedItem);
        
        HRESULT ( STDMETHODCALLTYPE *CommandLinkClicked )( 
            ICredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialization )( 
            ICredentialProviderCredential * This,
            /* [out] */ CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *pcpgsr,
            /* [out] */ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs,
            /* [out] */ LPWSTR *ppszOptionalStatusText,
            /* [out] */ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        
        HRESULT ( STDMETHODCALLTYPE *ReportResult )( 
            ICredentialProviderCredential * This,
            /* [in] */ NTSTATUS ntsStatus,
            /* [in] */ NTSTATUS ntsSubstatus,
            /* [out] */ LPWSTR *ppszOptionalStatusText,
            /* [out] */ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        
        END_INTERFACE
    } ICredentialProviderCredentialVtbl;

    interface ICredentialProviderCredential
    {
        CONST_VTBL struct ICredentialProviderCredentialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICredentialProviderCredential_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICredentialProviderCredential_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICredentialProviderCredential_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICredentialProviderCredential_Advise(This,pcpce)	\
    ( (This)->lpVtbl -> Advise(This,pcpce) ) 

#define ICredentialProviderCredential_UnAdvise(This)	\
    ( (This)->lpVtbl -> UnAdvise(This) ) 

#define ICredentialProviderCredential_SetSelected(This,pbAutoLogon)	\
    ( (This)->lpVtbl -> SetSelected(This,pbAutoLogon) ) 

#define ICredentialProviderCredential_SetDeselected(This)	\
    ( (This)->lpVtbl -> SetDeselected(This) ) 

#define ICredentialProviderCredential_GetFieldState(This,dwFieldID,pcpfs,pcpfis)	\
    ( (This)->lpVtbl -> GetFieldState(This,dwFieldID,pcpfs,pcpfis) ) 

#define ICredentialProviderCredential_GetStringValue(This,dwFieldID,ppsz)	\
    ( (This)->lpVtbl -> GetStringValue(This,dwFieldID,ppsz) ) 

#define ICredentialProviderCredential_GetBitmapValue(This,dwFieldID,phbmp)	\
    ( (This)->lpVtbl -> GetBitmapValue(This,dwFieldID,phbmp) ) 

#define ICredentialProviderCredential_GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel)	\
    ( (This)->lpVtbl -> GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel) ) 

#define ICredentialProviderCredential_GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo)	\
    ( (This)->lpVtbl -> GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo) ) 

#define ICredentialProviderCredential_GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem)	\
    ( (This)->lpVtbl -> GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem) ) 

#define ICredentialProviderCredential_GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem)	\
    ( (This)->lpVtbl -> GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem) ) 

#define ICredentialProviderCredential_SetStringValue(This,dwFieldID,psz)	\
    ( (This)->lpVtbl -> SetStringValue(This,dwFieldID,psz) ) 

#define ICredentialProviderCredential_SetCheckboxValue(This,dwFieldID,bChecked)	\
    ( (This)->lpVtbl -> SetCheckboxValue(This,dwFieldID,bChecked) ) 

#define ICredentialProviderCredential_SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem)	\
    ( (This)->lpVtbl -> SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem) ) 

#define ICredentialProviderCredential_CommandLinkClicked(This,dwFieldID)	\
    ( (This)->lpVtbl -> CommandLinkClicked(This,dwFieldID) ) 

#define ICredentialProviderCredential_GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon)	\
    ( (This)->lpVtbl -> GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon) ) 

#define ICredentialProviderCredential_ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon)	\
    ( (This)->lpVtbl -> ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICredentialProviderCredential_INTERFACE_DEFINED__ */


#ifndef __IQueryContinueWithStatus_INTERFACE_DEFINED__
#define __IQueryContinueWithStatus_INTERFACE_DEFINED__

/* interface IQueryContinueWithStatus */
/* [uuid][ref][object][local] */ 


EXTERN_C const IID IID_IQueryContinueWithStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9090be5b-502b-41fb-bccc-0049a6c7254b")
    IQueryContinueWithStatus : public IQueryContinue
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStatusMessage( 
            /* [string][in] */ LPCWSTR psz) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQueryContinueWithStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueryContinueWithStatus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueryContinueWithStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueryContinueWithStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContinue )( 
            IQueryContinueWithStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatusMessage )( 
            IQueryContinueWithStatus * This,
            /* [string][in] */ LPCWSTR psz);
        
        END_INTERFACE
    } IQueryContinueWithStatusVtbl;

    interface IQueryContinueWithStatus
    {
        CONST_VTBL struct IQueryContinueWithStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueryContinueWithStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueryContinueWithStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueryContinueWithStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueryContinueWithStatus_QueryContinue(This)	\
    ( (This)->lpVtbl -> QueryContinue(This) ) 


#define IQueryContinueWithStatus_SetStatusMessage(This,psz)	\
    ( (This)->lpVtbl -> SetStatusMessage(This,psz) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueryContinueWithStatus_INTERFACE_DEFINED__ */


#ifndef __IConnectableCredentialProviderCredential_INTERFACE_DEFINED__
#define __IConnectableCredentialProviderCredential_INTERFACE_DEFINED__

/* interface IConnectableCredentialProviderCredential */
/* [uuid][ref][object][local] */ 


EXTERN_C const IID IID_IConnectableCredentialProviderCredential;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9387928b-ac75-4bf9-8ab2-2b93c4a55290")
    IConnectableCredentialProviderCredential : public ICredentialProviderCredential
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ IQueryContinueWithStatus *pqcws) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConnectableCredentialProviderCredentialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConnectableCredentialProviderCredential * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConnectableCredentialProviderCredential * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ ICredentialProviderCredentialEvents *pcpce);
        
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )( 
            IConnectableCredentialProviderCredential * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSelected )( 
            IConnectableCredentialProviderCredential * This,
            /* [out] */ BOOL *pbAutoLogon);
        
        HRESULT ( STDMETHODCALLTYPE *SetDeselected )( 
            IConnectableCredentialProviderCredential * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldState )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_STATE *pcpfs,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *pcpfis);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [string][out] */ LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetBitmapValue )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ HBITMAP *phbmp);
        
        HRESULT ( STDMETHODCALLTYPE *GetCheckboxValue )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ BOOL *pbChecked,
            /* [string][out] */ LPWSTR *ppszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetSubmitButtonValue )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ DWORD *pdwAdjacentTo);
        
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueCount )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [out] */ DWORD *pcItems,
            /* [out] */ DWORD *pdwSelectedItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueAt )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            DWORD dwItem,
            /* [string][out] */ LPWSTR *ppszItem);
        
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [string][in] */ LPCWSTR psz);
        
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxValue )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ BOOL bChecked);
        
        HRESULT ( STDMETHODCALLTYPE *SetComboBoxSelectedValue )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwSelectedItem);
        
        HRESULT ( STDMETHODCALLTYPE *CommandLinkClicked )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ DWORD dwFieldID);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialization )( 
            IConnectableCredentialProviderCredential * This,
            /* [out] */ CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *pcpgsr,
            /* [out] */ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs,
            /* [out] */ LPWSTR *ppszOptionalStatusText,
            /* [out] */ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        
        HRESULT ( STDMETHODCALLTYPE *ReportResult )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ NTSTATUS ntsStatus,
            /* [in] */ NTSTATUS ntsSubstatus,
            /* [out] */ LPWSTR *ppszOptionalStatusText,
            /* [out] */ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        
        HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IConnectableCredentialProviderCredential * This,
            /* [in] */ IQueryContinueWithStatus *pqcws);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IConnectableCredentialProviderCredential * This);
        
        END_INTERFACE
    } IConnectableCredentialProviderCredentialVtbl;

    interface IConnectableCredentialProviderCredential
    {
        CONST_VTBL struct IConnectableCredentialProviderCredentialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConnectableCredentialProviderCredential_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConnectableCredentialProviderCredential_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConnectableCredentialProviderCredential_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConnectableCredentialProviderCredential_Advise(This,pcpce)	\
    ( (This)->lpVtbl -> Advise(This,pcpce) ) 

#define IConnectableCredentialProviderCredential_UnAdvise(This)	\
    ( (This)->lpVtbl -> UnAdvise(This) ) 

#define IConnectableCredentialProviderCredential_SetSelected(This,pbAutoLogon)	\
    ( (This)->lpVtbl -> SetSelected(This,pbAutoLogon) ) 

#define IConnectableCredentialProviderCredential_SetDeselected(This)	\
    ( (This)->lpVtbl -> SetDeselected(This) ) 

#define IConnectableCredentialProviderCredential_GetFieldState(This,dwFieldID,pcpfs,pcpfis)	\
    ( (This)->lpVtbl -> GetFieldState(This,dwFieldID,pcpfs,pcpfis) ) 

#define IConnectableCredentialProviderCredential_GetStringValue(This,dwFieldID,ppsz)	\
    ( (This)->lpVtbl -> GetStringValue(This,dwFieldID,ppsz) ) 

#define IConnectableCredentialProviderCredential_GetBitmapValue(This,dwFieldID,phbmp)	\
    ( (This)->lpVtbl -> GetBitmapValue(This,dwFieldID,phbmp) ) 

#define IConnectableCredentialProviderCredential_GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel)	\
    ( (This)->lpVtbl -> GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel) ) 

#define IConnectableCredentialProviderCredential_GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo)	\
    ( (This)->lpVtbl -> GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo) ) 

#define IConnectableCredentialProviderCredential_GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem)	\
    ( (This)->lpVtbl -> GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem) ) 

#define IConnectableCredentialProviderCredential_GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem)	\
    ( (This)->lpVtbl -> GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem) ) 

#define IConnectableCredentialProviderCredential_SetStringValue(This,dwFieldID,psz)	\
    ( (This)->lpVtbl -> SetStringValue(This,dwFieldID,psz) ) 

#define IConnectableCredentialProviderCredential_SetCheckboxValue(This,dwFieldID,bChecked)	\
    ( (This)->lpVtbl -> SetCheckboxValue(This,dwFieldID,bChecked) ) 

#define IConnectableCredentialProviderCredential_SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem)	\
    ( (This)->lpVtbl -> SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem) ) 

#define IConnectableCredentialProviderCredential_CommandLinkClicked(This,dwFieldID)	\
    ( (This)->lpVtbl -> CommandLinkClicked(This,dwFieldID) ) 

#define IConnectableCredentialProviderCredential_GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon)	\
    ( (This)->lpVtbl -> GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon) ) 

#define IConnectableCredentialProviderCredential_ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon)	\
    ( (This)->lpVtbl -> ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon) ) 


#define IConnectableCredentialProviderCredential_Connect(This,pqcws)	\
    ( (This)->lpVtbl -> Connect(This,pqcws) ) 

#define IConnectableCredentialProviderCredential_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConnectableCredentialProviderCredential_INTERFACE_DEFINED__ */


#ifndef __ICredentialProviderCredentialEvents_INTERFACE_DEFINED__
#define __ICredentialProviderCredentialEvents_INTERFACE_DEFINED__

/* interface ICredentialProviderCredentialEvents */
/* [uuid][ref][object][local] */ 


EXTERN_C const IID IID_ICredentialProviderCredentialEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fa6fa76b-66b7-4b11-95f1-86171118e816")
    ICredentialProviderCredentialEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFieldState( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ CREDENTIAL_PROVIDER_FIELD_STATE cpfs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFieldInteractiveState( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE cpfis) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFieldString( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [unique][string][in] */ LPCWSTR psz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFieldCheckbox( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ BOOL bChecked,
            /* [in] */ LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFieldBitmap( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ HBITMAP hbmp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFieldComboBoxSelectedItem( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwSelectedItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteFieldComboBoxItem( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendFieldComboBoxItem( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [string][in] */ LPCWSTR pszItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFieldSubmitButton( 
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwAdjacentTo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCreatingWindow( 
            /* [out] */ HWND *phwndOwner) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICredentialProviderCredentialEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICredentialProviderCredentialEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICredentialProviderCredentialEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFieldState )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ CREDENTIAL_PROVIDER_FIELD_STATE cpfs);
        
        HRESULT ( STDMETHODCALLTYPE *SetFieldInteractiveState )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE cpfis);
        
        HRESULT ( STDMETHODCALLTYPE *SetFieldString )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [unique][string][in] */ LPCWSTR psz);
        
        HRESULT ( STDMETHODCALLTYPE *SetFieldCheckbox )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ BOOL bChecked,
            /* [in] */ LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *SetFieldBitmap )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ HBITMAP hbmp);
        
        HRESULT ( STDMETHODCALLTYPE *SetFieldComboBoxSelectedItem )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwSelectedItem);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteFieldComboBoxItem )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwItem);
        
        HRESULT ( STDMETHODCALLTYPE *AppendFieldComboBoxItem )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [string][in] */ LPCWSTR pszItem);
        
        HRESULT ( STDMETHODCALLTYPE *SetFieldSubmitButton )( 
            ICredentialProviderCredentialEvents * This,
            /* [in] */ ICredentialProviderCredential *pcpc,
            /* [in] */ DWORD dwFieldID,
            /* [in] */ DWORD dwAdjacentTo);
        
        HRESULT ( STDMETHODCALLTYPE *OnCreatingWindow )( 
            ICredentialProviderCredentialEvents * This,
            /* [out] */ HWND *phwndOwner);
        
        END_INTERFACE
    } ICredentialProviderCredentialEventsVtbl;

    interface ICredentialProviderCredentialEvents
    {
        CONST_VTBL struct ICredentialProviderCredentialEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICredentialProviderCredentialEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICredentialProviderCredentialEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICredentialProviderCredentialEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICredentialProviderCredentialEvents_SetFieldState(This,pcpc,dwFieldID,cpfs)	\
    ( (This)->lpVtbl -> SetFieldState(This,pcpc,dwFieldID,cpfs) ) 

#define ICredentialProviderCredentialEvents_SetFieldInteractiveState(This,pcpc,dwFieldID,cpfis)	\
    ( (This)->lpVtbl -> SetFieldInteractiveState(This,pcpc,dwFieldID,cpfis) ) 

#define ICredentialProviderCredentialEvents_SetFieldString(This,pcpc,dwFieldID,psz)	\
    ( (This)->lpVtbl -> SetFieldString(This,pcpc,dwFieldID,psz) ) 

#define ICredentialProviderCredentialEvents_SetFieldCheckbox(This,pcpc,dwFieldID,bChecked,pszLabel)	\
    ( (This)->lpVtbl -> SetFieldCheckbox(This,pcpc,dwFieldID,bChecked,pszLabel) ) 

#define ICredentialProviderCredentialEvents_SetFieldBitmap(This,pcpc,dwFieldID,hbmp)	\
    ( (This)->lpVtbl -> SetFieldBitmap(This,pcpc,dwFieldID,hbmp) ) 

#define ICredentialProviderCredentialEvents_SetFieldComboBoxSelectedItem(This,pcpc,dwFieldID,dwSelectedItem)	\
    ( (This)->lpVtbl -> SetFieldComboBoxSelectedItem(This,pcpc,dwFieldID,dwSelectedItem) ) 

#define ICredentialProviderCredentialEvents_DeleteFieldComboBoxItem(This,pcpc,dwFieldID,dwItem)	\
    ( (This)->lpVtbl -> DeleteFieldComboBoxItem(This,pcpc,dwFieldID,dwItem) ) 

#define ICredentialProviderCredentialEvents_AppendFieldComboBoxItem(This,pcpc,dwFieldID,pszItem)	\
    ( (This)->lpVtbl -> AppendFieldComboBoxItem(This,pcpc,dwFieldID,pszItem) ) 

#define ICredentialProviderCredentialEvents_SetFieldSubmitButton(This,pcpc,dwFieldID,dwAdjacentTo)	\
    ( (This)->lpVtbl -> SetFieldSubmitButton(This,pcpc,dwFieldID,dwAdjacentTo) ) 

#define ICredentialProviderCredentialEvents_OnCreatingWindow(This,phwndOwner)	\
    ( (This)->lpVtbl -> OnCreatingWindow(This,phwndOwner) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICredentialProviderCredentialEvents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_credentialprovider_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0004_v0_0_s_ifspec;

#ifndef __ICredentialProvider_INTERFACE_DEFINED__
#define __ICredentialProvider_INTERFACE_DEFINED__

/* interface ICredentialProvider */
/* [uuid][ref][object][local] */ 


EXTERN_C const IID IID_ICredentialProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d27c3481-5a1c-45b2-8aaa-c20ebbe8229e")
    ICredentialProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetUsageScenario( 
            /* [in] */ CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSerialization( 
            /* [in] */ const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ICredentialProviderEvents *pcpe,
            /* [in] */ UINT_PTR upAdviseContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnAdvise( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldDescriptorCount( 
            /* [out] */ DWORD *pdwCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldDescriptorAt( 
            /* [in] */ DWORD dwIndex,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR **ppcpfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCredentialCount( 
            /* [out] */ DWORD *pdwCount,
            /* [out] */ DWORD *pdwDefault,
            /* [out] */ BOOL *pbAutoLogonWithDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCredentialAt( 
            /* [in] */ DWORD dwIndex,
            /* [out] */ ICredentialProviderCredential **ppcpc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICredentialProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICredentialProvider * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICredentialProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICredentialProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetUsageScenario )( 
            ICredentialProvider * This,
            /* [in] */ CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetSerialization )( 
            ICredentialProvider * This,
            /* [in] */ const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ICredentialProvider * This,
            /* [in] */ ICredentialProviderEvents *pcpe,
            /* [in] */ UINT_PTR upAdviseContext);
        
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )( 
            ICredentialProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldDescriptorCount )( 
            ICredentialProvider * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldDescriptorAt )( 
            ICredentialProvider * This,
            /* [in] */ DWORD dwIndex,
            /* [out] */ CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR **ppcpfd);
        
        HRESULT ( STDMETHODCALLTYPE *GetCredentialCount )( 
            ICredentialProvider * This,
            /* [out] */ DWORD *pdwCount,
            /* [out] */ DWORD *pdwDefault,
            /* [out] */ BOOL *pbAutoLogonWithDefault);
        
        HRESULT ( STDMETHODCALLTYPE *GetCredentialAt )( 
            ICredentialProvider * This,
            /* [in] */ DWORD dwIndex,
            /* [out] */ ICredentialProviderCredential **ppcpc);
        
        END_INTERFACE
    } ICredentialProviderVtbl;

    interface ICredentialProvider
    {
        CONST_VTBL struct ICredentialProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICredentialProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICredentialProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICredentialProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICredentialProvider_SetUsageScenario(This,cpus,dwFlags)	\
    ( (This)->lpVtbl -> SetUsageScenario(This,cpus,dwFlags) ) 

#define ICredentialProvider_SetSerialization(This,pcpcs)	\
    ( (This)->lpVtbl -> SetSerialization(This,pcpcs) ) 

#define ICredentialProvider_Advise(This,pcpe,upAdviseContext)	\
    ( (This)->lpVtbl -> Advise(This,pcpe,upAdviseContext) ) 

#define ICredentialProvider_UnAdvise(This)	\
    ( (This)->lpVtbl -> UnAdvise(This) ) 

#define ICredentialProvider_GetFieldDescriptorCount(This,pdwCount)	\
    ( (This)->lpVtbl -> GetFieldDescriptorCount(This,pdwCount) ) 

#define ICredentialProvider_GetFieldDescriptorAt(This,dwIndex,ppcpfd)	\
    ( (This)->lpVtbl -> GetFieldDescriptorAt(This,dwIndex,ppcpfd) ) 

#define ICredentialProvider_GetCredentialCount(This,pdwCount,pdwDefault,pbAutoLogonWithDefault)	\
    ( (This)->lpVtbl -> GetCredentialCount(This,pdwCount,pdwDefault,pbAutoLogonWithDefault) ) 

#define ICredentialProvider_GetCredentialAt(This,dwIndex,ppcpc)	\
    ( (This)->lpVtbl -> GetCredentialAt(This,dwIndex,ppcpc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICredentialProvider_INTERFACE_DEFINED__ */


#ifndef __ICredentialProviderEvents_INTERFACE_DEFINED__
#define __ICredentialProviderEvents_INTERFACE_DEFINED__

/* interface ICredentialProviderEvents */
/* [uuid][ref][object] */ 


EXTERN_C const IID IID_ICredentialProviderEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34201e5a-a787-41a3-a5a4-bd6dcf2a854e")
    ICredentialProviderEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CredentialsChanged( 
            /* [in] */ UINT_PTR upAdviseContext) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICredentialProviderEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICredentialProviderEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICredentialProviderEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICredentialProviderEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *CredentialsChanged )( 
            __RPC__in ICredentialProviderEvents * This,
            /* [in] */ UINT_PTR upAdviseContext);
        
        END_INTERFACE
    } ICredentialProviderEventsVtbl;

    interface ICredentialProviderEvents
    {
        CONST_VTBL struct ICredentialProviderEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICredentialProviderEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICredentialProviderEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICredentialProviderEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICredentialProviderEvents_CredentialsChanged(This,upAdviseContext)	\
    ( (This)->lpVtbl -> CredentialsChanged(This,upAdviseContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICredentialProviderEvents_INTERFACE_DEFINED__ */


#ifndef __ICredentialProviderFilter_INTERFACE_DEFINED__
#define __ICredentialProviderFilter_INTERFACE_DEFINED__

/* interface ICredentialProviderFilter */
/* [uuid][ref][object][local] */ 


EXTERN_C const IID IID_ICredentialProviderFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5da53f9-d475-4080-a120-910c4a739880")
    ICredentialProviderFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Filter( 
            /* [in] */ CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus,
            /* [in] */ DWORD dwFlags,
            /* [size_is][in] */ GUID *rgclsidProviders,
            /* [size_is][out][in] */ BOOL *rgbAllow,
            /* [in] */ DWORD cProviders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateRemoteCredential( 
            /* [in] */ const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcsIn,
            /* [out] */ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcsOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICredentialProviderFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICredentialProviderFilter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICredentialProviderFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICredentialProviderFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *Filter )( 
            ICredentialProviderFilter * This,
            /* [in] */ CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus,
            /* [in] */ DWORD dwFlags,
            /* [size_is][in] */ GUID *rgclsidProviders,
            /* [size_is][out][in] */ BOOL *rgbAllow,
            /* [in] */ DWORD cProviders);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateRemoteCredential )( 
            ICredentialProviderFilter * This,
            /* [in] */ const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcsIn,
            /* [out] */ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcsOut);
        
        END_INTERFACE
    } ICredentialProviderFilterVtbl;

    interface ICredentialProviderFilter
    {
        CONST_VTBL struct ICredentialProviderFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICredentialProviderFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICredentialProviderFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICredentialProviderFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICredentialProviderFilter_Filter(This,cpus,dwFlags,rgclsidProviders,rgbAllow,cProviders)	\
    ( (This)->lpVtbl -> Filter(This,cpus,dwFlags,rgclsidProviders,rgbAllow,cProviders) ) 

#define ICredentialProviderFilter_UpdateRemoteCredential(This,pcpcsIn,pcpcsOut)	\
    ( (This)->lpVtbl -> UpdateRemoteCredential(This,pcpcsIn,pcpcsOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICredentialProviderFilter_INTERFACE_DEFINED__ */



#ifndef __CredentialProviders_LIBRARY_DEFINED__
#define __CredentialProviders_LIBRARY_DEFINED__

/* library CredentialProviders */
/* [uuid] */ 


EXTERN_C const IID LIBID_CredentialProviders;

EXTERN_C const CLSID CLSID_PasswordCredentialProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("6f45dc1e-5384-457a-bc13-2cd81b0d28ed")
PasswordCredentialProvider;
#endif

EXTERN_C const CLSID CLSID_NPCredentialProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("3dd6bec0-8193-4ffe-ae25-e08e39ea4063")
NPCredentialProvider;
#endif

EXTERN_C const CLSID CLSID_SmartcardCredentialProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("8bf9a910-a8ff-457f-999f-a5ca10b4a885")
SmartcardCredentialProvider;
#endif

EXTERN_C const CLSID CLSID_SmartcardPinProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("94596c7e-3744-41ce-893e-bbf09122f76a")
SmartcardPinProvider;
#endif

EXTERN_C const CLSID CLSID_GenericCredentialProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("25CBB996-92ED-457e-B28C-4774084BD562")
GenericCredentialProvider;
#endif

EXTERN_C const CLSID CLSID_RASProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("5537E283-B1E7-4EF8-9C6E-7AB0AFE5056D")
RASProvider;
#endif

EXTERN_C const CLSID CLSID_OnexCredentialProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("07AA0886-CC8D-4e19-A410-1C75AF686E62")
OnexCredentialProvider;
#endif

EXTERN_C const CLSID CLSID_OnexPlapSmartcardCredentialProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("33c86cd6-705f-4ba1-9adb-67070b837775")
OnexPlapSmartcardCredentialProvider;
#endif

EXTERN_C const CLSID CLSID_VaultProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("503739d0-4c5e-4cfd-b3ba-d881334f0df2")
VaultProvider;
#endif

EXTERN_C const CLSID CLSID_WinBioCredentialProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("AC3AC249-E820-4343-A65B-377AC634DC09")
WinBioCredentialProvider;
#endif
#endif /* __CredentialProviders_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



