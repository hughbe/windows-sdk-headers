 
// begin_1_0
// begin_1_1
/********************************************************************************
*                                                                               *
* libloaderapi.h -- ApiSet Contract for api-ms-win-core-libraryloader-l1        *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _APISETLIBLOADER_
#define _APISETLIBLOADER_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-libraryloader-l1 */

#ifndef _APISET_LIBLOADER_VER
#ifdef _APISET_MINWIN_VERSION
#if _APISET_MINWIN_VERSION >= 0x0101
#define _APISET_LIBLOADER_VER 0x0101
#elif _APISET_MINWIN_VERSION <= 0x0100
#define _APISET_LIBLOADER_VER 0x0100
#endif
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define  FIND_RESOURCE_DIRECTORY_TYPES       (0x0100)
#define  FIND_RESOURCE_DIRECTORY_NAMES       (0x0200)
#define  FIND_RESOURCE_DIRECTORY_LANGUAGES   (0x0400)

#define  RESOURCE_ENUM_LN               (0x0001)
#define  RESOURCE_ENUM_MUI              (0x0002)
#define  RESOURCE_ENUM_MUI_SYSTEM       (0x0004)
#define  RESOURCE_ENUM_VALIDATE         (0x0008)
#define  RESOURCE_ENUM_MODULE_EXACT     (0x0010)

#define SUPPORT_LANG_NUMBER  32

typedef struct tagENUMUILANG{
    ULONG  NumOfEnumUILang;   // Acutall number of enumerated languages
    ULONG  SizeOfEnumUIBuffer;     // Buffer size of pMUIEnumUILanguages
    LANGID *pEnumUIBuffer;   //
}ENUMUILANG, *PENUMUILANG;

#ifdef STRICT
typedef BOOL (CALLBACK* ENUMRESLANGPROCA)(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpType,
    _In_ LPCSTR lpName,
    _In_ WORD wLanguage,
    _In_ LONG_PTR lParam);
typedef BOOL (CALLBACK* ENUMRESLANGPROCW)(
    _In_opt_ HMODULE hModule,
    _In_ LPCWSTR lpType,
    _In_ LPCWSTR lpName,
    _In_ WORD wLanguage,
    _In_ LONG_PTR lParam);
#ifdef UNICODE
#define ENUMRESLANGPROC  ENUMRESLANGPROCW
#else
#define ENUMRESLANGPROC  ENUMRESLANGPROCA
#endif // !UNICODE

typedef BOOL (CALLBACK* ENUMRESNAMEPROCA)(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpType,
    _In_ LPSTR lpName,
    _In_ LONG_PTR lParam);
typedef BOOL (CALLBACK* ENUMRESNAMEPROCW)(
    _In_opt_ HMODULE hModule,
    _In_ LPCWSTR lpType,
    _In_ LPWSTR lpName,
    _In_ LONG_PTR lParam);
#ifdef UNICODE
#define ENUMRESNAMEPROC  ENUMRESNAMEPROCW
#else
#define ENUMRESNAMEPROC  ENUMRESNAMEPROCA
#endif // !UNICODE

typedef BOOL (CALLBACK* ENUMRESTYPEPROCA)(
    _In_opt_ HMODULE hModule,
    _In_ LPSTR lpType,
    _In_ LONG_PTR lParam
    );
typedef BOOL (CALLBACK* ENUMRESTYPEPROCW)(
    _In_opt_ HMODULE hModule,
    _In_ LPWSTR lpType,
    _In_ LONG_PTR lParam
    );
#ifdef UNICODE
#define ENUMRESTYPEPROC  ENUMRESTYPEPROCW
#else
#define ENUMRESTYPEPROC  ENUMRESTYPEPROCA
#endif // !UNICODE
#else
typedef FARPROC ENUMRESTYPEPROCA;
typedef FARPROC ENUMRESTYPEPROCW;
#ifdef UNICODE
typedef ENUMRESTYPEPROCW ENUMRESTYPEPROC;
#else
typedef ENUMRESTYPEPROCA ENUMRESTYPEPROC;
#endif // UNICODE
typedef FARPROC ENUMRESNAMEPROCA;
typedef FARPROC ENUMRESNAMEPROCW;
#ifdef UNICODE
typedef ENUMRESNAMEPROCW ENUMRESNAMEPROC;
#else
typedef ENUMRESNAMEPROCA ENUMRESNAMEPROC;
#endif // UNICODE
typedef FARPROC ENUMRESLANGPROCA;
typedef FARPROC ENUMRESLANGPROCW;
#ifdef UNICODE
typedef ENUMRESLANGPROCW ENUMRESLANGPROC;
#else
typedef ENUMRESLANGPROCA ENUMRESLANGPROC;
#endif // UNICODE
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

// end_1_0
// end_1_1

// begin_1_0

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

WINBASEAPI
BOOL
WINAPI
DisableThreadLibraryCalls(
    _In_ HMODULE hLibModule
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINBASEAPI
_Ret_maybenull_
HRSRC
WINAPI
FindResourceExW(
    _In_opt_ HMODULE hModule,
    _In_ LPCWSTR lpType,
    _In_ LPCWSTR lpName,
    _In_ WORD wLanguage
    );


#ifdef UNICODE
#define FindResourceEx  FindResourceExW
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


#if (WINVER >= _WIN32_WINNT_WIN7)

WINBASEAPI
int
WINAPI
FindStringOrdinal(
    _In_ DWORD dwFindStringOrdinalFlags,
    _In_reads_(cchSource) LPCWSTR lpStringSource,
    _In_ int cchSource,
    _In_reads_(cchValue) LPCWSTR lpStringValue,
    _In_ int cchValue,
    _In_ BOOL bIgnoreCase
    );

    
#endif //(WINVER >= _WIN32_WINNT_WIN7)

WINBASEAPI
BOOL
WINAPI
FreeLibrary(
    _In_ HMODULE hLibModule
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINBASEAPI
DECLSPEC_NORETURN
VOID
WINAPI
FreeLibraryAndExitThread(
    _In_ HMODULE hLibModule,
    _In_ DWORD dwExitCode
    );


WINBASEAPI
BOOL
WINAPI
FreeResource(
    _In_ HGLOBAL hResData
    );


WINBASEAPI
_Success_(return != 0)
_Ret_range_(1, nSize)
DWORD
WINAPI
GetModuleFileNameA(
    _In_opt_ HMODULE hModule,
    _Out_writes_to_(nSize, ((return < nSize) ? (return + 1) : nSize)) LPSTR lpFilename,
    _In_ DWORD nSize
    );

WINBASEAPI
_Success_(return != 0)
_Ret_range_(1, nSize)
DWORD
WINAPI
GetModuleFileNameW(
    _In_opt_ HMODULE hModule,
    _Out_writes_to_(nSize, ((return < nSize) ? (return + 1) : nSize)) LPWSTR lpFilename,
    _In_ DWORD nSize
    );

#ifdef UNICODE
#define GetModuleFileName  GetModuleFileNameW
#else
#define GetModuleFileName  GetModuleFileNameA
#endif // !UNICODE

WINBASEAPI
_When_(lpModuleName == NULL, _Ret_notnull_)
_When_(lpModuleName != NULL, _Ret_maybenull_)
HMODULE
WINAPI
GetModuleHandleA(
    _In_opt_ LPCSTR lpModuleName
    );

WINBASEAPI
_When_(lpModuleName == NULL, _Ret_notnull_)
_When_(lpModuleName != NULL, _Ret_maybenull_)
HMODULE
WINAPI
GetModuleHandleW(
    _In_opt_ LPCWSTR lpModuleName
    );

#ifdef UNICODE
#define GetModuleHandle  GetModuleHandleW
#else
#define GetModuleHandle  GetModuleHandleA
#endif // !UNICODE


#if !defined(RC_INVOKED)

#define GET_MODULE_HANDLE_EX_FLAG_PIN                 (0x00000001)
#define GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT  (0x00000002)
#define GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS        (0x00000004)

typedef
BOOL
(WINAPI*
PGET_MODULE_HANDLE_EXA)(
    _In_        DWORD        dwFlags,
    _In_opt_    LPCSTR     lpModuleName,
    _Outptr_ HMODULE*    phModule
    );
typedef
BOOL
(WINAPI*
PGET_MODULE_HANDLE_EXW)(
    _In_        DWORD        dwFlags,
    _In_opt_    LPCWSTR     lpModuleName,
    _Outptr_ HMODULE*    phModule
    );
#ifdef UNICODE
#define PGET_MODULE_HANDLE_EX  PGET_MODULE_HANDLE_EXW
#else
#define PGET_MODULE_HANDLE_EX  PGET_MODULE_HANDLE_EXA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
GetModuleHandleExA(
    _In_ DWORD dwFlags,
    _In_opt_ LPCSTR lpModuleName,
    _Out_ HMODULE * phModule
    );

WINBASEAPI
BOOL
WINAPI
GetModuleHandleExW(
    _In_ DWORD dwFlags,
    _In_opt_ LPCWSTR lpModuleName,
    _Out_ HMODULE * phModule
    );

#ifdef UNICODE
#define GetModuleHandleEx  GetModuleHandleExW
#else
#define GetModuleHandleEx  GetModuleHandleExA
#endif // !UNICODE

#endif

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

WINBASEAPI
FARPROC
WINAPI
GetProcAddress(
    _In_ HMODULE hModule,
    _In_ LPCSTR lpProcName
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINBASEAPI
_Ret_maybenull_
HMODULE
WINAPI
LoadLibraryExA(
    _In_ LPCSTR lpLibFileName,
    _Reserved_ HANDLE hFile,
    _In_ DWORD dwFlags
    );

WINBASEAPI
_Ret_maybenull_
HMODULE
WINAPI
LoadLibraryExW(
    _In_ LPCWSTR lpLibFileName,
    _Reserved_ HANDLE hFile,
    _In_ DWORD dwFlags
    );

#ifdef UNICODE
#define LoadLibraryEx  LoadLibraryExW
#else
#define LoadLibraryEx  LoadLibraryExA
#endif // !UNICODE

#define DONT_RESOLVE_DLL_REFERENCES         0x00000001
#define LOAD_LIBRARY_AS_DATAFILE            0x00000002
// reserved for internal LOAD_PACKAGED_LIBRARY: 0x00000004
#define LOAD_WITH_ALTERED_SEARCH_PATH       0x00000008
#define LOAD_IGNORE_CODE_AUTHZ_LEVEL        0x00000010
#define LOAD_LIBRARY_AS_IMAGE_RESOURCE      0x00000020
#define LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE  0x00000040
#define LOAD_LIBRARY_REQUIRE_SIGNED_TARGET  0x00000080
#define LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR    0x00000100
#define LOAD_LIBRARY_SEARCH_APPLICATION_DIR 0x00000200
#define LOAD_LIBRARY_SEARCH_USER_DIRS       0x00000400
#define LOAD_LIBRARY_SEARCH_SYSTEM32        0x00000800
#define LOAD_LIBRARY_SEARCH_DEFAULT_DIRS    0x00001000

WINBASEAPI
_Ret_maybenull_
HGLOBAL
WINAPI
LoadResource(
    _In_opt_ HMODULE hModule,
    _In_ HRSRC hResInfo
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

// end_1_0

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINUSERAPI
int
WINAPI
LoadStringA(
    _In_opt_ HINSTANCE hInstance,
    _In_ UINT uID,
    _Out_writes_to_(cchBufferMax, return + 1) LPSTR lpBuffer,
    _In_ int cchBufferMax
    );

WINUSERAPI
int
WINAPI
LoadStringW(
    _In_opt_ HINSTANCE hInstance,
    _In_ UINT uID,
    _Out_writes_to_(cchBufferMax, return + 1) LPWSTR lpBuffer,
    _In_ int cchBufferMax
    );

#ifdef UNICODE
#define LoadString  LoadStringW
#else
#define LoadString  LoadStringA
#endif // !UNICODE

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

// begin_1_0

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINBASEAPI
LPVOID
WINAPI
LockResource(
    _In_ HGLOBAL hResData
    );


WINBASEAPI
DWORD
WINAPI
SizeofResource(
    _In_opt_ HMODULE hModule,
    _In_ HRSRC hResInfo
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

// end_1_0

// begin_1_1


#if ((!defined(_CONTRACT_GEN) && (_WIN32_WINNT >= 0x0600)) || (_APISET_LIBLOADER_VER > 0x0100))

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINBASEAPI
BOOL
APIENTRY
EnumResourceLanguagesExA(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpType,
    _In_ LPCSTR lpName,
    _In_ ENUMRESLANGPROCA lpEnumFunc,
    _In_opt_ LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

WINBASEAPI
BOOL
APIENTRY
EnumResourceLanguagesExW(
    _In_opt_ HMODULE hModule,
    _In_ LPCWSTR lpType,
    _In_ LPCWSTR lpName,
    _In_ ENUMRESLANGPROCW lpEnumFunc,
    _In_opt_ LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

#ifdef UNICODE
#define EnumResourceLanguagesEx  EnumResourceLanguagesExW
#else
#define EnumResourceLanguagesEx  EnumResourceLanguagesExA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
EnumResourceNamesExA(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpType,
    _In_ ENUMRESNAMEPROCA lpEnumFunc,
    _In_ LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

WINBASEAPI
BOOL
WINAPI
EnumResourceNamesExW(
    _In_opt_ HMODULE hModule,
    _In_ LPCWSTR lpType,
    _In_ ENUMRESNAMEPROCW lpEnumFunc,
    _In_ LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

#ifdef UNICODE
#define EnumResourceNamesEx  EnumResourceNamesExW
#else
#define EnumResourceNamesEx  EnumResourceNamesExA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
EnumResourceTypesExA(
    _In_opt_ HMODULE hModule,
    _In_ ENUMRESTYPEPROCA lpEnumFunc,
    _In_ LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

WINBASEAPI
BOOL
WINAPI
EnumResourceTypesExW(
    _In_opt_ HMODULE hModule,
    _In_ ENUMRESTYPEPROCW lpEnumFunc,
    _In_ LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

#ifdef UNICODE
#define EnumResourceTypesEx  EnumResourceTypesExW
#else
#define EnumResourceTypesEx  EnumResourceTypesExA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
QueryOptionalDelayLoadedAPI(
    _In_ HMODULE CallerModule,
    _In_ LPCSTR lpDllName,
    _In_ LPCSTR lpProcName,
    _Reserved_ DWORD Reserved
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

#endif

// end_1_1

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef PVOID DLL_DIRECTORY_COOKIE, *PDLL_DIRECTORY_COOKIE;

WINBASEAPI
DLL_DIRECTORY_COOKIE
WINAPI
AddDllDirectory(
    _In_ PCWSTR NewDirectory
    );


WINBASEAPI
BOOL
WINAPI
RemoveDllDirectory(
    _In_ DLL_DIRECTORY_COOKIE Cookie
    );


WINBASEAPI
BOOL
WINAPI
SetDefaultDllDirectories(
    _In_ DWORD DirectoryFlags
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

// begin_1_0
// begin_1_1

#ifdef __cplusplus
}
#endif

#endif // _APISETLIBLOADER_

// end_1_0
// end_1_1
