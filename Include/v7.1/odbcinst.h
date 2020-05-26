//-----------------------------------------------------------------------------
// File:            odbcinst.h
//
// Copyright:       Copyright (c) Microsoft Corporation
//
// Contents:        Prototypes for ODBCCP32.DLL
//
// Comments:
//
//-----------------------------------------------------------------------------

#ifndef __ODBCINST_H
#define __ODBCINST_H

#ifndef __SQL
#include "sql.h"
#endif

#ifdef __cplusplus
extern "C" {                               // Assume C declarations for C++
#endif  // __cplusplus

#ifndef ODBCVER
#define ODBCVER 0x0380                     // Default to ODBC 3.80
#endif

#ifndef WINVER
#define  WINVER  0x0400                     // Assume Windows 4.0
#endif

// Constants ---------------------------------------------------------------
// SQLConfigDataSource request flags
#define  ODBC_ADD_DSN     1               // Add data source
#define  ODBC_CONFIG_DSN  2               // Configure (edit) data source
#define  ODBC_REMOVE_DSN  3               // Remove data source

#if (ODBCVER >= 0x0250)
#define  ODBC_ADD_SYS_DSN 4               // add a system DSN
#define  ODBC_CONFIG_SYS_DSN    5         // Configure a system DSN
#define  ODBC_REMOVE_SYS_DSN    6         // remove a system DSN
#if (ODBCVER >= 0x0300)
#define  ODBC_REMOVE_DEFAULT_DSN    7       // remove the default DSN
#endif  /* ODBCVER >= 0x0300 */

// install request flags
#define  ODBC_INSTALL_INQUIRY   1
#define  ODBC_INSTALL_COMPLETE  2

// config driver flags
#define  ODBC_INSTALL_DRIVER    1
#define  ODBC_REMOVE_DRIVER     2
#define  ODBC_CONFIG_DRIVER     3
#define  ODBC_CONFIG_DRIVER_MAX 100
#endif

// SQLGetConfigMode and SQLSetConfigMode flags
#if (ODBCVER >= 0x0300)
#define ODBC_BOTH_DSN       0
#define ODBC_USER_DSN       1
#define ODBC_SYSTEM_DSN     2
#endif  /* ODBCVER >= 0x0300 */

// SQLInstallerError code
#if (ODBCVER >= 0x0300)
#define ODBC_ERROR_GENERAL_ERR                   1
#define ODBC_ERROR_INVALID_BUFF_LEN              2
#define ODBC_ERROR_INVALID_HWND                  3
#define ODBC_ERROR_INVALID_STR                   4
#define ODBC_ERROR_INVALID_REQUEST_TYPE          5
#define ODBC_ERROR_COMPONENT_NOT_FOUND           6
#define ODBC_ERROR_INVALID_NAME                  7
#define ODBC_ERROR_INVALID_KEYWORD_VALUE         8
#define ODBC_ERROR_INVALID_DSN                   9
#define ODBC_ERROR_INVALID_INF                  10
#define ODBC_ERROR_REQUEST_FAILED               11
#define ODBC_ERROR_INVALID_PATH                 12
#define ODBC_ERROR_LOAD_LIB_FAILED              13
#define ODBC_ERROR_INVALID_PARAM_SEQUENCE       14
#define ODBC_ERROR_INVALID_LOG_FILE             15
#define ODBC_ERROR_USER_CANCELED                16
#define ODBC_ERROR_USAGE_UPDATE_FAILED          17
#define ODBC_ERROR_CREATE_DSN_FAILED            18
#define ODBC_ERROR_WRITING_SYSINFO_FAILED       19
#define ODBC_ERROR_REMOVE_DSN_FAILED            20
#define ODBC_ERROR_OUT_OF_MEM                   21
#define ODBC_ERROR_OUTPUT_STRING_TRUNCATED      22
#define ODBC_ERROR_NOTRANINFO                   23

#define ODBC_ERROR_MAX                          ODBC_ERROR_NOTRANINFO   // update this when we add new error message
#endif /* ODBCVER >= 0x0300 */

#ifndef EXPORT
#define EXPORT
#endif

#ifndef RC_INVOKED
// Prototypes --------------------------------------------------------------
#define INSTAPI __stdcall

// High level APIs
BOOL INSTAPI SQLInstallODBC          (HWND       hwndParent,
                                      LPCSTR     lpszInfFile,
                                      LPCSTR     lpszSrcPath,
                                      LPCSTR     lpszDrivers);
BOOL INSTAPI SQLManageDataSources    (HWND       hwndParent);
BOOL INSTAPI SQLCreateDataSource     (HWND       hwndParent,
                                      LPCSTR     lpszDSN);

__success(return)
BOOL INSTAPI SQLGetTranslator
(
    HWND    hwnd,
   __inout_ecount(cchNameMax) LPSTR lpszName,
   WORD     cchNameMax,
   WORD*    pcchNameOut,
   __out_ecount(cchPathMax) LPSTR lpszPath,
   WORD     cchPathMax,
   WORD*    pcchPathOut,
   DWORD*   pvOption
);

// Low level APIs
// NOTE: The high-level APIs should always be used. These APIs
//       have been left for compatibility.
__success(return)
BOOL INSTAPI SQLInstallDriver
(
    LPCSTR     lpszInfFile,
    LPCSTR     lpszDriver,
    __out_ecount_opt(cchPathMax) LPSTR lpszPath,
    WORD       cchPathMax,
    WORD*      pcchPathOut
);

BOOL INSTAPI SQLInstallDriverManager
(
    __inout_ecount(cchPathMax) LPSTR  lpszPath,
    WORD       cchPathMax,
    WORD*      pcchPathOut
);

__success(return)
BOOL INSTAPI SQLGetInstalledDrivers
(
    __out_ecount(cchBufMax) LPSTR lpszBuf,
    WORD  cchBufMax,
    WORD* pcchBufOut
);

__success(return)
BOOL INSTAPI SQLGetAvailableDrivers
(
    LPCSTR  lpszInfFile,
    __out_ecount(cchBufMax) LPSTR lpszBuf,
    WORD    cchBufMax,
    WORD*   pcchBufOut
);

BOOL INSTAPI SQLConfigDataSource     (HWND       hwndParent,
                                      WORD       fRequest,
                                      LPCSTR     lpszDriver,
                                      LPCSTR     lpszAttributes);
BOOL INSTAPI SQLRemoveDefaultDataSource(void);
BOOL INSTAPI SQLWriteDSNToIni        (LPCSTR     lpszDSN,
                                      LPCSTR     lpszDriver);
BOOL INSTAPI SQLRemoveDSNFromIni     (LPCSTR     lpszDSN);
BOOL INSTAPI SQLValidDSN             (LPCSTR     lpszDSN);

BOOL INSTAPI SQLWritePrivateProfileString(LPCSTR lpszSection,
                                         LPCSTR lpszEntry,
                                         LPCSTR lpszString,
                                         LPCSTR lpszFilename);

__success(return != 0)
int  INSTAPI SQLGetPrivateProfileString
(
    LPCSTR lpszSection,
    LPCSTR lpszEntry,
    LPCSTR lpszDefault,
    __out_ecount_opt(cchRetBuffer) LPSTR lpszRetBuffer,
    int    cchRetBuffer,
    LPCSTR lpszFilename
);

#if (ODBCVER >= 0x0250)
BOOL INSTAPI SQLRemoveDriverManager(LPDWORD lpdwUsageCount);

__success(return)
BOOL INSTAPI SQLInstallTranslator
(
    LPCSTR  lpszInfFile,
    LPCSTR  lpszTranslator,
    LPCSTR  lpszPathIn,
    __out_ecount(cchPathOutMax) LPSTR  lpszPathOut,
    WORD    cchPathOutMax,
    WORD*   pcchPathOut,
    WORD    fRequest,
    LPDWORD lpdwUsageCount
);

BOOL INSTAPI SQLRemoveTranslator(LPCSTR lpszTranslator,
                                 LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveDriver(LPCSTR lpszDriver,
                             BOOL fRemoveDSN,
                             LPDWORD lpdwUsageCount);

__success(return)
BOOL INSTAPI SQLConfigDriver
(
    HWND    hwndParent,
    WORD    fRequest,
    LPCSTR  lpszDriver,
    LPCSTR  lpszArgs,
    __out_ecount(cchMsgMax) LPSTR lpszMsg,
    WORD    cchMsgMax,
    WORD*   pcchMsgOut
);

#endif

#if (ODBCVER >=  0x0300)

__success(return==0 ||return==1)
SQLRETURN INSTAPI SQLInstallerError
(
    WORD    iError,
    DWORD*  pfErrorCode,
    __out_ecount_opt(cchErrorMsgMax) LPSTR lpszErrorMsg,
    WORD    cchErrorMsgMax,
    WORD*   pcchErrorMsg
);

SQLRETURN INSTAPI SQLPostInstallerError(DWORD dwErrorCode, LPCSTR lpszErrMsg);

BOOL INSTAPI SQLWriteFileDSN(LPCSTR  lpszFileName,
                             LPCSTR  lpszAppName,
                             LPCSTR  lpszKeyName,
                             LPCSTR  lpszString);


__success(return)
BOOL INSTAPI  SQLReadFileDSN
(
    LPCSTR  lpszFileName,
    LPCSTR  lpszAppName,
    LPCSTR  lpszKeyName,
    __out_ecount(cchString) LPSTR lpszString,
    WORD    cchString,
    WORD*   pcchString
);

__success(return)
BOOL INSTAPI SQLInstallDriverEx
(
    LPCSTR      lpszDriver,
    LPCSTR      lpszPathIn,
    __out_ecount(cchPathOutMax) LPSTR lpszPathOut,
    WORD        cchPathOutMax,
    WORD*       pcchPathOut,
    WORD        fRequest,
    LPDWORD     lpdwUsageCount
);

__success(return)
BOOL INSTAPI SQLInstallTranslatorEx
(
    LPCSTR  lpszTranslator,
    LPCSTR  lpszPathIn,
    __out_ecount(cchPathOutMax) LPSTR  lpszPathOut,
    WORD    cchPathOutMax,
    WORD*   pcchPathOut,
    WORD    fRequest,
    LPDWORD lpdwUsageCount
);

BOOL INSTAPI SQLGetConfigMode(UWORD *pwConfigMode);
BOOL INSTAPI SQLSetConfigMode(UWORD wConfigMode);
#endif /* ODBCVER >= 0x0300 */

//  Driver specific Setup APIs called by installer

BOOL INSTAPI ConfigDSN (HWND    hwndParent,
                        WORD    fRequest,
                        LPCSTR  lpszDriver,
                        LPCSTR  lpszAttributes);

BOOL INSTAPI ConfigTranslator ( HWND        hwndParent,
                                DWORD       *pvOption);

#if (ODBCVER >= 0x0250)

BOOL INSTAPI ConfigDriver
(
    HWND    hwndParent,
    WORD    fRequest,
    LPCSTR  lpszDriver,
    LPCSTR  lpszArgs,
    __out_ecount(cchMsgMax) LPSTR  lpszMsg,
    WORD    cchMsgMax,
    WORD*   pcchMsgOut
);

#endif


// UNICODE APIs

// High level APIs
BOOL INSTAPI SQLInstallODBCW          (HWND       hwndParent,
                                      LPCWSTR     lpszInfFile,
                                      LPCWSTR     lpszSrcPath,
                                      LPCWSTR     lpszDrivers);
BOOL INSTAPI SQLCreateDataSourceW     (HWND       hwndParent,
                                      LPCWSTR     lpszDSN);
__success(return)
BOOL INSTAPI SQLGetTranslatorW
(
    HWND    hwnd,
   __out_ecount(cchNameMax) LPWSTR lpszName,
   WORD     cchNameMax,
   WORD*    pcchNameOut,
   __out_ecount(cchPathMax) LPWSTR lpszPath,
   WORD     cchPathMax,
   WORD*    pcchPathOut,
   DWORD*   pvOption
);

// Low level APIs
// NOTE: The high-level APIs should always be used. These APIs
//       have been left for compatibility.

__success(return)
BOOL INSTAPI SQLInstallDriverW
(
    LPCWSTR     lpszInfFile,
    LPCWSTR     lpszDriver,
    __out_ecount(cchPathMax) LPWSTR lpszPath,
    WORD       cchPathMax,
    WORD*      pcchPathOut
);

BOOL INSTAPI SQLInstallDriverManagerW
(
    __inout_ecount(cchPathMax) LPWSTR lpszPath,
    WORD       cchPathMax,
    WORD*      pcchPathOut
);

__success(return)
BOOL INSTAPI SQLGetInstalledDriversW
(
    __out_ecount(cchBufMax) LPWSTR lpszBuf,
    WORD  cchBufMax,
    WORD* pcchBufOut
);

__success(return)
BOOL INSTAPI SQLGetAvailableDriversW
(
    LPCWSTR  lpszInfFile,
    __out_ecount_opt(cchBufMax) LPWSTR lpszBuf,
    WORD    cchBufMax,
    WORD*   pcchBufOut
);


BOOL INSTAPI SQLConfigDataSourceW     (HWND       hwndParent,
                                      WORD       fRequest,
                                      LPCWSTR     lpszDriver,
                                      LPCWSTR     lpszAttributes);
BOOL INSTAPI SQLWriteDSNToIniW        (LPCWSTR     lpszDSN,
                                      LPCWSTR     lpszDriver);
BOOL INSTAPI SQLRemoveDSNFromIniW     (LPCWSTR     lpszDSN);
BOOL INSTAPI SQLValidDSNW             (LPCWSTR     lpszDSN);

BOOL INSTAPI SQLWritePrivateProfileStringW(LPCWSTR lpszSection,
                                         LPCWSTR lpszEntry,
                                         LPCWSTR lpszString,
                                         LPCWSTR lpszFilename);

__success(return != 0)
int  INSTAPI SQLGetPrivateProfileStringW
(
    LPCWSTR lpszSection,
    LPCWSTR lpszEntry,
    LPCWSTR lpszDefault,
    __out_ecount_opt(cchRetBuffer) LPWSTR lpszRetBuffer,
    int     cchRetBuffer,
    LPCWSTR lpszFilename
);

#if (ODBCVER >= 0x0250)

__success(return)
BOOL INSTAPI SQLInstallTranslatorW
(
    LPCWSTR  lpszInfFile,
    LPCWSTR  lpszTranslator,
    LPCWSTR  lpszPathIn,
    __out_ecount(cchPathOutMax) LPWSTR  lpszPathOut,
    WORD     cchPathOutMax,
    WORD*    pcchPathOut,
    WORD     fRequest,
    LPDWORD  lpdwUsageCount
);

BOOL INSTAPI SQLRemoveTranslatorW(LPCWSTR lpszTranslator,
                                 LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveDriverW(LPCWSTR lpszDriver,
                             BOOL fRemoveDSN,
                             LPDWORD lpdwUsageCount);

__success(return)
BOOL INSTAPI SQLConfigDriverW
(
    HWND    hwndParent,
    WORD    fRequest,
    LPCWSTR lpszDriver,
    LPCWSTR lpszArgs,
    __out_ecount(cchMsgMax) LPWSTR lpszMsg,
    WORD    cchMsgMax,
    WORD*   pcchMsgOut
);

#endif

#if (ODBCVER >= 0x0300)

__success(return==0 ||return==1)
SQLRETURN INSTAPI SQLInstallerErrorW
(
    WORD    iError,
    DWORD*  pfErrorCode,
    __out_ecount_opt(cchErrorMsgMax) LPWSTR lpszErrorMsg,
    WORD    cchErrorMsgMax,
    WORD*   pcchErrorMsg
);

SQLRETURN INSTAPI   SQLPostInstallerErrorW(DWORD dwErrorCode,
                            LPCWSTR lpszErrorMsg);

BOOL INSTAPI SQLWriteFileDSNW(LPCWSTR  lpszFileName,
                              LPCWSTR  lpszAppName,
                              LPCWSTR  lpszKeyName,
                              LPCWSTR  lpszString);


__success(return)
BOOL INSTAPI  SQLReadFileDSNW
(
    LPCWSTR  lpszFileName,
    LPCWSTR  lpszAppName,
    LPCWSTR  lpszKeyName,
    __out_ecount(cchString) LPWSTR lpszString,
    WORD    cchString,
    WORD*   pcchString
);

__success(return)
BOOL INSTAPI SQLInstallDriverExW
(
    LPCWSTR     lpszDriver,
    LPCWSTR     lpszPathIn,
    __out_ecount(cchPathOutMax) LPWSTR lpszPathOut,
    WORD        cchPathOutMax,
    WORD*       pcchPathOut,
    WORD        fRequest,
    LPDWORD     lpdwUsageCount
);

__success(return)
BOOL INSTAPI SQLInstallTranslatorExW
(
    LPCWSTR  lpszTranslator,
    LPCWSTR  lpszPathIn,
    __out_ecount(cchPathOutMax) LPWSTR  lpszPathOut,
    WORD     cchPathOutMax,
    WORD*    pcchPathOut,
    WORD     fRequest,
    LPDWORD  lpdwUsageCount
);

#endif  /* ODBCVER >= 0x0300 */

//  Driver specific Setup APIs called by installer

BOOL INSTAPI ConfigDSNW (HWND   hwndParent,
                        WORD    fRequest,
                        LPCWSTR lpszDriver,
                        LPCWSTR lpszAttributes);


#if (ODBCVER >= 0x0250)


BOOL INSTAPI ConfigDriverW
(
    HWND    hwndParent,
    WORD    fRequest,
    LPCWSTR  lpszDriver,
    LPCWSTR  lpszArgs,
    __out_ecount(cchMsgMax) LPWSTR  lpszMsg,
    WORD    cchMsgMax,
    WORD*   pcchMsgOut
);

#endif

#ifndef SQL_NOUNICODEMAP    // define this to disable the mapping
#ifdef  UNICODE


#define  SQLInstallODBC                 SQLInstallODBCW
#define  SQLCreateDataSource            SQLCreateDataSourceW
#define  SQLGetTranslator               SQLGetTranslatorW
#define  SQLInstallDriver               SQLInstallDriverW
#define  SQLInstallDriverManager        SQLInstallDriverManagerW
#define  SQLGetInstalledDrivers         SQLGetInstalledDriversW
#define  SQLGetAvailableDrivers         SQLGetAvailableDriversW
#define  SQLConfigDataSource            SQLConfigDataSourceW
#define  SQLWriteDSNToIni               SQLWriteDSNToIniW
#define  SQLRemoveDSNFromIni            SQLRemoveDSNFromIniW
#define  SQLValidDSN                    SQLValidDSNW
#define  SQLWritePrivateProfileString   SQLWritePrivateProfileStringW
#define  SQLGetPrivateProfileString     SQLGetPrivateProfileStringW
#define  SQLInstallTranslator           SQLInstallTranslatorW
#define  SQLRemoveTranslator            SQLRemoveTranslatorW
#define  SQLRemoveDriver                SQLRemoveDriverW
#define  SQLConfigDriver                SQLConfigDriverW
#define  SQLInstallerError              SQLInstallerErrorW
#define  SQLPostInstallerError          SQLPostInstallerErrorW
#define  SQLReadFileDSN                 SQLReadFileDSNW
#define  SQLWriteFileDSN                SQLWriteFileDSNW
#define  SQLInstallDriverEx             SQLInstallDriverExW
#define  SQLInstallTranslatorEx         SQLInstallTranslatorExW

#endif // UNICODE
#endif // SQL_NOUNICODEMAP

#endif // RC_INVOKED

#ifdef __cplusplus
}                                    // End of extern "C" {
#endif  // __cplusplus

#endif // __ODBCINST_H

