

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for uiautomationclient.idl:
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
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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


#ifndef __uiautomationclient_h__
#define __uiautomationclient_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUIAutomationElement_FWD_DEFINED__
#define __IUIAutomationElement_FWD_DEFINED__
typedef interface IUIAutomationElement IUIAutomationElement;
#endif 	/* __IUIAutomationElement_FWD_DEFINED__ */


#ifndef __IUIAutomationElementArray_FWD_DEFINED__
#define __IUIAutomationElementArray_FWD_DEFINED__
typedef interface IUIAutomationElementArray IUIAutomationElementArray;
#endif 	/* __IUIAutomationElementArray_FWD_DEFINED__ */


#ifndef __IUIAutomationCondition_FWD_DEFINED__
#define __IUIAutomationCondition_FWD_DEFINED__
typedef interface IUIAutomationCondition IUIAutomationCondition;
#endif 	/* __IUIAutomationCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationBoolCondition_FWD_DEFINED__
#define __IUIAutomationBoolCondition_FWD_DEFINED__
typedef interface IUIAutomationBoolCondition IUIAutomationBoolCondition;
#endif 	/* __IUIAutomationBoolCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationPropertyCondition_FWD_DEFINED__
#define __IUIAutomationPropertyCondition_FWD_DEFINED__
typedef interface IUIAutomationPropertyCondition IUIAutomationPropertyCondition;
#endif 	/* __IUIAutomationPropertyCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationAndCondition_FWD_DEFINED__
#define __IUIAutomationAndCondition_FWD_DEFINED__
typedef interface IUIAutomationAndCondition IUIAutomationAndCondition;
#endif 	/* __IUIAutomationAndCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationOrCondition_FWD_DEFINED__
#define __IUIAutomationOrCondition_FWD_DEFINED__
typedef interface IUIAutomationOrCondition IUIAutomationOrCondition;
#endif 	/* __IUIAutomationOrCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationNotCondition_FWD_DEFINED__
#define __IUIAutomationNotCondition_FWD_DEFINED__
typedef interface IUIAutomationNotCondition IUIAutomationNotCondition;
#endif 	/* __IUIAutomationNotCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationCacheRequest_FWD_DEFINED__
#define __IUIAutomationCacheRequest_FWD_DEFINED__
typedef interface IUIAutomationCacheRequest IUIAutomationCacheRequest;
#endif 	/* __IUIAutomationCacheRequest_FWD_DEFINED__ */


#ifndef __IUIAutomationTreeWalker_FWD_DEFINED__
#define __IUIAutomationTreeWalker_FWD_DEFINED__
typedef interface IUIAutomationTreeWalker IUIAutomationTreeWalker;
#endif 	/* __IUIAutomationTreeWalker_FWD_DEFINED__ */


#ifndef __IUIAutomationEventHandler_FWD_DEFINED__
#define __IUIAutomationEventHandler_FWD_DEFINED__
typedef interface IUIAutomationEventHandler IUIAutomationEventHandler;
#endif 	/* __IUIAutomationEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationPropertyChangedEventHandler IUIAutomationPropertyChangedEventHandler;
#endif 	/* __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationStructureChangedEventHandler IUIAutomationStructureChangedEventHandler;
#endif 	/* __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationFocusChangedEventHandler IUIAutomationFocusChangedEventHandler;
#endif 	/* __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationInvokePattern_FWD_DEFINED__
#define __IUIAutomationInvokePattern_FWD_DEFINED__
typedef interface IUIAutomationInvokePattern IUIAutomationInvokePattern;
#endif 	/* __IUIAutomationInvokePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationDockPattern_FWD_DEFINED__
#define __IUIAutomationDockPattern_FWD_DEFINED__
typedef interface IUIAutomationDockPattern IUIAutomationDockPattern;
#endif 	/* __IUIAutomationDockPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationExpandCollapsePattern_FWD_DEFINED__
#define __IUIAutomationExpandCollapsePattern_FWD_DEFINED__
typedef interface IUIAutomationExpandCollapsePattern IUIAutomationExpandCollapsePattern;
#endif 	/* __IUIAutomationExpandCollapsePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationGridPattern_FWD_DEFINED__
#define __IUIAutomationGridPattern_FWD_DEFINED__
typedef interface IUIAutomationGridPattern IUIAutomationGridPattern;
#endif 	/* __IUIAutomationGridPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationGridItemPattern_FWD_DEFINED__
#define __IUIAutomationGridItemPattern_FWD_DEFINED__
typedef interface IUIAutomationGridItemPattern IUIAutomationGridItemPattern;
#endif 	/* __IUIAutomationGridItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationMultipleViewPattern_FWD_DEFINED__
#define __IUIAutomationMultipleViewPattern_FWD_DEFINED__
typedef interface IUIAutomationMultipleViewPattern IUIAutomationMultipleViewPattern;
#endif 	/* __IUIAutomationMultipleViewPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationRangeValuePattern_FWD_DEFINED__
#define __IUIAutomationRangeValuePattern_FWD_DEFINED__
typedef interface IUIAutomationRangeValuePattern IUIAutomationRangeValuePattern;
#endif 	/* __IUIAutomationRangeValuePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationScrollPattern_FWD_DEFINED__
#define __IUIAutomationScrollPattern_FWD_DEFINED__
typedef interface IUIAutomationScrollPattern IUIAutomationScrollPattern;
#endif 	/* __IUIAutomationScrollPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationScrollItemPattern_FWD_DEFINED__
#define __IUIAutomationScrollItemPattern_FWD_DEFINED__
typedef interface IUIAutomationScrollItemPattern IUIAutomationScrollItemPattern;
#endif 	/* __IUIAutomationScrollItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSelectionPattern_FWD_DEFINED__
#define __IUIAutomationSelectionPattern_FWD_DEFINED__
typedef interface IUIAutomationSelectionPattern IUIAutomationSelectionPattern;
#endif 	/* __IUIAutomationSelectionPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSelectionItemPattern_FWD_DEFINED__
#define __IUIAutomationSelectionItemPattern_FWD_DEFINED__
typedef interface IUIAutomationSelectionItemPattern IUIAutomationSelectionItemPattern;
#endif 	/* __IUIAutomationSelectionItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__
#define __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__
typedef interface IUIAutomationSynchronizedInputPattern IUIAutomationSynchronizedInputPattern;
#endif 	/* __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTablePattern_FWD_DEFINED__
#define __IUIAutomationTablePattern_FWD_DEFINED__
typedef interface IUIAutomationTablePattern IUIAutomationTablePattern;
#endif 	/* __IUIAutomationTablePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTableItemPattern_FWD_DEFINED__
#define __IUIAutomationTableItemPattern_FWD_DEFINED__
typedef interface IUIAutomationTableItemPattern IUIAutomationTableItemPattern;
#endif 	/* __IUIAutomationTableItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTogglePattern_FWD_DEFINED__
#define __IUIAutomationTogglePattern_FWD_DEFINED__
typedef interface IUIAutomationTogglePattern IUIAutomationTogglePattern;
#endif 	/* __IUIAutomationTogglePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTransformPattern_FWD_DEFINED__
#define __IUIAutomationTransformPattern_FWD_DEFINED__
typedef interface IUIAutomationTransformPattern IUIAutomationTransformPattern;
#endif 	/* __IUIAutomationTransformPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationValuePattern_FWD_DEFINED__
#define __IUIAutomationValuePattern_FWD_DEFINED__
typedef interface IUIAutomationValuePattern IUIAutomationValuePattern;
#endif 	/* __IUIAutomationValuePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationWindowPattern_FWD_DEFINED__
#define __IUIAutomationWindowPattern_FWD_DEFINED__
typedef interface IUIAutomationWindowPattern IUIAutomationWindowPattern;
#endif 	/* __IUIAutomationWindowPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTextRange_FWD_DEFINED__
#define __IUIAutomationTextRange_FWD_DEFINED__
typedef interface IUIAutomationTextRange IUIAutomationTextRange;
#endif 	/* __IUIAutomationTextRange_FWD_DEFINED__ */


#ifndef __IUIAutomationTextRangeArray_FWD_DEFINED__
#define __IUIAutomationTextRangeArray_FWD_DEFINED__
typedef interface IUIAutomationTextRangeArray IUIAutomationTextRangeArray;
#endif 	/* __IUIAutomationTextRangeArray_FWD_DEFINED__ */


#ifndef __IUIAutomationTextPattern_FWD_DEFINED__
#define __IUIAutomationTextPattern_FWD_DEFINED__
typedef interface IUIAutomationTextPattern IUIAutomationTextPattern;
#endif 	/* __IUIAutomationTextPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__
#define __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__
typedef interface IUIAutomationLegacyIAccessiblePattern IUIAutomationLegacyIAccessiblePattern;
#endif 	/* __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationItemContainerPattern_FWD_DEFINED__
#define __IUIAutomationItemContainerPattern_FWD_DEFINED__
typedef interface IUIAutomationItemContainerPattern IUIAutomationItemContainerPattern;
#endif 	/* __IUIAutomationItemContainerPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__
#define __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__
typedef interface IUIAutomationVirtualizedItemPattern IUIAutomationVirtualizedItemPattern;
#endif 	/* __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationProxyFactory_FWD_DEFINED__
#define __IUIAutomationProxyFactory_FWD_DEFINED__
typedef interface IUIAutomationProxyFactory IUIAutomationProxyFactory;
#endif 	/* __IUIAutomationProxyFactory_FWD_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryEntry_FWD_DEFINED__
#define __IUIAutomationProxyFactoryEntry_FWD_DEFINED__
typedef interface IUIAutomationProxyFactoryEntry IUIAutomationProxyFactoryEntry;
#endif 	/* __IUIAutomationProxyFactoryEntry_FWD_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryMapping_FWD_DEFINED__
#define __IUIAutomationProxyFactoryMapping_FWD_DEFINED__
typedef interface IUIAutomationProxyFactoryMapping IUIAutomationProxyFactoryMapping;
#endif 	/* __IUIAutomationProxyFactoryMapping_FWD_DEFINED__ */


#ifndef __IUIAutomation_FWD_DEFINED__
#define __IUIAutomation_FWD_DEFINED__
typedef interface IUIAutomation IUIAutomation;
#endif 	/* __IUIAutomation_FWD_DEFINED__ */


#ifndef __CUIAutomation_FWD_DEFINED__
#define __CUIAutomation_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUIAutomation CUIAutomation;
#else
typedef struct CUIAutomation CUIAutomation;
#endif /* __cplusplus */

#endif 	/* __CUIAutomation_FWD_DEFINED__ */


/* header files for imported files */
#include "UIAutomationCore.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_uiautomationclient_0000_0000 */
/* [local] */ 

// -------------------------------------------------------------
// UIAutomationClient.H
//
// UIAutomation Client interface definitions and related types and enums
// (Generated from UIAutomationClient.idl)
//
// Copyright (c) Microsoft Corporation. All rights reserved.
// -------------------------------------------------------------


enum TreeScope
    {	TreeScope_Element	= 0x1,
	TreeScope_Children	= 0x2,
	TreeScope_Descendants	= 0x4,
	TreeScope_Parent	= 0x8,
	TreeScope_Ancestors	= 0x10,
	TreeScope_Subtree	= ( ( TreeScope_Element | TreeScope_Children )  | TreeScope_Descendants ) 
    } ;

enum PropertyConditionFlags
    {	PropertyConditionFlags_None	= 0,
	PropertyConditionFlags_IgnoreCase	= 0x1
    } ;

enum AutomationElementMode
    {	AutomationElementMode_None	= 0,
	AutomationElementMode_Full	= ( AutomationElementMode_None + 1 ) 
    } ;
typedef void *UIA_HWND;



extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0000_v0_0_s_ifspec;


#ifndef __UIAutomationClient_LIBRARY_DEFINED__
#define __UIAutomationClient_LIBRARY_DEFINED__

/* library UIAutomationClient */
/* [version][lcid][uuid] */ 




EXTERN_C const IID LIBID_UIAutomationClient;


#ifndef __UIA_PatternIds_MODULE_DEFINED__
#define __UIA_PatternIds_MODULE_DEFINED__


/* module UIA_PatternIds */
/* [dllname] */ 

const long UIA_InvokePatternId	=	10000;

const long UIA_SelectionPatternId	=	10001;

const long UIA_ValuePatternId	=	10002;

const long UIA_RangeValuePatternId	=	10003;

const long UIA_ScrollPatternId	=	10004;

const long UIA_ExpandCollapsePatternId	=	10005;

const long UIA_GridPatternId	=	10006;

const long UIA_GridItemPatternId	=	10007;

const long UIA_MultipleViewPatternId	=	10008;

const long UIA_WindowPatternId	=	10009;

const long UIA_SelectionItemPatternId	=	10010;

const long UIA_DockPatternId	=	10011;

const long UIA_TablePatternId	=	10012;

const long UIA_TableItemPatternId	=	10013;

const long UIA_TextPatternId	=	10014;

const long UIA_TogglePatternId	=	10015;

const long UIA_TransformPatternId	=	10016;

const long UIA_ScrollItemPatternId	=	10017;

const long UIA_LegacyIAccessiblePatternId	=	10018;

const long UIA_ItemContainerPatternId	=	10019;

const long UIA_VirtualizedItemPatternId	=	10020;

const long UIA_SynchronizedInputPatternId	=	10021;

#endif /* __UIA_PatternIds_MODULE_DEFINED__ */


#ifndef __UIA_EventIds_MODULE_DEFINED__
#define __UIA_EventIds_MODULE_DEFINED__


/* module UIA_EventIds */
/* [dllname] */ 

const long UIA_ToolTipOpenedEventId	=	20000;

const long UIA_ToolTipClosedEventId	=	20001;

const long UIA_StructureChangedEventId	=	20002;

const long UIA_MenuOpenedEventId	=	20003;

const long UIA_AutomationPropertyChangedEventId	=	20004;

const long UIA_AutomationFocusChangedEventId	=	20005;

const long UIA_AsyncContentLoadedEventId	=	20006;

const long UIA_MenuClosedEventId	=	20007;

const long UIA_LayoutInvalidatedEventId	=	20008;

const long UIA_Invoke_InvokedEventId	=	20009;

const long UIA_SelectionItem_ElementAddedToSelectionEventId	=	20010;

const long UIA_SelectionItem_ElementRemovedFromSelectionEventId	=	20011;

const long UIA_SelectionItem_ElementSelectedEventId	=	20012;

const long UIA_Selection_InvalidatedEventId	=	20013;

const long UIA_Text_TextSelectionChangedEventId	=	20014;

const long UIA_Text_TextChangedEventId	=	20015;

const long UIA_Window_WindowOpenedEventId	=	20016;

const long UIA_Window_WindowClosedEventId	=	20017;

const long UIA_MenuModeStartEventId	=	20018;

const long UIA_MenuModeEndEventId	=	20019;

const long UIA_InputReachedTargetEventId	=	20020;

const long UIA_InputReachedOtherElementEventId	=	20021;

const long UIA_InputDiscardedEventId	=	20022;

#endif /* __UIA_EventIds_MODULE_DEFINED__ */


#ifndef __UIA_PropertyIds_MODULE_DEFINED__
#define __UIA_PropertyIds_MODULE_DEFINED__


/* module UIA_PropertyIds */
/* [dllname] */ 

const long UIA_RuntimeIdPropertyId	=	30000;

const long UIA_BoundingRectanglePropertyId	=	30001;

const long UIA_ProcessIdPropertyId	=	30002;

const long UIA_ControlTypePropertyId	=	30003;

const long UIA_LocalizedControlTypePropertyId	=	30004;

const long UIA_NamePropertyId	=	30005;

const long UIA_AcceleratorKeyPropertyId	=	30006;

const long UIA_AccessKeyPropertyId	=	30007;

const long UIA_HasKeyboardFocusPropertyId	=	30008;

const long UIA_IsKeyboardFocusablePropertyId	=	30009;

const long UIA_IsEnabledPropertyId	=	30010;

const long UIA_AutomationIdPropertyId	=	30011;

const long UIA_ClassNamePropertyId	=	30012;

const long UIA_HelpTextPropertyId	=	30013;

const long UIA_ClickablePointPropertyId	=	30014;

const long UIA_CulturePropertyId	=	30015;

const long UIA_IsControlElementPropertyId	=	30016;

const long UIA_IsContentElementPropertyId	=	30017;

const long UIA_LabeledByPropertyId	=	30018;

const long UIA_IsPasswordPropertyId	=	30019;

const long UIA_NativeWindowHandlePropertyId	=	30020;

const long UIA_ItemTypePropertyId	=	30021;

const long UIA_IsOffscreenPropertyId	=	30022;

const long UIA_OrientationPropertyId	=	30023;

const long UIA_FrameworkIdPropertyId	=	30024;

const long UIA_IsRequiredForFormPropertyId	=	30025;

const long UIA_ItemStatusPropertyId	=	30026;

const long UIA_IsDockPatternAvailablePropertyId	=	30027;

const long UIA_IsExpandCollapsePatternAvailablePropertyId	=	30028;

const long UIA_IsGridItemPatternAvailablePropertyId	=	30029;

const long UIA_IsGridPatternAvailablePropertyId	=	30030;

const long UIA_IsInvokePatternAvailablePropertyId	=	30031;

const long UIA_IsMultipleViewPatternAvailablePropertyId	=	30032;

const long UIA_IsRangeValuePatternAvailablePropertyId	=	30033;

const long UIA_IsScrollPatternAvailablePropertyId	=	30034;

const long UIA_IsScrollItemPatternAvailablePropertyId	=	30035;

const long UIA_IsSelectionItemPatternAvailablePropertyId	=	30036;

const long UIA_IsSelectionPatternAvailablePropertyId	=	30037;

const long UIA_IsTablePatternAvailablePropertyId	=	30038;

const long UIA_IsTableItemPatternAvailablePropertyId	=	30039;

const long UIA_IsTextPatternAvailablePropertyId	=	30040;

const long UIA_IsTogglePatternAvailablePropertyId	=	30041;

const long UIA_IsTransformPatternAvailablePropertyId	=	30042;

const long UIA_IsValuePatternAvailablePropertyId	=	30043;

const long UIA_IsWindowPatternAvailablePropertyId	=	30044;

const long UIA_ValueValuePropertyId	=	30045;

const long UIA_ValueIsReadOnlyPropertyId	=	30046;

const long UIA_RangeValueValuePropertyId	=	30047;

const long UIA_RangeValueIsReadOnlyPropertyId	=	30048;

const long UIA_RangeValueMinimumPropertyId	=	30049;

const long UIA_RangeValueMaximumPropertyId	=	30050;

const long UIA_RangeValueLargeChangePropertyId	=	30051;

const long UIA_RangeValueSmallChangePropertyId	=	30052;

const long UIA_ScrollHorizontalScrollPercentPropertyId	=	30053;

const long UIA_ScrollHorizontalViewSizePropertyId	=	30054;

const long UIA_ScrollVerticalScrollPercentPropertyId	=	30055;

const long UIA_ScrollVerticalViewSizePropertyId	=	30056;

const long UIA_ScrollHorizontallyScrollablePropertyId	=	30057;

const long UIA_ScrollVerticallyScrollablePropertyId	=	30058;

const long UIA_SelectionSelectionPropertyId	=	30059;

const long UIA_SelectionCanSelectMultiplePropertyId	=	30060;

const long UIA_SelectionIsSelectionRequiredPropertyId	=	30061;

const long UIA_GridRowCountPropertyId	=	30062;

const long UIA_GridColumnCountPropertyId	=	30063;

const long UIA_GridItemRowPropertyId	=	30064;

const long UIA_GridItemColumnPropertyId	=	30065;

const long UIA_GridItemRowSpanPropertyId	=	30066;

const long UIA_GridItemColumnSpanPropertyId	=	30067;

const long UIA_GridItemContainingGridPropertyId	=	30068;

const long UIA_DockDockPositionPropertyId	=	30069;

const long UIA_ExpandCollapseExpandCollapseStatePropertyId	=	30070;

const long UIA_MultipleViewCurrentViewPropertyId	=	30071;

const long UIA_MultipleViewSupportedViewsPropertyId	=	30072;

const long UIA_WindowCanMaximizePropertyId	=	30073;

const long UIA_WindowCanMinimizePropertyId	=	30074;

const long UIA_WindowWindowVisualStatePropertyId	=	30075;

const long UIA_WindowWindowInteractionStatePropertyId	=	30076;

const long UIA_WindowIsModalPropertyId	=	30077;

const long UIA_WindowIsTopmostPropertyId	=	30078;

const long UIA_SelectionItemIsSelectedPropertyId	=	30079;

const long UIA_SelectionItemSelectionContainerPropertyId	=	30080;

const long UIA_TableRowHeadersPropertyId	=	30081;

const long UIA_TableColumnHeadersPropertyId	=	30082;

const long UIA_TableRowOrColumnMajorPropertyId	=	30083;

const long UIA_TableItemRowHeaderItemsPropertyId	=	30084;

const long UIA_TableItemColumnHeaderItemsPropertyId	=	30085;

const long UIA_ToggleToggleStatePropertyId	=	30086;

const long UIA_TransformCanMovePropertyId	=	30087;

const long UIA_TransformCanResizePropertyId	=	30088;

const long UIA_TransformCanRotatePropertyId	=	30089;

const long UIA_IsLegacyIAccessiblePatternAvailablePropertyId	=	30090;

const long UIA_LegacyIAccessibleChildIdPropertyId	=	30091;

const long UIA_LegacyIAccessibleNamePropertyId	=	30092;

const long UIA_LegacyIAccessibleValuePropertyId	=	30093;

const long UIA_LegacyIAccessibleDescriptionPropertyId	=	30094;

const long UIA_LegacyIAccessibleRolePropertyId	=	30095;

const long UIA_LegacyIAccessibleStatePropertyId	=	30096;

const long UIA_LegacyIAccessibleHelpPropertyId	=	30097;

const long UIA_LegacyIAccessibleKeyboardShortcutPropertyId	=	30098;

const long UIA_LegacyIAccessibleSelectionPropertyId	=	30099;

const long UIA_LegacyIAccessibleDefaultActionPropertyId	=	30100;

const long UIA_AriaRolePropertyId	=	30101;

const long UIA_AriaPropertiesPropertyId	=	30102;

const long UIA_IsDataValidForFormPropertyId	=	30103;

const long UIA_ControllerForPropertyId	=	30104;

const long UIA_DescribedByPropertyId	=	30105;

const long UIA_FlowsToPropertyId	=	30106;

const long UIA_ProviderDescriptionPropertyId	=	30107;

const long UIA_IsItemContainerPatternAvailablePropertyId	=	30108;

const long UIA_IsVirtualizedItemPatternAvailablePropertyId	=	30109;

const long UIA_IsSynchronizedInputPatternAvailablePropertyId	=	30110;

#endif /* __UIA_PropertyIds_MODULE_DEFINED__ */


#ifndef __UIA_TextAttributeIds_MODULE_DEFINED__
#define __UIA_TextAttributeIds_MODULE_DEFINED__


/* module UIA_TextAttributeIds */
/* [dllname] */ 

const long UIA_AnimationStyleAttributeId	=	40000;

const long UIA_BackgroundColorAttributeId	=	40001;

const long UIA_BulletStyleAttributeId	=	40002;

const long UIA_CapStyleAttributeId	=	40003;

const long UIA_CultureAttributeId	=	40004;

const long UIA_FontNameAttributeId	=	40005;

const long UIA_FontSizeAttributeId	=	40006;

const long UIA_FontWeightAttributeId	=	40007;

const long UIA_ForegroundColorAttributeId	=	40008;

const long UIA_HorizontalTextAlignmentAttributeId	=	40009;

const long UIA_IndentationFirstLineAttributeId	=	40010;

const long UIA_IndentationLeadingAttributeId	=	40011;

const long UIA_IndentationTrailingAttributeId	=	40012;

const long UIA_IsHiddenAttributeId	=	40013;

const long UIA_IsItalicAttributeId	=	40014;

const long UIA_IsReadOnlyAttributeId	=	40015;

const long UIA_IsSubscriptAttributeId	=	40016;

const long UIA_IsSuperscriptAttributeId	=	40017;

const long UIA_MarginBottomAttributeId	=	40018;

const long UIA_MarginLeadingAttributeId	=	40019;

const long UIA_MarginTopAttributeId	=	40020;

const long UIA_MarginTrailingAttributeId	=	40021;

const long UIA_OutlineStylesAttributeId	=	40022;

const long UIA_OverlineColorAttributeId	=	40023;

const long UIA_OverlineStyleAttributeId	=	40024;

const long UIA_StrikethroughColorAttributeId	=	40025;

const long UIA_StrikethroughStyleAttributeId	=	40026;

const long UIA_TabsAttributeId	=	40027;

const long UIA_TextFlowDirectionsAttributeId	=	40028;

const long UIA_UnderlineColorAttributeId	=	40029;

const long UIA_UnderlineStyleAttributeId	=	40030;

#endif /* __UIA_TextAttributeIds_MODULE_DEFINED__ */


#ifndef __UIA_ControlTypeIds_MODULE_DEFINED__
#define __UIA_ControlTypeIds_MODULE_DEFINED__


/* module UIA_ControlTypeIds */
/* [dllname] */ 

const long UIA_ButtonControlTypeId	=	50000;

const long UIA_CalendarControlTypeId	=	50001;

const long UIA_CheckBoxControlTypeId	=	50002;

const long UIA_ComboBoxControlTypeId	=	50003;

const long UIA_EditControlTypeId	=	50004;

const long UIA_HyperlinkControlTypeId	=	50005;

const long UIA_ImageControlTypeId	=	50006;

const long UIA_ListItemControlTypeId	=	50007;

const long UIA_ListControlTypeId	=	50008;

const long UIA_MenuControlTypeId	=	50009;

const long UIA_MenuBarControlTypeId	=	50010;

const long UIA_MenuItemControlTypeId	=	50011;

const long UIA_ProgressBarControlTypeId	=	50012;

const long UIA_RadioButtonControlTypeId	=	50013;

const long UIA_ScrollBarControlTypeId	=	50014;

const long UIA_SliderControlTypeId	=	50015;

const long UIA_SpinnerControlTypeId	=	50016;

const long UIA_StatusBarControlTypeId	=	50017;

const long UIA_TabControlTypeId	=	50018;

const long UIA_TabItemControlTypeId	=	50019;

const long UIA_TextControlTypeId	=	50020;

const long UIA_ToolBarControlTypeId	=	50021;

const long UIA_ToolTipControlTypeId	=	50022;

const long UIA_TreeControlTypeId	=	50023;

const long UIA_TreeItemControlTypeId	=	50024;

const long UIA_CustomControlTypeId	=	50025;

const long UIA_GroupControlTypeId	=	50026;

const long UIA_ThumbControlTypeId	=	50027;

const long UIA_DataGridControlTypeId	=	50028;

const long UIA_DataItemControlTypeId	=	50029;

const long UIA_DocumentControlTypeId	=	50030;

const long UIA_SplitButtonControlTypeId	=	50031;

const long UIA_WindowControlTypeId	=	50032;

const long UIA_PaneControlTypeId	=	50033;

const long UIA_HeaderControlTypeId	=	50034;

const long UIA_HeaderItemControlTypeId	=	50035;

const long UIA_TableControlTypeId	=	50036;

const long UIA_TitleBarControlTypeId	=	50037;

const long UIA_SeparatorControlTypeId	=	50038;

#endif /* __UIA_ControlTypeIds_MODULE_DEFINED__ */

#ifndef __IUIAutomationElement_INTERFACE_DEFINED__
#define __IUIAutomationElement_INTERFACE_DEFINED__

/* interface IUIAutomationElement */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d22108aa-8ac5-49a5-837b-37bbb3d7591e")
    IUIAutomationElement : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRuntimeId( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *runtimeId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFirst( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAll( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFirstBuildCache( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAllBuildCache( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BuildUpdatedCache( 
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **updatedElement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPropertyValue( 
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ __RPC__out VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPropertyValueEx( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ __RPC__out VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPropertyValue( 
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ __RPC__out VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPropertyValueEx( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ __RPC__out VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPatternAs( 
            /* [in] */ PATTERNID patternId,
            /* [in] */ __RPC__in REFIID riid,
            /* [retval][iid_is][out] */ __RPC__deref_out_opt void **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPatternAs( 
            /* [in] */ PATTERNID patternId,
            /* [in] */ __RPC__in REFIID riid,
            /* [retval][iid_is][out] */ __RPC__deref_out_opt void **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPattern( 
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPattern( 
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedParent( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **parent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedChildren( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **children) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProcessId( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentControlType( 
            /* [retval][out] */ __RPC__out CONTROLTYPEID *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLocalizedControlType( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAcceleratorKey( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAccessKey( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHasKeyboardFocus( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsKeyboardFocusable( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsEnabled( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAutomationId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentClassName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHelpText( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCulture( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsControlElement( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsContentElement( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsPassword( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentNativeWindowHandle( 
            /* [retval][out] */ __RPC__deref_out_opt UIA_HWND *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemType( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsOffscreen( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentOrientation( 
            /* [retval][out] */ __RPC__out enum OrientationType *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFrameworkId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsRequiredForForm( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemStatus( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentBoundingRectangle( 
            /* [retval][out] */ __RPC__out RECT *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLabeledBy( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaRole( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaProperties( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsDataValidForForm( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentControllerFor( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDescribedBy( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFlowsTo( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProviderDescription( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedProcessId( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedControlType( 
            /* [retval][out] */ __RPC__out CONTROLTYPEID *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLocalizedControlType( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAcceleratorKey( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAccessKey( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHasKeyboardFocus( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsKeyboardFocusable( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsEnabled( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAutomationId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedClassName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHelpText( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCulture( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsControlElement( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsContentElement( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsPassword( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedNativeWindowHandle( 
            /* [retval][out] */ __RPC__deref_out_opt UIA_HWND *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedItemType( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsOffscreen( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedOrientation( 
            /* [retval][out] */ __RPC__out enum OrientationType *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFrameworkId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsRequiredForForm( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedItemStatus( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedBoundingRectangle( 
            /* [retval][out] */ __RPC__out RECT *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLabeledBy( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAriaRole( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAriaProperties( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsDataValidForForm( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedControllerFor( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDescribedBy( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFlowsTo( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedProviderDescription( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClickablePoint( 
            /* [out] */ __RPC__out POINT *clickable,
            /* [retval][out] */ __RPC__out BOOL *gotClickable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            __RPC__in IUIAutomationElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ __RPC__out VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ __RPC__out VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ __RPC__out VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ __RPC__out VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ __RPC__in REFIID riid,
            /* [retval][iid_is][out] */ __RPC__deref_out_opt void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ __RPC__in REFIID riid,
            /* [retval][iid_is][out] */ __RPC__deref_out_opt void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            __RPC__in IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            __RPC__in IUIAutomationElement * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            __RPC__in IUIAutomationElement * This,
            /* [out] */ __RPC__out POINT *clickable,
            /* [retval][out] */ __RPC__out BOOL *gotClickable);
        
        END_INTERFACE
    } IUIAutomationElementVtbl;

    interface IUIAutomationElement
    {
        CONST_VTBL struct IUIAutomationElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElementArray_INTERFACE_DEFINED__
#define __IUIAutomationElementArray_INTERFACE_DEFINED__

/* interface IUIAutomationElementArray */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElementArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14314595-b4bc-4055-95f2-58f2e42c9855")
    IUIAutomationElementArray : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ __RPC__out int *length) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationElementArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationElementArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationElementArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationElementArray * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            __RPC__in IUIAutomationElementArray * This,
            /* [retval][out] */ __RPC__out int *length);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            __RPC__in IUIAutomationElementArray * This,
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        END_INTERFACE
    } IUIAutomationElementArrayVtbl;

    interface IUIAutomationElementArray
    {
        CONST_VTBL struct IUIAutomationElementArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElementArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElementArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElementArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElementArray_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 

#define IUIAutomationElementArray_GetElement(This,index,element)	\
    ( (This)->lpVtbl -> GetElement(This,index,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElementArray_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationCondition_INTERFACE_DEFINED__
#define __IUIAutomationCondition_INTERFACE_DEFINED__

/* interface IUIAutomationCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("352ffba8-0973-437c-a61f-f64cafd81df9")
    IUIAutomationCondition : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationCondition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationCondition * This);
        
        END_INTERFACE
    } IUIAutomationConditionVtbl;

    interface IUIAutomationCondition
    {
        CONST_VTBL struct IUIAutomationConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationBoolCondition_INTERFACE_DEFINED__
#define __IUIAutomationBoolCondition_INTERFACE_DEFINED__

/* interface IUIAutomationBoolCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationBoolCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1b4e1f2e-75eb-4d0b-8952-5a69988e2307")
    IUIAutomationBoolCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BooleanValue( 
            /* [retval][out] */ __RPC__out BOOL *boolVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationBoolConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationBoolCondition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationBoolCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationBoolCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BooleanValue )( 
            __RPC__in IUIAutomationBoolCondition * This,
            /* [retval][out] */ __RPC__out BOOL *boolVal);
        
        END_INTERFACE
    } IUIAutomationBoolConditionVtbl;

    interface IUIAutomationBoolCondition
    {
        CONST_VTBL struct IUIAutomationBoolConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationBoolCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationBoolCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationBoolCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationBoolCondition_get_BooleanValue(This,boolVal)	\
    ( (This)->lpVtbl -> get_BooleanValue(This,boolVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationBoolCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationPropertyCondition_INTERFACE_DEFINED__
#define __IUIAutomationPropertyCondition_INTERFACE_DEFINED__

/* interface IUIAutomationPropertyCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationPropertyCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99ebf2cb-5578-4267-9ad4-afd6ea77e94b")
    IUIAutomationPropertyCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PropertyId( 
            /* [retval][out] */ __RPC__out PROPERTYID *propertyId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PropertyValue( 
            /* [retval][out] */ __RPC__out VARIANT *propertyValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PropertyConditionFlags( 
            /* [retval][out] */ __RPC__out enum PropertyConditionFlags *flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationPropertyConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationPropertyCondition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationPropertyCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationPropertyCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in IUIAutomationPropertyCondition * This,
            /* [retval][out] */ __RPC__out PROPERTYID *propertyId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyValue )( 
            __RPC__in IUIAutomationPropertyCondition * This,
            /* [retval][out] */ __RPC__out VARIANT *propertyValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyConditionFlags )( 
            __RPC__in IUIAutomationPropertyCondition * This,
            /* [retval][out] */ __RPC__out enum PropertyConditionFlags *flags);
        
        END_INTERFACE
    } IUIAutomationPropertyConditionVtbl;

    interface IUIAutomationPropertyCondition
    {
        CONST_VTBL struct IUIAutomationPropertyConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationPropertyCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationPropertyCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationPropertyCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationPropertyCondition_get_PropertyId(This,propertyId)	\
    ( (This)->lpVtbl -> get_PropertyId(This,propertyId) ) 

#define IUIAutomationPropertyCondition_get_PropertyValue(This,propertyValue)	\
    ( (This)->lpVtbl -> get_PropertyValue(This,propertyValue) ) 

#define IUIAutomationPropertyCondition_get_PropertyConditionFlags(This,flags)	\
    ( (This)->lpVtbl -> get_PropertyConditionFlags(This,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationPropertyCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationAndCondition_INTERFACE_DEFINED__
#define __IUIAutomationAndCondition_INTERFACE_DEFINED__

/* interface IUIAutomationAndCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationAndCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a7d0af36-b912-45fe-9855-091ddc174aec")
    IUIAutomationAndCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ChildCount( 
            /* [retval][out] */ __RPC__out int *childCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildrenAsNativeArray( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*childArrayCount) IUIAutomationCondition ***childArray,
            /* [out] */ __RPC__out int *childArrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *childArray) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationAndConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationAndCondition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationAndCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationAndCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildCount )( 
            __RPC__in IUIAutomationAndCondition * This,
            /* [retval][out] */ __RPC__out int *childCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildrenAsNativeArray )( 
            __RPC__in IUIAutomationAndCondition * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*childArrayCount) IUIAutomationCondition ***childArray,
            /* [out] */ __RPC__out int *childArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            __RPC__in IUIAutomationAndCondition * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *childArray);
        
        END_INTERFACE
    } IUIAutomationAndConditionVtbl;

    interface IUIAutomationAndCondition
    {
        CONST_VTBL struct IUIAutomationAndConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationAndCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationAndCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationAndCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationAndCondition_get_ChildCount(This,childCount)	\
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) ) 

#define IUIAutomationAndCondition_GetChildrenAsNativeArray(This,childArray,childArrayCount)	\
    ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) ) 

#define IUIAutomationAndCondition_GetChildren(This,childArray)	\
    ( (This)->lpVtbl -> GetChildren(This,childArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationAndCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationOrCondition_INTERFACE_DEFINED__
#define __IUIAutomationOrCondition_INTERFACE_DEFINED__

/* interface IUIAutomationOrCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationOrCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8753f032-3db1-47b5-a1fc-6e34a266c712")
    IUIAutomationOrCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ChildCount( 
            /* [retval][out] */ __RPC__out int *childCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildrenAsNativeArray( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*childArrayCount) IUIAutomationCondition ***childArray,
            /* [out] */ __RPC__out int *childArrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *childArray) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationOrConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationOrCondition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationOrCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationOrCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildCount )( 
            __RPC__in IUIAutomationOrCondition * This,
            /* [retval][out] */ __RPC__out int *childCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildrenAsNativeArray )( 
            __RPC__in IUIAutomationOrCondition * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*childArrayCount) IUIAutomationCondition ***childArray,
            /* [out] */ __RPC__out int *childArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            __RPC__in IUIAutomationOrCondition * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *childArray);
        
        END_INTERFACE
    } IUIAutomationOrConditionVtbl;

    interface IUIAutomationOrCondition
    {
        CONST_VTBL struct IUIAutomationOrConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationOrCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationOrCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationOrCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationOrCondition_get_ChildCount(This,childCount)	\
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) ) 

#define IUIAutomationOrCondition_GetChildrenAsNativeArray(This,childArray,childArrayCount)	\
    ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) ) 

#define IUIAutomationOrCondition_GetChildren(This,childArray)	\
    ( (This)->lpVtbl -> GetChildren(This,childArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationOrCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationNotCondition_INTERFACE_DEFINED__
#define __IUIAutomationNotCondition_INTERFACE_DEFINED__

/* interface IUIAutomationNotCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationNotCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f528b657-847b-498c-8896-d52b565407a1")
    IUIAutomationNotCondition : public IUIAutomationCondition
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChild( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationNotConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationNotCondition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationNotCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationNotCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            __RPC__in IUIAutomationNotCondition * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition);
        
        END_INTERFACE
    } IUIAutomationNotConditionVtbl;

    interface IUIAutomationNotCondition
    {
        CONST_VTBL struct IUIAutomationNotConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationNotCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationNotCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationNotCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationNotCondition_GetChild(This,condition)	\
    ( (This)->lpVtbl -> GetChild(This,condition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationNotCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationCacheRequest_INTERFACE_DEFINED__
#define __IUIAutomationCacheRequest_INTERFACE_DEFINED__

/* interface IUIAutomationCacheRequest */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationCacheRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b32a92b5-bc25-4078-9c08-d7ee95c48e03")
    IUIAutomationCacheRequest : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddProperty( 
            /* [in] */ PROPERTYID propertyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPattern( 
            /* [in] */ PATTERNID patternId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCacheRequest **clonedRequest) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TreeScope( 
            /* [retval][out] */ __RPC__out enum TreeScope *scope) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TreeScope( 
            /* [in] */ enum TreeScope scope) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TreeFilter( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **filter) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TreeFilter( 
            /* [in] */ __RPC__in_opt IUIAutomationCondition *filter) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomationElementMode( 
            /* [retval][out] */ __RPC__out enum AutomationElementMode *mode) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AutomationElementMode( 
            /* [in] */ enum AutomationElementMode mode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationCacheRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationCacheRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationCacheRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddProperty )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [in] */ PROPERTYID propertyId);
        
        HRESULT ( STDMETHODCALLTYPE *AddPattern )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [in] */ PATTERNID patternId);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCacheRequest **clonedRequest);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TreeScope )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [retval][out] */ __RPC__out enum TreeScope *scope);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TreeScope )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [in] */ enum TreeScope scope);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TreeFilter )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **filter);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TreeFilter )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *filter);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomationElementMode )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [retval][out] */ __RPC__out enum AutomationElementMode *mode);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutomationElementMode )( 
            __RPC__in IUIAutomationCacheRequest * This,
            /* [in] */ enum AutomationElementMode mode);
        
        END_INTERFACE
    } IUIAutomationCacheRequestVtbl;

    interface IUIAutomationCacheRequest
    {
        CONST_VTBL struct IUIAutomationCacheRequestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationCacheRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationCacheRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationCacheRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationCacheRequest_AddProperty(This,propertyId)	\
    ( (This)->lpVtbl -> AddProperty(This,propertyId) ) 

#define IUIAutomationCacheRequest_AddPattern(This,patternId)	\
    ( (This)->lpVtbl -> AddPattern(This,patternId) ) 

#define IUIAutomationCacheRequest_Clone(This,clonedRequest)	\
    ( (This)->lpVtbl -> Clone(This,clonedRequest) ) 

#define IUIAutomationCacheRequest_get_TreeScope(This,scope)	\
    ( (This)->lpVtbl -> get_TreeScope(This,scope) ) 

#define IUIAutomationCacheRequest_put_TreeScope(This,scope)	\
    ( (This)->lpVtbl -> put_TreeScope(This,scope) ) 

#define IUIAutomationCacheRequest_get_TreeFilter(This,filter)	\
    ( (This)->lpVtbl -> get_TreeFilter(This,filter) ) 

#define IUIAutomationCacheRequest_put_TreeFilter(This,filter)	\
    ( (This)->lpVtbl -> put_TreeFilter(This,filter) ) 

#define IUIAutomationCacheRequest_get_AutomationElementMode(This,mode)	\
    ( (This)->lpVtbl -> get_AutomationElementMode(This,mode) ) 

#define IUIAutomationCacheRequest_put_AutomationElementMode(This,mode)	\
    ( (This)->lpVtbl -> put_AutomationElementMode(This,mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationCacheRequest_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTreeWalker_INTERFACE_DEFINED__
#define __IUIAutomationTreeWalker_INTERFACE_DEFINED__

/* interface IUIAutomationTreeWalker */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTreeWalker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4042c624-389c-4afc-a630-9df854a541fc")
    IUIAutomationTreeWalker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetParentElement( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **parent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFirstChildElement( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **first) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastChildElement( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **last) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextSiblingElement( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **next) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreviousSiblingElement( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **previous) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NormalizeElement( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **normalized) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParentElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **parent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFirstChildElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **first) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastChildElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **last) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextSiblingElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **next) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreviousSiblingElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **previous) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NormalizeElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **normalized) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTreeWalkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTreeWalker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTreeWalker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentElement )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetFirstChildElement )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **first);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastChildElement )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **last);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElement )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **next);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElement )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **previous);
        
        HRESULT ( STDMETHODCALLTYPE *NormalizeElement )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **normalized);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentElementBuildCache )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetFirstChildElementBuildCache )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **first);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastChildElementBuildCache )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **last);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElementBuildCache )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **next);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElementBuildCache )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **previous);
        
        HRESULT ( STDMETHODCALLTYPE *NormalizeElementBuildCache )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **normalized);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            __RPC__in IUIAutomationTreeWalker * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition);
        
        END_INTERFACE
    } IUIAutomationTreeWalkerVtbl;

    interface IUIAutomationTreeWalker
    {
        CONST_VTBL struct IUIAutomationTreeWalkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTreeWalker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTreeWalker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTreeWalker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTreeWalker_GetParentElement(This,element,parent)	\
    ( (This)->lpVtbl -> GetParentElement(This,element,parent) ) 

#define IUIAutomationTreeWalker_GetFirstChildElement(This,element,first)	\
    ( (This)->lpVtbl -> GetFirstChildElement(This,element,first) ) 

#define IUIAutomationTreeWalker_GetLastChildElement(This,element,last)	\
    ( (This)->lpVtbl -> GetLastChildElement(This,element,last) ) 

#define IUIAutomationTreeWalker_GetNextSiblingElement(This,element,next)	\
    ( (This)->lpVtbl -> GetNextSiblingElement(This,element,next) ) 

#define IUIAutomationTreeWalker_GetPreviousSiblingElement(This,element,previous)	\
    ( (This)->lpVtbl -> GetPreviousSiblingElement(This,element,previous) ) 

#define IUIAutomationTreeWalker_NormalizeElement(This,element,normalized)	\
    ( (This)->lpVtbl -> NormalizeElement(This,element,normalized) ) 

#define IUIAutomationTreeWalker_GetParentElementBuildCache(This,element,cacheRequest,parent)	\
    ( (This)->lpVtbl -> GetParentElementBuildCache(This,element,cacheRequest,parent) ) 

#define IUIAutomationTreeWalker_GetFirstChildElementBuildCache(This,element,cacheRequest,first)	\
    ( (This)->lpVtbl -> GetFirstChildElementBuildCache(This,element,cacheRequest,first) ) 

#define IUIAutomationTreeWalker_GetLastChildElementBuildCache(This,element,cacheRequest,last)	\
    ( (This)->lpVtbl -> GetLastChildElementBuildCache(This,element,cacheRequest,last) ) 

#define IUIAutomationTreeWalker_GetNextSiblingElementBuildCache(This,element,cacheRequest,next)	\
    ( (This)->lpVtbl -> GetNextSiblingElementBuildCache(This,element,cacheRequest,next) ) 

#define IUIAutomationTreeWalker_GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous)	\
    ( (This)->lpVtbl -> GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous) ) 

#define IUIAutomationTreeWalker_NormalizeElementBuildCache(This,element,cacheRequest,normalized)	\
    ( (This)->lpVtbl -> NormalizeElementBuildCache(This,element,cacheRequest,normalized) ) 

#define IUIAutomationTreeWalker_get_Condition(This,condition)	\
    ( (This)->lpVtbl -> get_Condition(This,condition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTreeWalker_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("146c3c17-f12e-4e22-8c27-f894b9b79c69")
    IUIAutomationEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleAutomationEvent( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender,
            /* [in] */ EVENTID eventId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleAutomationEvent )( 
            __RPC__in IUIAutomationEventHandler * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender,
            /* [in] */ EVENTID eventId);
        
        END_INTERFACE
    } IUIAutomationEventHandlerVtbl;

    interface IUIAutomationEventHandler
    {
        CONST_VTBL struct IUIAutomationEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationEventHandler_HandleAutomationEvent(This,sender,eventId)	\
    ( (This)->lpVtbl -> HandleAutomationEvent(This,sender,eventId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationPropertyChangedEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationPropertyChangedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40cd37d4-c756-4b0c-8c6f-bddfeeb13b50")
    IUIAutomationPropertyChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandlePropertyChangedEvent( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT newValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationPropertyChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationPropertyChangedEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationPropertyChangedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationPropertyChangedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandlePropertyChangedEvent )( 
            __RPC__in IUIAutomationPropertyChangedEventHandler * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT newValue);
        
        END_INTERFACE
    } IUIAutomationPropertyChangedEventHandlerVtbl;

    interface IUIAutomationPropertyChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationPropertyChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationPropertyChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationPropertyChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationPropertyChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationPropertyChangedEventHandler_HandlePropertyChangedEvent(This,sender,propertyId,newValue)	\
    ( (This)->lpVtbl -> HandlePropertyChangedEvent(This,sender,propertyId,newValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationStructureChangedEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationStructureChangedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e81d1b4e-11c5-42f8-9754-e7036c79f054")
    IUIAutomationStructureChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleStructureChangedEvent( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender,
            /* [in] */ enum StructureChangeType changeType,
            /* [in] */ __RPC__in SAFEARRAY * runtimeId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationStructureChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationStructureChangedEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationStructureChangedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationStructureChangedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleStructureChangedEvent )( 
            __RPC__in IUIAutomationStructureChangedEventHandler * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender,
            /* [in] */ enum StructureChangeType changeType,
            /* [in] */ __RPC__in SAFEARRAY * runtimeId);
        
        END_INTERFACE
    } IUIAutomationStructureChangedEventHandlerVtbl;

    interface IUIAutomationStructureChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationStructureChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationStructureChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationStructureChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationStructureChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationStructureChangedEventHandler_HandleStructureChangedEvent(This,sender,changeType,runtimeId)	\
    ( (This)->lpVtbl -> HandleStructureChangedEvent(This,sender,changeType,runtimeId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationFocusChangedEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationFocusChangedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c270f6b5-5c69-4290-9745-7a7f97169468")
    IUIAutomationFocusChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleFocusChangedEvent( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationFocusChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationFocusChangedEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationFocusChangedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationFocusChangedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleFocusChangedEvent )( 
            __RPC__in IUIAutomationFocusChangedEventHandler * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *sender);
        
        END_INTERFACE
    } IUIAutomationFocusChangedEventHandlerVtbl;

    interface IUIAutomationFocusChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationFocusChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationFocusChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationFocusChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationFocusChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationFocusChangedEventHandler_HandleFocusChangedEvent(This,sender)	\
    ( (This)->lpVtbl -> HandleFocusChangedEvent(This,sender) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationInvokePattern_INTERFACE_DEFINED__
#define __IUIAutomationInvokePattern_INTERFACE_DEFINED__

/* interface IUIAutomationInvokePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationInvokePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fb377fbe-8ea6-46d5-9c73-6499642d3059")
    IUIAutomationInvokePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationInvokePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationInvokePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationInvokePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationInvokePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in IUIAutomationInvokePattern * This);
        
        END_INTERFACE
    } IUIAutomationInvokePatternVtbl;

    interface IUIAutomationInvokePattern
    {
        CONST_VTBL struct IUIAutomationInvokePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationInvokePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationInvokePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationInvokePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationInvokePattern_Invoke(This)	\
    ( (This)->lpVtbl -> Invoke(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationInvokePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationDockPattern_INTERFACE_DEFINED__
#define __IUIAutomationDockPattern_INTERFACE_DEFINED__

/* interface IUIAutomationDockPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationDockPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fde5ef97-1464-48f6-90bf-43d0948e86ec")
    IUIAutomationDockPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDockPosition( 
            /* [in] */ enum DockPosition dockPos) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDockPosition( 
            /* [retval][out] */ __RPC__out enum DockPosition *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDockPosition( 
            /* [retval][out] */ __RPC__out enum DockPosition *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationDockPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationDockPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationDockPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationDockPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDockPosition )( 
            __RPC__in IUIAutomationDockPattern * This,
            /* [in] */ enum DockPosition dockPos);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDockPosition )( 
            __RPC__in IUIAutomationDockPattern * This,
            /* [retval][out] */ __RPC__out enum DockPosition *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDockPosition )( 
            __RPC__in IUIAutomationDockPattern * This,
            /* [retval][out] */ __RPC__out enum DockPosition *retVal);
        
        END_INTERFACE
    } IUIAutomationDockPatternVtbl;

    interface IUIAutomationDockPattern
    {
        CONST_VTBL struct IUIAutomationDockPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationDockPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationDockPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationDockPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationDockPattern_SetDockPosition(This,dockPos)	\
    ( (This)->lpVtbl -> SetDockPosition(This,dockPos) ) 

#define IUIAutomationDockPattern_get_CurrentDockPosition(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDockPosition(This,retVal) ) 

#define IUIAutomationDockPattern_get_CachedDockPosition(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDockPosition(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationDockPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__
#define __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__

/* interface IUIAutomationExpandCollapsePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationExpandCollapsePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("619be086-1f4e-4ee4-bafa-210128738730")
    IUIAutomationExpandCollapsePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Expand( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Collapse( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentExpandCollapseState( 
            /* [retval][out] */ __RPC__out enum ExpandCollapseState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedExpandCollapseState( 
            /* [retval][out] */ __RPC__out enum ExpandCollapseState *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationExpandCollapsePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationExpandCollapsePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationExpandCollapsePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationExpandCollapsePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Expand )( 
            __RPC__in IUIAutomationExpandCollapsePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Collapse )( 
            __RPC__in IUIAutomationExpandCollapsePattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentExpandCollapseState )( 
            __RPC__in IUIAutomationExpandCollapsePattern * This,
            /* [retval][out] */ __RPC__out enum ExpandCollapseState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedExpandCollapseState )( 
            __RPC__in IUIAutomationExpandCollapsePattern * This,
            /* [retval][out] */ __RPC__out enum ExpandCollapseState *retVal);
        
        END_INTERFACE
    } IUIAutomationExpandCollapsePatternVtbl;

    interface IUIAutomationExpandCollapsePattern
    {
        CONST_VTBL struct IUIAutomationExpandCollapsePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationExpandCollapsePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationExpandCollapsePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationExpandCollapsePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationExpandCollapsePattern_Expand(This)	\
    ( (This)->lpVtbl -> Expand(This) ) 

#define IUIAutomationExpandCollapsePattern_Collapse(This)	\
    ( (This)->lpVtbl -> Collapse(This) ) 

#define IUIAutomationExpandCollapsePattern_get_CurrentExpandCollapseState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentExpandCollapseState(This,retVal) ) 

#define IUIAutomationExpandCollapsePattern_get_CachedExpandCollapseState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedExpandCollapseState(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationGridPattern_INTERFACE_DEFINED__
#define __IUIAutomationGridPattern_INTERFACE_DEFINED__

/* interface IUIAutomationGridPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationGridPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("414c3cdc-856b-4f5b-8538-3131c6302550")
    IUIAutomationGridPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ int row,
            /* [in] */ int column,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowCount( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumnCount( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowCount( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumnCount( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationGridPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationGridPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationGridPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationGridPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IUIAutomationGridPattern * This,
            /* [in] */ int row,
            /* [in] */ int column,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowCount )( 
            __RPC__in IUIAutomationGridPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnCount )( 
            __RPC__in IUIAutomationGridPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowCount )( 
            __RPC__in IUIAutomationGridPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumnCount )( 
            __RPC__in IUIAutomationGridPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        END_INTERFACE
    } IUIAutomationGridPatternVtbl;

    interface IUIAutomationGridPattern
    {
        CONST_VTBL struct IUIAutomationGridPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationGridPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationGridPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationGridPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationGridPattern_GetItem(This,row,column,element)	\
    ( (This)->lpVtbl -> GetItem(This,row,column,element) ) 

#define IUIAutomationGridPattern_get_CurrentRowCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowCount(This,retVal) ) 

#define IUIAutomationGridPattern_get_CurrentColumnCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumnCount(This,retVal) ) 

#define IUIAutomationGridPattern_get_CachedRowCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowCount(This,retVal) ) 

#define IUIAutomationGridPattern_get_CachedColumnCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumnCount(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationGridPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationGridItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationGridItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationGridItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationGridItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78f8ef57-66c3-4e09-bd7c-e79b2004894d")
    IUIAutomationGridItemPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentContainingGrid( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRow( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumn( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowSpan( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumnSpan( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedContainingGrid( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRow( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumn( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowSpan( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumnSpan( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationGridItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationGridItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationGridItemPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentContainingGrid )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRow )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumn )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowSpan )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnSpan )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedContainingGrid )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRow )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumn )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowSpan )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumnSpan )( 
            __RPC__in IUIAutomationGridItemPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        END_INTERFACE
    } IUIAutomationGridItemPatternVtbl;

    interface IUIAutomationGridItemPattern
    {
        CONST_VTBL struct IUIAutomationGridItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationGridItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationGridItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationGridItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationGridItemPattern_get_CurrentContainingGrid(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentContainingGrid(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentRow(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRow(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentColumn(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumn(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentRowSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowSpan(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentColumnSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumnSpan(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedContainingGrid(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedContainingGrid(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedRow(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRow(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedColumn(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumn(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedRowSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowSpan(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedColumnSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumnSpan(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationGridItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__
#define __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__

/* interface IUIAutomationMultipleViewPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationMultipleViewPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8d253c91-1dc5-4bb5-b18f-ade16fa495e8")
    IUIAutomationMultipleViewPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetViewName( 
            /* [in] */ int view,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentView( 
            /* [in] */ int view) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCurrentView( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSupportedViews( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCurrentView( 
            /* [retval][out] */ __RPC__out int *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSupportedViews( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationMultipleViewPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationMultipleViewPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationMultipleViewPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationMultipleViewPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewName )( 
            __RPC__in IUIAutomationMultipleViewPattern * This,
            /* [in] */ int view,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentView )( 
            __RPC__in IUIAutomationMultipleViewPattern * This,
            /* [in] */ int view);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCurrentView )( 
            __RPC__in IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSupportedViews )( 
            __RPC__in IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCurrentView )( 
            __RPC__in IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ __RPC__out int *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedSupportedViews )( 
            __RPC__in IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *retVal);
        
        END_INTERFACE
    } IUIAutomationMultipleViewPatternVtbl;

    interface IUIAutomationMultipleViewPattern
    {
        CONST_VTBL struct IUIAutomationMultipleViewPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationMultipleViewPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationMultipleViewPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationMultipleViewPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationMultipleViewPattern_GetViewName(This,view,name)	\
    ( (This)->lpVtbl -> GetViewName(This,view,name) ) 

#define IUIAutomationMultipleViewPattern_SetCurrentView(This,view)	\
    ( (This)->lpVtbl -> SetCurrentView(This,view) ) 

#define IUIAutomationMultipleViewPattern_get_CurrentCurrentView(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCurrentView(This,retVal) ) 

#define IUIAutomationMultipleViewPattern_GetCurrentSupportedViews(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentSupportedViews(This,retVal) ) 

#define IUIAutomationMultipleViewPattern_get_CachedCurrentView(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCurrentView(This,retVal) ) 

#define IUIAutomationMultipleViewPattern_GetCachedSupportedViews(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedSupportedViews(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__
#define __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__

/* interface IUIAutomationRangeValuePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationRangeValuePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59213f4f-7346-49e5-b120-80555987a148")
    IUIAutomationRangeValuePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ double val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsReadOnly( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentMaximum( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentMinimum( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLargeChange( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSmallChange( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsReadOnly( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedMaximum( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedMinimum( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLargeChange( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedSmallChange( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationRangeValuePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationRangeValuePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationRangeValuePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [in] */ double val);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMaximum )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMinimum )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLargeChange )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSmallChange )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedMaximum )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedMinimum )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLargeChange )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSmallChange )( 
            __RPC__in IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        END_INTERFACE
    } IUIAutomationRangeValuePatternVtbl;

    interface IUIAutomationRangeValuePattern
    {
        CONST_VTBL struct IUIAutomationRangeValuePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationRangeValuePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationRangeValuePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationRangeValuePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationRangeValuePattern_SetValue(This,val)	\
    ( (This)->lpVtbl -> SetValue(This,val) ) 

#define IUIAutomationRangeValuePattern_get_CurrentValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentMaximum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentMinimum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentLargeChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLargeChange(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentSmallChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSmallChange(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedMaximum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedMinimum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedLargeChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLargeChange(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedSmallChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSmallChange(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationScrollPattern_INTERFACE_DEFINED__
#define __IUIAutomationScrollPattern_INTERFACE_DEFINED__

/* interface IUIAutomationScrollPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationScrollPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88f4d42a-e881-459d-a77c-73bbbb7e02dc")
    IUIAutomationScrollPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Scroll( 
            /* [in] */ enum ScrollAmount horizontalAmount,
            /* [in] */ enum ScrollAmount verticalAmount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetScrollPercent( 
            /* [in] */ double horizontalPercent,
            /* [in] */ double verticalPercent) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontalScrollPercent( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticalScrollPercent( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontalViewSize( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticalViewSize( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontallyScrollable( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticallyScrollable( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontalScrollPercent( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticalScrollPercent( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontalViewSize( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticalViewSize( 
            /* [retval][out] */ __RPC__out double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontallyScrollable( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticallyScrollable( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationScrollPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationScrollPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationScrollPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Scroll )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [in] */ enum ScrollAmount horizontalAmount,
            /* [in] */ enum ScrollAmount verticalAmount);
        
        HRESULT ( STDMETHODCALLTYPE *SetScrollPercent )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [in] */ double horizontalPercent,
            /* [in] */ double verticalPercent);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalScrollPercent )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalScrollPercent )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalViewSize )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalViewSize )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontallyScrollable )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticallyScrollable )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalScrollPercent )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalScrollPercent )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalViewSize )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalViewSize )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontallyScrollable )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticallyScrollable )( 
            __RPC__in IUIAutomationScrollPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationScrollPatternVtbl;

    interface IUIAutomationScrollPattern
    {
        CONST_VTBL struct IUIAutomationScrollPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationScrollPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationScrollPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationScrollPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationScrollPattern_Scroll(This,horizontalAmount,verticalAmount)	\
    ( (This)->lpVtbl -> Scroll(This,horizontalAmount,verticalAmount) ) 

#define IUIAutomationScrollPattern_SetScrollPercent(This,horizontalPercent,verticalPercent)	\
    ( (This)->lpVtbl -> SetScrollPercent(This,horizontalPercent,verticalPercent) ) 

#define IUIAutomationScrollPattern_get_CurrentHorizontalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentVerticalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentHorizontalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentVerticalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentHorizontallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontallyScrollable(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentVerticallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticallyScrollable(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedHorizontalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedVerticalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedHorizontalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedVerticalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedHorizontallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontallyScrollable(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedVerticallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticallyScrollable(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationScrollPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationScrollItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationScrollItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b488300f-d015-4f19-9c29-bb595e3645ef")
    IUIAutomationScrollItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ScrollIntoView( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationScrollItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationScrollItemPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationScrollItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationScrollItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )( 
            __RPC__in IUIAutomationScrollItemPattern * This);
        
        END_INTERFACE
    } IUIAutomationScrollItemPatternVtbl;

    interface IUIAutomationScrollItemPattern
    {
        CONST_VTBL struct IUIAutomationScrollItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationScrollItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationScrollItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationScrollItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationScrollItemPattern_ScrollIntoView(This)	\
    ( (This)->lpVtbl -> ScrollIntoView(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSelectionPattern_INTERFACE_DEFINED__
#define __IUIAutomationSelectionPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSelectionPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSelectionPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5ed5202e-b2ac-47a6-b638-4b0bf140d78e")
    IUIAutomationSelectionPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSelection( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanSelectMultiple( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsSelectionRequired( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSelection( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanSelectMultiple( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsSelectionRequired( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationSelectionPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationSelectionPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationSelectionPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationSelectionPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            __RPC__in IUIAutomationSelectionPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanSelectMultiple )( 
            __RPC__in IUIAutomationSelectionPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelectionRequired )( 
            __RPC__in IUIAutomationSelectionPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )( 
            __RPC__in IUIAutomationSelectionPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanSelectMultiple )( 
            __RPC__in IUIAutomationSelectionPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelectionRequired )( 
            __RPC__in IUIAutomationSelectionPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationSelectionPatternVtbl;

    interface IUIAutomationSelectionPattern
    {
        CONST_VTBL struct IUIAutomationSelectionPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSelectionPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSelectionPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSelectionPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSelectionPattern_GetCurrentSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CurrentCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanSelectMultiple(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CurrentIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsSelectionRequired(This,retVal) ) 

#define IUIAutomationSelectionPattern_GetCachedSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedSelection(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CachedCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanSelectMultiple(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CachedIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsSelectionRequired(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSelectionPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSelectionItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSelectionItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a8efa66a-0fda-421a-9194-38021f3578ea")
    IUIAutomationSelectionItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Select( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddToSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromSelection( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsSelected( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSelectionContainer( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsSelected( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedSelectionContainer( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationSelectionItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationSelectionItemPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationSelectionItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationSelectionItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            __RPC__in IUIAutomationSelectionItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )( 
            __RPC__in IUIAutomationSelectionItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )( 
            __RPC__in IUIAutomationSelectionItemPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelected )( 
            __RPC__in IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSelectionContainer )( 
            __RPC__in IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelected )( 
            __RPC__in IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSelectionContainer )( 
            __RPC__in IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);
        
        END_INTERFACE
    } IUIAutomationSelectionItemPatternVtbl;

    interface IUIAutomationSelectionItemPattern
    {
        CONST_VTBL struct IUIAutomationSelectionItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSelectionItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSelectionItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSelectionItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSelectionItemPattern_Select(This)	\
    ( (This)->lpVtbl -> Select(This) ) 

#define IUIAutomationSelectionItemPattern_AddToSelection(This)	\
    ( (This)->lpVtbl -> AddToSelection(This) ) 

#define IUIAutomationSelectionItemPattern_RemoveFromSelection(This)	\
    ( (This)->lpVtbl -> RemoveFromSelection(This) ) 

#define IUIAutomationSelectionItemPattern_get_CurrentIsSelected(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsSelected(This,retVal) ) 

#define IUIAutomationSelectionItemPattern_get_CurrentSelectionContainer(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSelectionContainer(This,retVal) ) 

#define IUIAutomationSelectionItemPattern_get_CachedIsSelected(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsSelected(This,retVal) ) 

#define IUIAutomationSelectionItemPattern_get_CachedSelectionContainer(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSelectionContainer(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__
#define __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSynchronizedInputPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSynchronizedInputPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2233be0b-afb7-448b-9fda-3b378aa5eae1")
    IUIAutomationSynchronizedInputPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartListening( 
            /* [in] */ enum SynchronizedInputType inputType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationSynchronizedInputPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationSynchronizedInputPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationSynchronizedInputPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationSynchronizedInputPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartListening )( 
            __RPC__in IUIAutomationSynchronizedInputPattern * This,
            /* [in] */ enum SynchronizedInputType inputType);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in IUIAutomationSynchronizedInputPattern * This);
        
        END_INTERFACE
    } IUIAutomationSynchronizedInputPatternVtbl;

    interface IUIAutomationSynchronizedInputPattern
    {
        CONST_VTBL struct IUIAutomationSynchronizedInputPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSynchronizedInputPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSynchronizedInputPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSynchronizedInputPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSynchronizedInputPattern_StartListening(This,inputType)	\
    ( (This)->lpVtbl -> StartListening(This,inputType) ) 

#define IUIAutomationSynchronizedInputPattern_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTablePattern_INTERFACE_DEFINED__
#define __IUIAutomationTablePattern_INTERFACE_DEFINED__

/* interface IUIAutomationTablePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTablePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("620e691c-ea96-4710-a850-754b24ce2417")
    IUIAutomationTablePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentRowHeaders( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentColumnHeaders( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowOrColumnMajor( 
            /* [retval][out] */ __RPC__out enum RowOrColumnMajor *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedRowHeaders( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedColumnHeaders( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowOrColumnMajor( 
            /* [retval][out] */ __RPC__out enum RowOrColumnMajor *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTablePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTablePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTablePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTablePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentRowHeaders )( 
            __RPC__in IUIAutomationTablePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentColumnHeaders )( 
            __RPC__in IUIAutomationTablePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowOrColumnMajor )( 
            __RPC__in IUIAutomationTablePattern * This,
            /* [retval][out] */ __RPC__out enum RowOrColumnMajor *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedRowHeaders )( 
            __RPC__in IUIAutomationTablePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedColumnHeaders )( 
            __RPC__in IUIAutomationTablePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowOrColumnMajor )( 
            __RPC__in IUIAutomationTablePattern * This,
            /* [retval][out] */ __RPC__out enum RowOrColumnMajor *retVal);
        
        END_INTERFACE
    } IUIAutomationTablePatternVtbl;

    interface IUIAutomationTablePattern
    {
        CONST_VTBL struct IUIAutomationTablePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTablePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTablePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTablePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTablePattern_GetCurrentRowHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentRowHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_GetCurrentColumnHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentColumnHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_get_CurrentRowOrColumnMajor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowOrColumnMajor(This,retVal) ) 

#define IUIAutomationTablePattern_GetCachedRowHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedRowHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_GetCachedColumnHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedColumnHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_get_CachedRowOrColumnMajor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowOrColumnMajor(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTablePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTableItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationTableItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTableItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTableItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0b964eb3-ef2e-4464-9c79-61d61737a27e")
    IUIAutomationTableItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentRowHeaderItems( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentColumnHeaderItems( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedRowHeaderItems( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedColumnHeaderItems( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTableItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTableItemPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTableItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTableItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentRowHeaderItems )( 
            __RPC__in IUIAutomationTableItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentColumnHeaderItems )( 
            __RPC__in IUIAutomationTableItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedRowHeaderItems )( 
            __RPC__in IUIAutomationTableItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedColumnHeaderItems )( 
            __RPC__in IUIAutomationTableItemPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        
        END_INTERFACE
    } IUIAutomationTableItemPatternVtbl;

    interface IUIAutomationTableItemPattern
    {
        CONST_VTBL struct IUIAutomationTableItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTableItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTableItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTableItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTableItemPattern_GetCurrentRowHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentRowHeaderItems(This,retVal) ) 

#define IUIAutomationTableItemPattern_GetCurrentColumnHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentColumnHeaderItems(This,retVal) ) 

#define IUIAutomationTableItemPattern_GetCachedRowHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedRowHeaderItems(This,retVal) ) 

#define IUIAutomationTableItemPattern_GetCachedColumnHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedColumnHeaderItems(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTableItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTogglePattern_INTERFACE_DEFINED__
#define __IUIAutomationTogglePattern_INTERFACE_DEFINED__

/* interface IUIAutomationTogglePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTogglePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94cf8058-9b8d-4ab9-8bfd-4cd0a33c8c70")
    IUIAutomationTogglePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Toggle( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentToggleState( 
            /* [retval][out] */ __RPC__out enum ToggleState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedToggleState( 
            /* [retval][out] */ __RPC__out enum ToggleState *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTogglePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTogglePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTogglePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTogglePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Toggle )( 
            __RPC__in IUIAutomationTogglePattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentToggleState )( 
            __RPC__in IUIAutomationTogglePattern * This,
            /* [retval][out] */ __RPC__out enum ToggleState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedToggleState )( 
            __RPC__in IUIAutomationTogglePattern * This,
            /* [retval][out] */ __RPC__out enum ToggleState *retVal);
        
        END_INTERFACE
    } IUIAutomationTogglePatternVtbl;

    interface IUIAutomationTogglePattern
    {
        CONST_VTBL struct IUIAutomationTogglePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTogglePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTogglePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTogglePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTogglePattern_Toggle(This)	\
    ( (This)->lpVtbl -> Toggle(This) ) 

#define IUIAutomationTogglePattern_get_CurrentToggleState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentToggleState(This,retVal) ) 

#define IUIAutomationTogglePattern_get_CachedToggleState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedToggleState(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTogglePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTransformPattern_INTERFACE_DEFINED__
#define __IUIAutomationTransformPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTransformPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTransformPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a9b55844-a55d-4ef0-926d-569c16ff89bb")
    IUIAutomationTransformPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ double x,
            /* [in] */ double y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resize( 
            /* [in] */ double width,
            /* [in] */ double height) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rotate( 
            /* [in] */ double degrees) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanMove( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanResize( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanRotate( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanMove( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanResize( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanRotate( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTransformPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTransformPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTransformPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [in] */ double x,
            /* [in] */ double y);
        
        HRESULT ( STDMETHODCALLTYPE *Resize )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [in] */ double width,
            /* [in] */ double height);
        
        HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [in] */ double degrees);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMove )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanResize )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanRotate )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanMove )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanResize )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanRotate )( 
            __RPC__in IUIAutomationTransformPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationTransformPatternVtbl;

    interface IUIAutomationTransformPattern
    {
        CONST_VTBL struct IUIAutomationTransformPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTransformPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTransformPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTransformPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTransformPattern_Move(This,x,y)	\
    ( (This)->lpVtbl -> Move(This,x,y) ) 

#define IUIAutomationTransformPattern_Resize(This,width,height)	\
    ( (This)->lpVtbl -> Resize(This,width,height) ) 

#define IUIAutomationTransformPattern_Rotate(This,degrees)	\
    ( (This)->lpVtbl -> Rotate(This,degrees) ) 

#define IUIAutomationTransformPattern_get_CurrentCanMove(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanMove(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CurrentCanResize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanResize(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CurrentCanRotate(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanRotate(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CachedCanMove(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanMove(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CachedCanResize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanResize(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CachedCanRotate(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanRotate(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTransformPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationValuePattern_INTERFACE_DEFINED__
#define __IUIAutomationValuePattern_INTERFACE_DEFINED__

/* interface IUIAutomationValuePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationValuePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a94cd8b1-0844-4cd6-9d2d-640537ab39e9")
    IUIAutomationValuePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ __RPC__in BSTR val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsReadOnly( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsReadOnly( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationValuePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationValuePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationValuePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationValuePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in IUIAutomationValuePattern * This,
            /* [in] */ __RPC__in BSTR val);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            __RPC__in IUIAutomationValuePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )( 
            __RPC__in IUIAutomationValuePattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            __RPC__in IUIAutomationValuePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )( 
            __RPC__in IUIAutomationValuePattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationValuePatternVtbl;

    interface IUIAutomationValuePattern
    {
        CONST_VTBL struct IUIAutomationValuePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationValuePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationValuePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationValuePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationValuePattern_SetValue(This,val)	\
    ( (This)->lpVtbl -> SetValue(This,val) ) 

#define IUIAutomationValuePattern_get_CurrentValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) ) 

#define IUIAutomationValuePattern_get_CurrentIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) ) 

#define IUIAutomationValuePattern_get_CachedValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) ) 

#define IUIAutomationValuePattern_get_CachedIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationValuePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationWindowPattern_INTERFACE_DEFINED__
#define __IUIAutomationWindowPattern_INTERFACE_DEFINED__

/* interface IUIAutomationWindowPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationWindowPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0faef453-9208-43ef-bbb2-3b485177864f")
    IUIAutomationWindowPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WaitForInputIdle( 
            /* [in] */ int milliseconds,
            /* [retval][out] */ __RPC__out BOOL *success) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWindowVisualState( 
            /* [in] */ enum WindowVisualState state) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanMaximize( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanMinimize( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsModal( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsTopmost( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentWindowVisualState( 
            /* [retval][out] */ __RPC__out enum WindowVisualState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentWindowInteractionState( 
            /* [retval][out] */ __RPC__out enum WindowInteractionState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanMaximize( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanMinimize( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsModal( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsTopmost( 
            /* [retval][out] */ __RPC__out BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedWindowVisualState( 
            /* [retval][out] */ __RPC__out enum WindowVisualState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedWindowInteractionState( 
            /* [retval][out] */ __RPC__out enum WindowInteractionState *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationWindowPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationWindowPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationWindowPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IUIAutomationWindowPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *WaitForInputIdle )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [in] */ int milliseconds,
            /* [retval][out] */ __RPC__out BOOL *success);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindowVisualState )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [in] */ enum WindowVisualState state);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMaximize )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMinimize )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsModal )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsTopmost )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWindowVisualState )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out enum WindowVisualState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWindowInteractionState )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out enum WindowInteractionState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanMaximize )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanMinimize )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsModal )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsTopmost )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedWindowVisualState )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out enum WindowVisualState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedWindowInteractionState )( 
            __RPC__in IUIAutomationWindowPattern * This,
            /* [retval][out] */ __RPC__out enum WindowInteractionState *retVal);
        
        END_INTERFACE
    } IUIAutomationWindowPatternVtbl;

    interface IUIAutomationWindowPattern
    {
        CONST_VTBL struct IUIAutomationWindowPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationWindowPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationWindowPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationWindowPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationWindowPattern_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IUIAutomationWindowPattern_WaitForInputIdle(This,milliseconds,success)	\
    ( (This)->lpVtbl -> WaitForInputIdle(This,milliseconds,success) ) 

#define IUIAutomationWindowPattern_SetWindowVisualState(This,state)	\
    ( (This)->lpVtbl -> SetWindowVisualState(This,state) ) 

#define IUIAutomationWindowPattern_get_CurrentCanMaximize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanMaximize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentCanMinimize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanMinimize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentIsModal(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsModal(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentIsTopmost(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsTopmost(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentWindowVisualState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentWindowVisualState(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentWindowInteractionState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentWindowInteractionState(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedCanMaximize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanMaximize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedCanMinimize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanMinimize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedIsModal(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsModal(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedIsTopmost(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsTopmost(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedWindowVisualState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedWindowVisualState(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedWindowInteractionState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedWindowInteractionState(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationWindowPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextRange_INTERFACE_DEFINED__
#define __IUIAutomationTextRange_INTERFACE_DEFINED__

/* interface IUIAutomationTextRange */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a543cc6a-f4ae-494b-8239-c814481187a8")
    IUIAutomationTextRange : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **clonedRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ __RPC__in_opt IUIAutomationTextRange *range,
            /* [retval][out] */ __RPC__out BOOL *areSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareEndpoints( 
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ __RPC__in_opt IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint,
            /* [retval][out] */ __RPC__out int *compValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExpandToEnclosingUnit( 
            /* [in] */ enum TextUnit textUnit) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAttribute( 
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [in] */ VARIANT val,
            /* [in] */ BOOL backward,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindText( 
            /* [in] */ __RPC__in BSTR text,
            /* [in] */ BOOL backward,
            /* [in] */ BOOL ignoreCase,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributeValue( 
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [retval][out] */ __RPC__out VARIANT *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBoundingRectangles( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *boundingRects) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnclosingElement( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **enclosingElement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ int maxLength,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *text) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ __RPC__out int *moved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveEndpointByUnit( 
            /* [in] */ enum TextPatternRangeEndpoint endpoint,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ __RPC__out int *moved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveEndpointByRange( 
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ __RPC__in_opt IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Select( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddToSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScrollIntoView( 
            /* [in] */ BOOL alignToTop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **children) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTextRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **clonedRange);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ __RPC__in_opt IUIAutomationTextRange *range,
            /* [retval][out] */ __RPC__out BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ __RPC__in_opt IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint,
            /* [retval][out] */ __RPC__out int *compValue);
        
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ enum TextUnit textUnit);
        
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [in] */ VARIANT val,
            /* [in] */ BOOL backward,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindText )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ __RPC__in BSTR text,
            /* [in] */ BOOL backward,
            /* [in] */ BOOL ignoreCase,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [retval][out] */ __RPC__out VARIANT *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *boundingRects);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **enclosingElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ int maxLength,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *text);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ __RPC__out int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ enum TextPatternRangeEndpoint endpoint,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ __RPC__out int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ __RPC__in_opt IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            __RPC__in IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )( 
            __RPC__in IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )( 
            __RPC__in IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [in] */ BOOL alignToTop);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            __RPC__in IUIAutomationTextRange * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **children);
        
        END_INTERFACE
    } IUIAutomationTextRangeVtbl;

    interface IUIAutomationTextRange
    {
        CONST_VTBL struct IUIAutomationTextRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextRange_Clone(This,clonedRange)	\
    ( (This)->lpVtbl -> Clone(This,clonedRange) ) 

#define IUIAutomationTextRange_Compare(This,range,areSame)	\
    ( (This)->lpVtbl -> Compare(This,range,areSame) ) 

#define IUIAutomationTextRange_CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue)	\
    ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) ) 

#define IUIAutomationTextRange_ExpandToEnclosingUnit(This,textUnit)	\
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) ) 

#define IUIAutomationTextRange_FindAttribute(This,attr,val,backward,found)	\
    ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) ) 

#define IUIAutomationTextRange_FindText(This,text,backward,ignoreCase,found)	\
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) ) 

#define IUIAutomationTextRange_GetAttributeValue(This,attr,value)	\
    ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) ) 

#define IUIAutomationTextRange_GetBoundingRectangles(This,boundingRects)	\
    ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) ) 

#define IUIAutomationTextRange_GetEnclosingElement(This,enclosingElement)	\
    ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) ) 

#define IUIAutomationTextRange_GetText(This,maxLength,text)	\
    ( (This)->lpVtbl -> GetText(This,maxLength,text) ) 

#define IUIAutomationTextRange_Move(This,unit,count,moved)	\
    ( (This)->lpVtbl -> Move(This,unit,count,moved) ) 

#define IUIAutomationTextRange_MoveEndpointByUnit(This,endpoint,unit,count,moved)	\
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) ) 

#define IUIAutomationTextRange_MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint)	\
    ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) ) 

#define IUIAutomationTextRange_Select(This)	\
    ( (This)->lpVtbl -> Select(This) ) 

#define IUIAutomationTextRange_AddToSelection(This)	\
    ( (This)->lpVtbl -> AddToSelection(This) ) 

#define IUIAutomationTextRange_RemoveFromSelection(This)	\
    ( (This)->lpVtbl -> RemoveFromSelection(This) ) 

#define IUIAutomationTextRange_ScrollIntoView(This,alignToTop)	\
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) ) 

#define IUIAutomationTextRange_GetChildren(This,children)	\
    ( (This)->lpVtbl -> GetChildren(This,children) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextRange_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextRangeArray_INTERFACE_DEFINED__
#define __IUIAutomationTextRangeArray_INTERFACE_DEFINED__

/* interface IUIAutomationTextRangeArray */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextRangeArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ce4ae76a-e717-4c98-81ea-47371d028eb6")
    IUIAutomationTextRangeArray : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ __RPC__out int *length) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **element) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextRangeArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTextRangeArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTextRangeArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTextRangeArray * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            __RPC__in IUIAutomationTextRangeArray * This,
            /* [retval][out] */ __RPC__out int *length);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            __RPC__in IUIAutomationTextRangeArray * This,
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **element);
        
        END_INTERFACE
    } IUIAutomationTextRangeArrayVtbl;

    interface IUIAutomationTextRangeArray
    {
        CONST_VTBL struct IUIAutomationTextRangeArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextRangeArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextRangeArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextRangeArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextRangeArray_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 

#define IUIAutomationTextRangeArray_GetElement(This,index,element)	\
    ( (This)->lpVtbl -> GetElement(This,index,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextRangeArray_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextPattern_INTERFACE_DEFINED__
#define __IUIAutomationTextPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTextPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32eba289-3583-42c9-9c59-3b6d9a1e9b6a")
    IUIAutomationTextPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RangeFromPoint( 
            /* [in] */ POINT pt,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **range) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RangeFromChild( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *child,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **range) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelection( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVisibleRanges( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DocumentRange( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **range) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SupportedTextSelection( 
            /* [retval][out] */ __RPC__out enum SupportedTextSelection *supportedTextSelection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationTextPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationTextPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationTextPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )( 
            __RPC__in IUIAutomationTextPattern * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )( 
            __RPC__in IUIAutomationTextPattern * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *child,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            __RPC__in IUIAutomationTextPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
        
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )( 
            __RPC__in IUIAutomationTextPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )( 
            __RPC__in IUIAutomationTextPattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTextRange **range);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )( 
            __RPC__in IUIAutomationTextPattern * This,
            /* [retval][out] */ __RPC__out enum SupportedTextSelection *supportedTextSelection);
        
        END_INTERFACE
    } IUIAutomationTextPatternVtbl;

    interface IUIAutomationTextPattern
    {
        CONST_VTBL struct IUIAutomationTextPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextPattern_RangeFromPoint(This,pt,range)	\
    ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) ) 

#define IUIAutomationTextPattern_RangeFromChild(This,child,range)	\
    ( (This)->lpVtbl -> RangeFromChild(This,child,range) ) 

#define IUIAutomationTextPattern_GetSelection(This,ranges)	\
    ( (This)->lpVtbl -> GetSelection(This,ranges) ) 

#define IUIAutomationTextPattern_GetVisibleRanges(This,ranges)	\
    ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) ) 

#define IUIAutomationTextPattern_get_DocumentRange(This,range)	\
    ( (This)->lpVtbl -> get_DocumentRange(This,range) ) 

#define IUIAutomationTextPattern_get_SupportedTextSelection(This,supportedTextSelection)	\
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__
#define __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__

/* interface IUIAutomationLegacyIAccessiblePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationLegacyIAccessiblePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("828055ad-355b-4435-86d5-3b51c14a9b1b")
    IUIAutomationLegacyIAccessiblePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Select( 
            long flagsSelect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoDefaultAction( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            __RPC__in LPCWSTR szValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentChildId( 
            /* [retval][out] */ __RPC__out int *pRetVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDescription( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDescription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRole( 
            /* [retval][out] */ __RPC__out DWORD *pdwRole) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentState( 
            /* [retval][out] */ __RPC__out DWORD *pdwState) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHelp( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszHelp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentKeyboardShortcut( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszKeyboardShortcut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSelection( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **pvarSelectedChildren) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDefaultAction( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDefaultAction) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedChildId( 
            /* [retval][out] */ __RPC__out int *pRetVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDescription( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDescription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRole( 
            /* [retval][out] */ __RPC__out DWORD *pdwRole) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedState( 
            /* [retval][out] */ __RPC__out DWORD *pdwState) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHelp( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszHelp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedKeyboardShortcut( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszKeyboardShortcut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSelection( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **pvarSelectedChildren) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDefaultAction( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDefaultAction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIAccessible( 
            /* [retval][out] */ __RPC__deref_out_opt IAccessible **ppAccessible) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationLegacyIAccessiblePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            long flagsSelect);
        
        HRESULT ( STDMETHODCALLTYPE *DoDefaultAction )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            __RPC__in LPCWSTR szValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentChildId )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__out int *pRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescription )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDescription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRole )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__out DWORD *pdwRole);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentState )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__out DWORD *pdwState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelp )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszHelp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentKeyboardShortcut )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszKeyboardShortcut);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **pvarSelectedChildren);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDefaultAction )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDefaultAction);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedChildId )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__out int *pRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescription )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDescription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRole )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__out DWORD *pdwRole);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedState )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__out DWORD *pdwState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelp )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszHelp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedKeyboardShortcut )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszKeyboardShortcut);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **pvarSelectedChildren);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDefaultAction )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszDefaultAction);
        
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )( 
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ __RPC__deref_out_opt IAccessible **ppAccessible);
        
        END_INTERFACE
    } IUIAutomationLegacyIAccessiblePatternVtbl;

    interface IUIAutomationLegacyIAccessiblePattern
    {
        CONST_VTBL struct IUIAutomationLegacyIAccessiblePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationLegacyIAccessiblePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationLegacyIAccessiblePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationLegacyIAccessiblePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationLegacyIAccessiblePattern_Select(This,flagsSelect)	\
    ( (This)->lpVtbl -> Select(This,flagsSelect) ) 

#define IUIAutomationLegacyIAccessiblePattern_DoDefaultAction(This)	\
    ( (This)->lpVtbl -> DoDefaultAction(This) ) 

#define IUIAutomationLegacyIAccessiblePattern_SetValue(This,szValue)	\
    ( (This)->lpVtbl -> SetValue(This,szValue) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentChildId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_CurrentChildId(This,pRetVal) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentName(This,pszName)	\
    ( (This)->lpVtbl -> get_CurrentName(This,pszName) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentValue(This,pszValue)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,pszValue) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentDescription(This,pszDescription)	\
    ( (This)->lpVtbl -> get_CurrentDescription(This,pszDescription) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentRole(This,pdwRole)	\
    ( (This)->lpVtbl -> get_CurrentRole(This,pdwRole) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentState(This,pdwState)	\
    ( (This)->lpVtbl -> get_CurrentState(This,pdwState) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentHelp(This,pszHelp)	\
    ( (This)->lpVtbl -> get_CurrentHelp(This,pszHelp) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentKeyboardShortcut(This,pszKeyboardShortcut)	\
    ( (This)->lpVtbl -> get_CurrentKeyboardShortcut(This,pszKeyboardShortcut) ) 

#define IUIAutomationLegacyIAccessiblePattern_GetCurrentSelection(This,pvarSelectedChildren)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,pvarSelectedChildren) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentDefaultAction(This,pszDefaultAction)	\
    ( (This)->lpVtbl -> get_CurrentDefaultAction(This,pszDefaultAction) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedChildId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_CachedChildId(This,pRetVal) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedName(This,pszName)	\
    ( (This)->lpVtbl -> get_CachedName(This,pszName) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedValue(This,pszValue)	\
    ( (This)->lpVtbl -> get_CachedValue(This,pszValue) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedDescription(This,pszDescription)	\
    ( (This)->lpVtbl -> get_CachedDescription(This,pszDescription) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedRole(This,pdwRole)	\
    ( (This)->lpVtbl -> get_CachedRole(This,pdwRole) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedState(This,pdwState)	\
    ( (This)->lpVtbl -> get_CachedState(This,pdwState) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedHelp(This,pszHelp)	\
    ( (This)->lpVtbl -> get_CachedHelp(This,pszHelp) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedKeyboardShortcut(This,pszKeyboardShortcut)	\
    ( (This)->lpVtbl -> get_CachedKeyboardShortcut(This,pszKeyboardShortcut) ) 

#define IUIAutomationLegacyIAccessiblePattern_GetCachedSelection(This,pvarSelectedChildren)	\
    ( (This)->lpVtbl -> GetCachedSelection(This,pvarSelectedChildren) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedDefaultAction(This,pszDefaultAction)	\
    ( (This)->lpVtbl -> get_CachedDefaultAction(This,pszDefaultAction) ) 

#define IUIAutomationLegacyIAccessiblePattern_GetIAccessible(This,ppAccessible)	\
    ( (This)->lpVtbl -> GetIAccessible(This,ppAccessible) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__
#define __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__

/* interface IUIAutomationItemContainerPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationItemContainerPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c690fdb2-27a8-423c-812d-429773c9084e")
    IUIAutomationItemContainerPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindItemByProperty( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *pStartAfter,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **pFound) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationItemContainerPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationItemContainerPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationItemContainerPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationItemContainerPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *FindItemByProperty )( 
            __RPC__in IUIAutomationItemContainerPattern * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *pStartAfter,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **pFound);
        
        END_INTERFACE
    } IUIAutomationItemContainerPatternVtbl;

    interface IUIAutomationItemContainerPattern
    {
        CONST_VTBL struct IUIAutomationItemContainerPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationItemContainerPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationItemContainerPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationItemContainerPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationItemContainerPattern_FindItemByProperty(This,pStartAfter,propertyId,value,pFound)	\
    ( (This)->lpVtbl -> FindItemByProperty(This,pStartAfter,propertyId,value,pFound) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationVirtualizedItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationVirtualizedItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ba3d7a6-04cf-4f11-8793-a8d1cde9969f")
    IUIAutomationVirtualizedItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Realize( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationVirtualizedItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationVirtualizedItemPattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationVirtualizedItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationVirtualizedItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Realize )( 
            __RPC__in IUIAutomationVirtualizedItemPattern * This);
        
        END_INTERFACE
    } IUIAutomationVirtualizedItemPatternVtbl;

    interface IUIAutomationVirtualizedItemPattern
    {
        CONST_VTBL struct IUIAutomationVirtualizedItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationVirtualizedItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationVirtualizedItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationVirtualizedItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationVirtualizedItemPattern_Realize(This)	\
    ( (This)->lpVtbl -> Realize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationProxyFactory_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactory_INTERFACE_DEFINED__

/* interface IUIAutomationProxyFactory */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationProxyFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85b94ecd-849d-42b6-b94d-d6db23fdf5a4")
    IUIAutomationProxyFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateProvider( 
            /* [in] */ __RPC__in UIA_HWND hwnd,
            /* [in] */ LONG idObject,
            /* [in] */ LONG idChild,
            /* [retval][out] */ __RPC__deref_out_opt IRawElementProviderSimple **provider) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProxyFactoryId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *factoryId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationProxyFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationProxyFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationProxyFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationProxyFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProvider )( 
            __RPC__in IUIAutomationProxyFactory * This,
            /* [in] */ __RPC__in UIA_HWND hwnd,
            /* [in] */ LONG idObject,
            /* [in] */ LONG idChild,
            /* [retval][out] */ __RPC__deref_out_opt IRawElementProviderSimple **provider);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryId )( 
            __RPC__in IUIAutomationProxyFactory * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *factoryId);
        
        END_INTERFACE
    } IUIAutomationProxyFactoryVtbl;

    interface IUIAutomationProxyFactory
    {
        CONST_VTBL struct IUIAutomationProxyFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationProxyFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationProxyFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationProxyFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationProxyFactory_CreateProvider(This,hwnd,idObject,idChild,provider)	\
    ( (This)->lpVtbl -> CreateProvider(This,hwnd,idObject,idChild,provider) ) 

#define IUIAutomationProxyFactory_get_ProxyFactoryId(This,factoryId)	\
    ( (This)->lpVtbl -> get_ProxyFactoryId(This,factoryId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationProxyFactory_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__

/* interface IUIAutomationProxyFactoryEntry */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationProxyFactoryEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d50e472e-b64b-490c-bca1-d30696f9f289")
    IUIAutomationProxyFactoryEntry : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProxyFactory( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactory **factory) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ClassName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *className) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *imageName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllowSubstringMatch( 
            /* [retval][out] */ __RPC__out BOOL *allowSubstringMatch) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CanCheckBaseClass( 
            /* [retval][out] */ __RPC__out BOOL *canCheckBaseClass) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NeedsAdviseEvents( 
            /* [retval][out] */ __RPC__out BOOL *adviseEvents) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ClassName( 
            /* [in] */ __RPC__in LPCWSTR className) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ImageName( 
            /* [in] */ __RPC__in LPCWSTR imageName) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllowSubstringMatch( 
            /* [in] */ BOOL allowSubstringMatch) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CanCheckBaseClass( 
            /* [in] */ BOOL canCheckBaseClass) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NeedsAdviseEvents( 
            /* [in] */ BOOL adviseEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWinEventsForAutomationEvent( 
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ __RPC__in SAFEARRAY * winEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWinEventsForAutomationEvent( 
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *winEvents) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationProxyFactoryEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactory )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactory **factory);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *className);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageName )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *imageName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowSubstringMatch )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ __RPC__out BOOL *allowSubstringMatch);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanCheckBaseClass )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ __RPC__out BOOL *canCheckBaseClass);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeedsAdviseEvents )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ __RPC__out BOOL *adviseEvents);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClassName )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ __RPC__in LPCWSTR className);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageName )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ __RPC__in LPCWSTR imageName);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSubstringMatch )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ BOOL allowSubstringMatch);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CanCheckBaseClass )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ BOOL canCheckBaseClass);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeedsAdviseEvents )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ BOOL adviseEvents);
        
        HRESULT ( STDMETHODCALLTYPE *SetWinEventsForAutomationEvent )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ __RPC__in SAFEARRAY * winEvents);
        
        HRESULT ( STDMETHODCALLTYPE *GetWinEventsForAutomationEvent )( 
            __RPC__in IUIAutomationProxyFactoryEntry * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *winEvents);
        
        END_INTERFACE
    } IUIAutomationProxyFactoryEntryVtbl;

    interface IUIAutomationProxyFactoryEntry
    {
        CONST_VTBL struct IUIAutomationProxyFactoryEntryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationProxyFactoryEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationProxyFactoryEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationProxyFactoryEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationProxyFactoryEntry_get_ProxyFactory(This,factory)	\
    ( (This)->lpVtbl -> get_ProxyFactory(This,factory) ) 

#define IUIAutomationProxyFactoryEntry_get_ClassName(This,className)	\
    ( (This)->lpVtbl -> get_ClassName(This,className) ) 

#define IUIAutomationProxyFactoryEntry_get_ImageName(This,imageName)	\
    ( (This)->lpVtbl -> get_ImageName(This,imageName) ) 

#define IUIAutomationProxyFactoryEntry_get_AllowSubstringMatch(This,allowSubstringMatch)	\
    ( (This)->lpVtbl -> get_AllowSubstringMatch(This,allowSubstringMatch) ) 

#define IUIAutomationProxyFactoryEntry_get_CanCheckBaseClass(This,canCheckBaseClass)	\
    ( (This)->lpVtbl -> get_CanCheckBaseClass(This,canCheckBaseClass) ) 

#define IUIAutomationProxyFactoryEntry_get_NeedsAdviseEvents(This,adviseEvents)	\
    ( (This)->lpVtbl -> get_NeedsAdviseEvents(This,adviseEvents) ) 

#define IUIAutomationProxyFactoryEntry_put_ClassName(This,className)	\
    ( (This)->lpVtbl -> put_ClassName(This,className) ) 

#define IUIAutomationProxyFactoryEntry_put_ImageName(This,imageName)	\
    ( (This)->lpVtbl -> put_ImageName(This,imageName) ) 

#define IUIAutomationProxyFactoryEntry_put_AllowSubstringMatch(This,allowSubstringMatch)	\
    ( (This)->lpVtbl -> put_AllowSubstringMatch(This,allowSubstringMatch) ) 

#define IUIAutomationProxyFactoryEntry_put_CanCheckBaseClass(This,canCheckBaseClass)	\
    ( (This)->lpVtbl -> put_CanCheckBaseClass(This,canCheckBaseClass) ) 

#define IUIAutomationProxyFactoryEntry_put_NeedsAdviseEvents(This,adviseEvents)	\
    ( (This)->lpVtbl -> put_NeedsAdviseEvents(This,adviseEvents) ) 

#define IUIAutomationProxyFactoryEntry_SetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents)	\
    ( (This)->lpVtbl -> SetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) ) 

#define IUIAutomationProxyFactoryEntry_GetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents)	\
    ( (This)->lpVtbl -> GetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__

/* interface IUIAutomationProxyFactoryMapping */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationProxyFactoryMapping;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09e31e18-872d-4873-93d1-1e541ec133fd")
    IUIAutomationProxyFactoryMapping : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out UINT *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTable( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *table) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEntry( 
            /* [in] */ UINT index,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **entry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTable( 
            /* [in] */ __RPC__in_opt SAFEARRAY * factoryList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertEntries( 
            /* [in] */ UINT before,
            /* [in] */ __RPC__in_opt SAFEARRAY * factoryList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertEntry( 
            /* [in] */ UINT before,
            /* [in] */ __RPC__in_opt IUIAutomationProxyFactoryEntry *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveEntry( 
            /* [in] */ UINT index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearTable( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestoreDefaultTable( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationProxyFactoryMappingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [retval][out] */ __RPC__out UINT *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetTable )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *table);
        
        HRESULT ( STDMETHODCALLTYPE *GetEntry )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT index,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **entry);
        
        HRESULT ( STDMETHODCALLTYPE *SetTable )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [in] */ __RPC__in_opt SAFEARRAY * factoryList);
        
        HRESULT ( STDMETHODCALLTYPE *InsertEntries )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT before,
            /* [in] */ __RPC__in_opt SAFEARRAY * factoryList);
        
        HRESULT ( STDMETHODCALLTYPE *InsertEntry )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT before,
            /* [in] */ __RPC__in_opt IUIAutomationProxyFactoryEntry *factory);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveEntry )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT index);
        
        HRESULT ( STDMETHODCALLTYPE *ClearTable )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestoreDefaultTable )( 
            __RPC__in IUIAutomationProxyFactoryMapping * This);
        
        END_INTERFACE
    } IUIAutomationProxyFactoryMappingVtbl;

    interface IUIAutomationProxyFactoryMapping
    {
        CONST_VTBL struct IUIAutomationProxyFactoryMappingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationProxyFactoryMapping_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationProxyFactoryMapping_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationProxyFactoryMapping_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationProxyFactoryMapping_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IUIAutomationProxyFactoryMapping_GetTable(This,table)	\
    ( (This)->lpVtbl -> GetTable(This,table) ) 

#define IUIAutomationProxyFactoryMapping_GetEntry(This,index,entry)	\
    ( (This)->lpVtbl -> GetEntry(This,index,entry) ) 

#define IUIAutomationProxyFactoryMapping_SetTable(This,factoryList)	\
    ( (This)->lpVtbl -> SetTable(This,factoryList) ) 

#define IUIAutomationProxyFactoryMapping_InsertEntries(This,before,factoryList)	\
    ( (This)->lpVtbl -> InsertEntries(This,before,factoryList) ) 

#define IUIAutomationProxyFactoryMapping_InsertEntry(This,before,factory)	\
    ( (This)->lpVtbl -> InsertEntry(This,before,factory) ) 

#define IUIAutomationProxyFactoryMapping_RemoveEntry(This,index)	\
    ( (This)->lpVtbl -> RemoveEntry(This,index) ) 

#define IUIAutomationProxyFactoryMapping_ClearTable(This)	\
    ( (This)->lpVtbl -> ClearTable(This) ) 

#define IUIAutomationProxyFactoryMapping_RestoreDefaultTable(This)	\
    ( (This)->lpVtbl -> RestoreDefaultTable(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__ */


#ifndef __IUIAutomation_INTERFACE_DEFINED__
#define __IUIAutomation_INTERFACE_DEFINED__

/* interface IUIAutomation */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30cbe57d-d9d0-452a-ab13-7ac5ac4825ee")
    IUIAutomation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CompareElements( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *el1,
            /* [in] */ __RPC__in_opt IUIAutomationElement *el2,
            /* [retval][out] */ __RPC__out BOOL *areSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareRuntimeIds( 
            /* [in] */ __RPC__in SAFEARRAY * runtimeId1,
            /* [in] */ __RPC__in SAFEARRAY * runtimeId2,
            /* [retval][out] */ __RPC__out BOOL *areSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootElement( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **root) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromHandle( 
            /* [in] */ __RPC__in UIA_HWND hwnd,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromPoint( 
            /* [in] */ POINT pt,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFocusedElement( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **root) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromHandleBuildCache( 
            /* [in] */ __RPC__in UIA_HWND hwnd,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromPointBuildCache( 
            /* [in] */ POINT pt,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFocusedElementBuildCache( 
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTreeWalker( 
            /* [in] */ __RPC__in_opt IUIAutomationCondition *pCondition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlViewWalker( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentViewWalker( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawViewWalker( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawViewCondition( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlViewCondition( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentViewCondition( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCacheRequest( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrueCondition( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFalseCondition( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePropertyCondition( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePropertyConditionEx( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAndCondition( 
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition1,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition2,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAndConditionFromArray( 
            /* [in] */ __RPC__in_opt SAFEARRAY * conditions,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAndConditionFromNativeArray( 
            /* [size_is][in] */ __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateOrCondition( 
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition1,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition2,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateOrConditionFromArray( 
            /* [in] */ __RPC__in_opt SAFEARRAY * conditions,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateOrConditionFromNativeArray( 
            /* [size_is][in] */ __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNotCondition( 
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddAutomationEventHandler( 
            /* [in] */ EVENTID eventId,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAutomationEventHandler( 
            /* [in] */ EVENTID eventId,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPropertyChangedEventHandlerNativeArray( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
            /* [in] */ int propertyCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPropertyChangedEventHandler( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ __RPC__in SAFEARRAY * propertyArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemovePropertyChangedEventHandler( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddStructureChangedEventHandler( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveStructureChangedEventHandler( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFocusChangedEventHandler( 
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFocusChangedEventHandler( 
            /* [in] */ __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllEventHandlers( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntNativeArrayToSafeArray( 
            /* [size_is][in] */ __RPC__in_ecount_full(arrayCount) int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *safeArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntSafeArrayToNativeArray( 
            /* [in] */ __RPC__in SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
            /* [retval][out] */ __RPC__out int *arrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RectToVariant( 
            /* [in] */ RECT rc,
            /* [retval][out] */ __RPC__out VARIANT *var) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE VariantToRect( 
            /* [in] */ VARIANT var,
            /* [retval][out] */ __RPC__out RECT *rc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeArrayToRectNativeArray( 
            /* [in] */ __RPC__in SAFEARRAY * rects,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
            /* [retval][out] */ __RPC__out int *rectArrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateProxyFactoryEntry( 
            /* [in] */ __RPC__in_opt IUIAutomationProxyFactory *factory,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProxyFactoryMapping( 
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyProgrammaticName( 
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPatternProgrammaticName( 
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PollForPotentialSupportedPatterns( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *pElement,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *patternIds,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *patternNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PollForPotentialSupportedProperties( 
            /* [in] */ __RPC__in_opt IUIAutomationElement *pElement,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *propertyIds,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *propertyNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckNotSupported( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ __RPC__out BOOL *isNotSupported) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReservedNotSupportedValue( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **notSupportedValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReservedMixedAttributeValue( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **mixedAttributeValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromIAccessible( 
            /* [in] */ __RPC__in_opt IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromIAccessibleBuildCache( 
            /* [in] */ __RPC__in_opt IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUIAutomationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIAutomation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIAutomation * This);
        
        HRESULT ( STDMETHODCALLTYPE *CompareElements )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *el1,
            /* [in] */ __RPC__in_opt IUIAutomationElement *el2,
            /* [retval][out] */ __RPC__out BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in SAFEARRAY * runtimeId1,
            /* [in] */ __RPC__in SAFEARRAY * runtimeId2,
            /* [retval][out] */ __RPC__out BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in UIA_HWND hwnd,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in UIA_HWND hwnd,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ POINT pt,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *pCondition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **condition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition1,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition2,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt SAFEARRAY * conditions,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )( 
            __RPC__in IUIAutomation * This,
            /* [size_is][in] */ __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition1,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition2,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt SAFEARRAY * conditions,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )( 
            __RPC__in IUIAutomation * This,
            /* [size_is][in] */ __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
            /* [in] */ int propertyCount);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ __RPC__in SAFEARRAY * propertyArray);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *element,
            /* [in] */ __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )( 
            __RPC__in IUIAutomation * This);
        
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )( 
            __RPC__in IUIAutomation * This,
            /* [size_is][in] */ __RPC__in_ecount_full(arrayCount) int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *safeArray);
        
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
            /* [retval][out] */ __RPC__out int *arrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ RECT rc,
            /* [retval][out] */ __RPC__out VARIANT *var);
        
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ __RPC__out RECT *rc);
        
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in SAFEARRAY * rects,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
            /* [retval][out] */ __RPC__out int *rectArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationProxyFactory *factory,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *pElement,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *patternIds,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *patternNames);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IUIAutomationElement *pElement,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *propertyIds,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *propertyNames);
        
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ __RPC__out BOOL *isNotSupported);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **notSupportedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )( 
            __RPC__in IUIAutomation * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **mixedAttributeValue);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )( 
            __RPC__in IUIAutomation * This,
            /* [in] */ __RPC__in_opt IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **element);
        
        END_INTERFACE
    } IUIAutomationVtbl;

    interface IUIAutomation
    {
        CONST_VTBL struct IUIAutomationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomation_CompareElements(This,el1,el2,areSame)	\
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) ) 

#define IUIAutomation_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame)	\
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ) 

#define IUIAutomation_GetRootElement(This,root)	\
    ( (This)->lpVtbl -> GetRootElement(This,root) ) 

#define IUIAutomation_ElementFromHandle(This,hwnd,element)	\
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) ) 

#define IUIAutomation_ElementFromPoint(This,pt,element)	\
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) ) 

#define IUIAutomation_GetFocusedElement(This,element)	\
    ( (This)->lpVtbl -> GetFocusedElement(This,element) ) 

#define IUIAutomation_GetRootElementBuildCache(This,cacheRequest,root)	\
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) ) 

#define IUIAutomation_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ) 

#define IUIAutomation_ElementFromPointBuildCache(This,pt,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) ) 

#define IUIAutomation_GetFocusedElementBuildCache(This,cacheRequest,element)	\
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) ) 

#define IUIAutomation_CreateTreeWalker(This,pCondition,walker)	\
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) ) 

#define IUIAutomation_get_ControlViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) ) 

#define IUIAutomation_get_ContentViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) ) 

#define IUIAutomation_get_RawViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) ) 

#define IUIAutomation_get_RawViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) ) 

#define IUIAutomation_get_ControlViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) ) 

#define IUIAutomation_get_ContentViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) ) 

#define IUIAutomation_CreateCacheRequest(This,cacheRequest)	\
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) ) 

#define IUIAutomation_CreateTrueCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) ) 

#define IUIAutomation_CreateFalseCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) ) 

#define IUIAutomation_CreatePropertyCondition(This,propertyId,value,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) ) 

#define IUIAutomation_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ) 

#define IUIAutomation_CreateAndCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation_CreateAndConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation_CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation_CreateOrCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation_CreateOrConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation_CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation_CreateNotCondition(This,condition,newCondition)	\
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) ) 

#define IUIAutomation_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ) 

#define IUIAutomation_RemoveAutomationEventHandler(This,eventId,element,handler)	\
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) ) 

#define IUIAutomation_AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) ) 

#define IUIAutomation_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ) 

#define IUIAutomation_RemovePropertyChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) ) 

#define IUIAutomation_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IUIAutomation_RemoveStructureChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) ) 

#define IUIAutomation_AddFocusChangedEventHandler(This,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) ) 

#define IUIAutomation_RemoveFocusChangedEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) ) 

#define IUIAutomation_RemoveAllEventHandlers(This)	\
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) ) 

#define IUIAutomation_IntNativeArrayToSafeArray(This,array,arrayCount,safeArray)	\
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) ) 

#define IUIAutomation_IntSafeArrayToNativeArray(This,intArray,array,arrayCount)	\
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) ) 

#define IUIAutomation_RectToVariant(This,rc,var)	\
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) ) 

#define IUIAutomation_VariantToRect(This,var,rc)	\
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) ) 

#define IUIAutomation_SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount)	\
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) ) 

#define IUIAutomation_CreateProxyFactoryEntry(This,factory,factoryEntry)	\
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) ) 

#define IUIAutomation_get_ProxyFactoryMapping(This,factoryMapping)	\
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) ) 

#define IUIAutomation_GetPropertyProgrammaticName(This,property,name)	\
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) ) 

#define IUIAutomation_GetPatternProgrammaticName(This,pattern,name)	\
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) ) 

#define IUIAutomation_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ) 

#define IUIAutomation_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ) 

#define IUIAutomation_CheckNotSupported(This,value,isNotSupported)	\
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) ) 

#define IUIAutomation_get_ReservedNotSupportedValue(This,notSupportedValue)	\
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) ) 

#define IUIAutomation_get_ReservedMixedAttributeValue(This,mixedAttributeValue)	\
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) ) 

#define IUIAutomation_ElementFromIAccessible(This,accessible,childId,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) ) 

#define IUIAutomation_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomation_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CUIAutomation;

#ifdef __cplusplus

class DECLSPEC_UUID("ff48dba4-60ef-4201-aa87-54103eef594e")
CUIAutomation;
#endif
#endif /* __UIAutomationClient_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



