//+---------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 2004.
//
//  File:       credssp.hxx
//
//  Contents:  Public CredSSP Security Package structures.
//
//----------------------------------------------------------------------------

#ifndef __CREDSSP_H__
#define __CREDSSP_H__
#if _MSC_VER > 1000
#pragma once
#endif
   
#ifdef __cplusplus
extern "C" {
#endif

#define CREDSSP_NAME L"CREDSSP"
#define TS_SSP_NAME_A "TSSSP"
#define TS_SSP_NAME  L"TSSSP"

#define szOID_TS_KP_TS_SERVER_AUTH "1.3.6.1.4.1.311.54.1.2"

typedef struct _SecPkgContext_ClientCreds
{
    ULONG       AuthBufferLen;
    PUCHAR      AuthBuffer;
} SecPkgContext_ClientCreds, *PSecPkgContext_ClientCreds;

#define CREDSSP_SERVER_AUTH_NEGOTIATE   0x1
#define CREDSSP_SERVER_AUTH_CERTIFICATE 0x2

#define SECPKG_ALT_ATTR                 0x80000000UL
#define SECPKG_ATTR_CREDS               0x80000080UL
#define SECPKG_ATTR_NEGOTIATION_PACKAGE 0x80000081UL
#define SECPKG_ATTR_C_ACCESS_TOKEN      (SECPKG_ATTR_ACCESS_TOKEN | SECPKG_ALT_ATTR)
#define SECPKG_ATTR_C_FULL_ACCESS_TOKEN 0x80000082UL
#define SECPKG_ATTR_SERVER_AUTH_FLAGS   0x80000083UL
#define SECPKG_ATTR_CERT_TRUST_STATUS   0x80000084UL


typedef enum _CREDSSP_SUBMIT_TYPE {
    CredsspPasswordCreds = 2,
    CredsspSchannelCreds = 4,
    CredsspCertificateCreds = 13,
    CredsspSubmitBufferBoth = 50,
    CredsspSubmitBufferBothOld = 51
} CREDSPP_SUBMIT_TYPE;

typedef struct _CREDSSP_CRED {
    CREDSPP_SUBMIT_TYPE Type;
    PVOID pSchannelCred;
    PVOID pSpnegoCred;
} CREDSSP_CRED, *PCREDSSP_CRED;

#ifdef SECURITY_KERNEL
PSecurityFunctionTableW
SEC_ENTRY
SpInitSecurityInterfaceW(VOID);
#endif

#ifdef __cplusplus
}  // extern "C"
#endif

#endif //__CREDSSP_H__

