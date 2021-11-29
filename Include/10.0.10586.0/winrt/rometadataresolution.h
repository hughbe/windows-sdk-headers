//+---------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//----------------------------------------------------------------------------

#pragma once

#include <cor.h>

#if (NTDDI_VERSION >= NTDDI_WIN8)
_Check_return_ extern "C" HRESULT WINAPI RoGetMetaDataFile(
    _In_ const HSTRING name,
    _In_opt_ IMetaDataDispenserEx *metaDataDispenser,
    _Out_opt_ HSTRING *metaDataFilePath,
    _Outptr_opt_ IMetaDataImport2 **metaDataImport,
    _Out_opt_ mdTypeDef *typeDefToken);

_When_(return == S_OK, _At_(typeNameParts, _Outptr_result_buffer_(*partsCount)));
_When_(return != S_OK, _At_(typeNameParts, _Outptr_))
_Check_return_  extern "C" HRESULT WINAPI RoParseTypeName(
    _In_ HSTRING typeName,
    _Out_ DWORD *partsCount,
    HSTRING **typeNameParts);

_Check_return_ extern "C" HRESULT WINAPI RoResolveNamespace(
    _In_opt_ const HSTRING name,
    _In_opt_ const HSTRING windowsMetaDataDir,
    _In_ const DWORD packageGraphDirsCount,
    _In_reads_opt_(packageGraphDirsCount) const HSTRING *packageGraphDirs,
    _Out_opt_ DWORD *metaDataFilePathsCount,
    _Outptr_opt_result_buffer_(*metaDataFilePathsCount) HSTRING **metaDataFilePaths,
    _Out_opt_ DWORD *subNamespacesCount,
    _Outptr_opt_result_buffer_(*subNamespacesCount) HSTRING **subNamespaces);
#endif

