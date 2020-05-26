

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for ndattrib.idl:
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


#ifndef __ndattrib_h__
#define __ndattrib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ndattrib_0000_0000 */
/* [local] */ 

//+--------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1992-2004.
//
//---------------------------------------------------------------------------
#if ( _MSC_VER >= 800 )
#pragma warning(disable:4201)
#endif
#define NDF_ERROR_START (0xF900)
//error code deprecated
#define NDF_E_LENGTH_EXCEEDED               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START)
//
// MessageId: NDF_E_NOHELPERCLASS
//
// MessageText:
//
// Helper Class parameter not specified to NdfCreateIncident API.
//
#define NDF_E_NOHELPERCLASS                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 1)
//error code deprecated
#define NDF_E_CANCELLED                     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 2)
//error code deprecated
#define NDF_E_DISABLED                      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 4)
//
// MessageId: NDF_E_BAD_PARAM
//
// MessageText:
//
// Inavlid parameter.
//
#define NDF_E_BAD_PARAM						MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 5)
//
// MessageId: NDF_E_VALIDATION
//
// MessageText:
//
// Diagnosis failed to resolve the problems.
//
#define NDF_E_VALIDATION					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 6)
//
// MessageId: NDF_E_UNKNOWN
//
// MessageText:
//
// Diagnostics session result is unkown, the diagnostics phase did not complete.
//
#define NDF_E_UNKNOWN                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 7)
//
// MessageId: NDF_E_PROBLEM_PRESENT
//
// MessageText:
//
// Diagnostics session finished with problems still present.
//
#define NDF_E_PROBLEM_PRESENT                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 8)
typedef /* [v1_enum] */ 
enum tagATTRIBUTE_TYPE
    {	AT_INVALID	= 0,
	AT_BOOLEAN	= ( AT_INVALID + 1 ) ,
	AT_INT8	= ( AT_BOOLEAN + 1 ) ,
	AT_UINT8	= ( AT_INT8 + 1 ) ,
	AT_INT16	= ( AT_UINT8 + 1 ) ,
	AT_UINT16	= ( AT_INT16 + 1 ) ,
	AT_INT32	= ( AT_UINT16 + 1 ) ,
	AT_UINT32	= ( AT_INT32 + 1 ) ,
	AT_INT64	= ( AT_UINT32 + 1 ) ,
	AT_UINT64	= ( AT_INT64 + 1 ) ,
	AT_STRING	= ( AT_UINT64 + 1 ) ,
	AT_GUID	= ( AT_STRING + 1 ) ,
	AT_LIFE_TIME	= ( AT_GUID + 1 ) ,
	AT_SOCKADDR	= ( AT_LIFE_TIME + 1 ) ,
	AT_OCTET_STRING	= ( AT_SOCKADDR + 1 ) 
    } 	ATTRIBUTE_TYPE;

typedef struct tagOCTET_STRING
    {
    DWORD dwLength;
    BYTE *lpValue;
    } 	OCTET_STRING;

typedef struct tagOCTET_STRING *POCTET_STRING;

typedef struct tagLIFE_TIME
    {
    FILETIME startTime;
    FILETIME endTime;
    } 	LIFE_TIME;

typedef struct tagLIFE_TIME *PLIFE_TIME;

typedef struct tagSOCK_ADDR
    {
    USHORT family;
    CHAR data[ 126 ];
    } 	DIAG_SOCKADDR;

typedef struct tagSOCK_ADDR *PDIAG_SOCK_ADDR;

typedef struct tagHELPER_ATTRIBUTE
    {
    LPWSTR pwszName;
    ATTRIBUTE_TYPE type;
    union 
        {
        BOOL Boolean;
        char Char;
        byte Byte;
        short Short;
        WORD Word;
        int Int;
        DWORD DWord;
        LONGLONG Int64;
        ULONGLONG UInt64;
        LPWSTR PWStr;
        GUID Guid;
        LIFE_TIME LifeTime;
        DIAG_SOCKADDR Address;
        OCTET_STRING OctetString;
        } 	;
    } 	HELPER_ATTRIBUTE;

typedef struct tagHELPER_ATTRIBUTE *PHELPER_ATTRIBUTE;

typedef /* [v1_enum] */ 
enum tagREPAIR_SCOPE
    {	RS_SYSTEM	= 0,
	RS_USER	= ( RS_SYSTEM + 1 ) ,
	RS_APPLICATION	= ( RS_USER + 1 ) ,
	RS_PROCESS	= ( RS_APPLICATION + 1 ) 
    } 	REPAIR_SCOPE;

typedef /* [v1_enum] */ enum tagREPAIR_SCOPE *PREPAIR_SCOPE;

typedef /* [public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_ndattrib_0000_0000_0002
    {	RR_NOROLLBACK	= 0,
	RR_ROLLBACK	= ( RR_NOROLLBACK + 1 ) ,
	RR_NORISK	= ( RR_ROLLBACK + 1 ) 
    } 	REPAIR_RISK;

typedef /* [public][public][public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_ndattrib_0000_0000_0003
    {	UIT_INVALID	= 0,
	UIT_NONE	= 1,
	UIT_SHELL_COMMAND	= ( UIT_NONE + 1 ) ,
	UIT_HELP_PANE	= ( UIT_SHELL_COMMAND + 1 ) ,
	UIT_DUI	= ( UIT_HELP_PANE + 1 ) 
    } 	UI_INFO_TYPE;

typedef struct tagShellCommandInfo
    {
    LPWSTR pwszOperation;
    LPWSTR pwszFile;
    LPWSTR pwszParameters;
    LPWSTR pwszDirectory;
    ULONG nShowCmd;
    } 	ShellCommandInfo;

typedef struct tagShellCommandInfo *PShellCommandInfo;

typedef struct tagUiInfo
    {
    UI_INFO_TYPE type;
    union 
        {
        LPWSTR pwzNull;
        ShellCommandInfo ShellInfo;
        LPWSTR pwzHelpUrl;
        LPWSTR pwzDui;
        } 	;
    } 	UiInfo;

typedef struct tagUiInfo *PUiInfo;

#define RF_WORKAROUND          0x20000000
#define RF_USER_ACTION         0x10000000
#define RF_USER_CONFIRMATION   0x8000000
#define RF_INFORMATION_ONLY    0x2000000
//RF_UI_ONLY is deprecated
#define RF_UI_ONLY             0x1000000
#define RF_SHOW_EVENTS         0x800000
#define RF_VALIDATE_HELPTOPIC  0x400000
#define RF_REPRO               0x200000
#define RF_CONTACT_ADMIN    	  0x20000
#define RF_RESERVED            0x40000000
#define RF_RESERVED_CA         0x80000000
#define RF_RESERVED_LNI        0x10000
typedef struct tagRepairInfo
    {
    GUID guid;
    LPWSTR pwszClassName;
    LPWSTR pwszDescription;
    DWORD sidType;
    long cost;
    ULONG flags;
    REPAIR_SCOPE scope;
    REPAIR_RISK risk;
    UiInfo UiInfo;
    int rootCauseIndex;
    } 	RepairInfo;

typedef struct tagRepairInfo *PRepairInfo;

typedef struct tagRepairInfoEx
    {
    RepairInfo repair;
    USHORT repairRank;
    } 	RepairInfoEx;

typedef struct tagRepairInfoEx *PRepairInfoEx;

#define RCF_ISLEAF         0x1
#define RCF_ISCONFIRMED    0x2
#define RCF_ISTHIRDPARTY   0x4
typedef struct tagRootCauseInfo
    {
    LPWSTR pwszDescription;
    GUID rootCauseID;
    DWORD rootCauseFlags;
    GUID networkInterfaceID;
    RepairInfoEx *pRepairs;
    USHORT repairCount;
    } 	RootCauseInfo;

typedef struct tagRootCauseInfo *PRootCauseInfo;

EXTERN_C HRESULT EncodeHelperAttribute(HELPER_ATTRIBUTE *attribute, BYTE **buf, size_t *bufSize);
EXTERN_C HRESULT DecodeHelperAttribute(BYTE *buf, size_t bufSize, HELPER_ATTRIBUTE *attribute);
EXTERN_C HRESULT EncodeRepairInfo(RepairInfo *info, BYTE **buf, size_t *bufSize);
EXTERN_C HRESULT DecodeRepairInfo(BYTE *buf, size_t bufSize, RepairInfo *info);
EXTERN_C HRESULT EncodeRepairInfoEx(RepairInfoEx *info, BYTE **buf, size_t *bufSize);
EXTERN_C HRESULT DecodeRepairInfoEx(BYTE *buf, size_t bufSize, RepairInfoEx *info);
EXTERN_C HRESULT EncodeRootCauseInfo(RootCauseInfo *info, BYTE **buf, size_t *bufSize);
EXTERN_C HRESULT DecodeRootCauseInfo(BYTE *buf, size_t bufSize, RootCauseInfo *info);
EXTERN_C GUID NetDiagModuleId;
EXTERN_C GUID NetDiagScenarioId;


extern RPC_IF_HANDLE __MIDL_itf_ndattrib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndattrib_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



