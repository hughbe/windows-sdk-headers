//---------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//---------------------------------------------------------------------------

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <Windows.UI.h>

#if !defined(____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__) && !defined(MIDL_NS_PREFIX)
#pragma push_macro("ABI")
#undef ABI
#define ABI
#endif

#if defined(__cplusplus)
STDAPI GetWindowIdFromWindow(_In_ HWND hwnd, _Out_ ::ABI::Windows::UI::WindowId* id);
STDAPI GetWindowFromWindowId(_In_ ::ABI::Windows::UI::WindowId id, _Out_ HWND* hwnd);
#else
typedef struct __x_ABI_CWindows_CUI_CWindowId __x_ABI_CWindows_CUI_CWindowId;
STDAPI GetWindowIdFromWindow(_In_ HWND hwnd, _Out_ __x_ABI_CWindows_CUI_CWindowId* id);
STDAPI GetWindowFromWindowId(_In_ __x_ABI_CWindows_CUI_CWindowId id, _Out_ HWND* hwnd);
#endif

#if !defined(____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__) && !defined(MIDL_NS_PREFIX)
#pragma pop_macro("ABI")
#endif
