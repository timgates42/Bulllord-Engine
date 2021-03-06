/*
 Bulllord Game Engine
 Copyright (C) 2010-2017 Trix
 
 This software is provided 'as-is', without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely, subject to the following restrictions:
 
 1. The origin of this software must not be misrepresented; you must not
 claim that you wrote the original software. If you use this software
 in a product, an acknowledgment in the product documentation would be
 appreciated but is not required.
 2. Altered source versions must be plainly marked as such, and must not be
 misrepresented as being the original software.
 3. This notice may not be removed or altered from any source distribution.
 */
#ifndef __ui_h_
#define __ui_h_
#include "prerequisites.h"
#ifdef __cplusplus
extern "C" {
#endif
//for BMFont only support xml + none-compression tga format 
BL_API BLVoid blUIStyle(
	IN BLU32 _CaretColor,
	IN BLU32 _SelectRangeColor,
	IN BLU32 _TextDisableColor);

BL_API BLVoid blUIDirty();

BL_API BLGuid blUIFile(
	IN BLAnsi* _Filename);

BL_API BLGuid blUIGen(
	IN BLAnsi* _WidgetName,
	IN BLS32 _PosX,
	IN BLS32 _PosY,
	IN BLU32 _Width,
	IN BLU32 _Height,
	IN BLEnum _Type);

BL_API BLVoid blUIDelete(
	IN BLGuid _ID);

BL_API BLBool blUIAttach(
	IN BLGuid _Parent,
	IN BLGuid _Child);

BL_API BLBool blUIDetach(
	IN BLGuid _ID);

BL_API BLEnum blUIGetType(
	IN BLGuid _ID);

BL_API BLVoid blUIPosition(
	IN BLGuid _ID,
	IN BLS32 _XPos,
	IN BLS32 _YPos);

BL_API BLVoid blUIGetPosition(
	IN BLGuid _ID,
	OUT BLS32* _XPos,
	OUT BLS32* _YPos);

BL_API BLVoid blUIPivot(
	IN BLGuid _ID,
	IN BLF32 _PivotX,
	IN BLF32 _PivotY);

BL_API BLVoid blUIGetPivot(
	IN BLGuid _ID,
	OUT BLF32* _PivotX,
	OUT BLF32* _PivotY);

BL_API BLVoid blUIScale(
	IN BLGuid _ID,
	IN BLF32 _ScaleX,
	IN BLF32 _ScaleY);

BL_API BLVoid blUIGetScale(
	IN BLGuid _ID,
	OUT BLF32* _ScaleX,
	OUT BLF32* _ScaleY);

BL_API BLVoid blUIDimension(
	IN BLGuid _ID,
	IN BLU32 _Width,
	IN BLU32 _Height);

BL_API BLVoid blUIGetDimension(
	IN BLGuid _ID,
	OUT BLU32* _Width,
	OUT BLU32* _Height);

BL_API BLVoid blUIReferencePoint(
	IN BLGuid _ID,
	IN BLEnum _ReferenceH,
	IN BLEnum _ReferenceV);

BL_API BLVoid blUIGetReferencePoint(
	IN BLGuid _ID,
	OUT BLEnum* _ReferenceH,
	OUT BLEnum* _ReferenceV);

BL_API BLVoid blUISizePolicy(
	IN BLGuid _ID,
	IN BLEnum _Policy);

BL_API BLVoid blUIGetSizePolicy(
	IN BLGuid _ID,
	OUT BLEnum* _Policy);

BL_API BLVoid blUISizeLimit(
	IN BLGuid _ID,
	IN BLU32 _MaxWidth,
	IN BLU32 _MaxHeight,
	IN BLU32 _MinWidth,
	IN BLU32 _MinHeight);

BL_API BLVoid blUIGetSizeLimit(
	IN BLGuid _ID,
	OUT BLU32* _MaxWidth,
	OUT BLU32* _MaxHeight,
	OUT BLU32* _MinWidth,
	OUT BLU32* _MinHeight);

BL_API BLVoid blUIAlpha(
	IN BLGuid _ID,
	IN BLF32 _Alpha);

BL_API BLVoid blUIGetAlpha(
	IN BLGuid _ID,
	OUT BLF32* _Alpha);

BL_API BLVoid blUIScissor(
	IN BLGuid _ID,
	IN BLBool _Cliped, 
	IN BLBool _AbsScissor);

BL_API BLVoid blUIGetScissor(
	IN BLGuid _ID,
	OUT BLBool* _Cliped,
	OUT BLBool* _AbsScissor);

BL_API BLVoid blUIInteractive(
	IN BLGuid _ID,
	IN BLBool _Interactive);

BL_API BLVoid blUIGetInteractive(
	IN BLGuid _ID,
	OUT BLBool* _Interactive);

BL_API BLVoid blUIVisible(
	IN BLGuid _ID,
	IN BLBool _Visible);

BL_API BLVoid blUIGetVisible(
	IN BLGuid _ID,
	OUT BLBool* _Visible);

BL_API BLVoid blUIPenetration(
	IN BLGuid _ID,
	IN BLBool _Penetration);

BL_API BLVoid blUIGetPenetration(
	IN BLGuid _ID,
	OUT BLBool* _Penetration);

BL_API BLGuid blUILocate(
	IN BLS32 _XPos,
	IN BLS32 _YPos);

BL_API BLVoid blUIStick(
	IN BLGuid _ID);

BL_API BLVoid blUIFocus(
	IN BLGuid _ID,
	IN BLF32 _XPos,
	IN BLF32 _YPos);

BL_API BLGuid blUIGetFocus();

BL_API BLGuid blUIGetHoverd();

BL_API BLU32 blUIChildrenCount(
	IN BLGuid _ID);

BL_API BLGuid blUIChildIndexOf(
	IN BLGuid _ID,
	IN BLU32 _Idx);

BL_API BLGuid blUIChildNameOf(
	IN BLGuid _ID,
	IN BLAnsi* _WidgetName);

BL_API BLVoid blUIPanelPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUIPanelStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUIPanelCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUIPanelDragable(
	IN BLGuid _ID,
	IN BLBool _Dragable);

BL_API BLVoid blUIPanelGetDragable(
	IN BLGuid _ID,
	OUT BLBool* _Dragable);

BL_API BLVoid blUIPanelBasePlate(
	IN BLGuid _ID,
	IN BLBool _BasePlate);

BL_API BLVoid blUIPanelGetBasePlate(
	IN BLGuid _ID,
	OUT BLBool* _BasePlate);

BL_API BLVoid blUIPanelModal(
	IN BLGuid _ID,
	IN BLBool _Modal);

BL_API BLVoid blUIPanelGetModal(
	IN BLGuid _ID,
	OUT BLBool* _Modal);

BL_API BLVoid blUIPanelScrollable(
	IN BLGuid _ID,
	IN BLBool _Scrollable);

BL_API BLVoid blUIPanelGetScrollable(
	IN BLGuid _ID,
	OUT BLBool* _Scrollable);

BL_API BLVoid blUIPanelFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUIPanelGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUIPanelLayout(
	IN BLGuid _ID,
	IN BLBool _GeometricScale,
	IN BLU32 _PaddingTop,
	IN BLU32 _PaddingLeft,
	IN BLU32 _PaddingBottom,
	IN BLU32 _PaddingRight,
	IN BLU32 _GapH,
	IN BLU32 _GapV,
	IN BLU32 _Columns);

BL_API BLVoid blUIButtonPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUIButtonStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUIButtonCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUIButtonHoverMap(
	IN BLGuid _ID,
	IN BLAnsi* _HoveredMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUIButtonPressMap(
	IN BLGuid _ID,
	IN BLAnsi* _PressedMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUIButtonDisableMap(
	IN BLGuid _ID,
	IN BLAnsi* _DisableMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUIButtonText(
	IN BLGuid _ID,
	IN BLUtf8* _Text,
	IN BLU32 _TxtColor,
	IN BLEnum _TxtAlignmentH,
	IN BLEnum _TxtAlignmentV);

BL_API BLUtf8* blUIButtonGetText(
	IN BLGuid _ID,
	OUT BLU32* _TxtColor,
	OUT BLEnum* _TxtAlignmentH,
	OUT BLEnum* _TxtAlignmentV);

BL_API BLVoid blUIButtonFont(
	IN BLGuid _ID,
	IN BLAnsi* _Font,
	IN BLU32 _FontHeight,
	IN BLBool _Outline,
	IN BLBool _Bold,
	IN BLBool _Shadow,
	IN BLBool _Italics);

BL_API BLAnsi* blUIButtonGetFont(
	IN BLGuid _ID,
	OUT BLU32* _FontHeight,
	OUT BLBool* _Outline,
	OUT BLBool* _Bold, 
	OUT BLBool* _Shadow,
	OUT BLBool* _Italics);

BL_API BLVoid blUIButtonFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUIButtonGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUIButtonEnable(
	IN BLGuid _ID,
	IN BLBool _Enable);

BL_API BLVoid blUIButtonGetEnable(
	IN BLGuid _ID,
	OUT BLBool* _Enable);

BL_API BLVoid blUILabelPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUILabelStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUILabelCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

//#tab:%d(pixel)##font:%s(fontsource):%d(fontheight):%d(fontflag)##align:%s(LT,LM,LB,MT,MM,MB,RT,RM,RB)##color:%zu(txtcolor):%d(linkid)#%s(text)
//#color:%zu(linecolor)##line:%d(padding optional):%d(length optional):%d(linewidth optional)#
//#image:(left or right or appand):%s(file):%d(linkid)#
BL_API BLVoid blUILabelText(
	IN BLGuid _ID,
	IN BLUtf8* _Text,
	IN BLU32 _TxtColor,
	IN BLEnum _TxtAlignmentH,
	IN BLEnum _TxtAlignmentV,
	IN BLAnsi* _Font,
	IN BLU32 _FontHeight,
	IN BLBool _Outline,
	IN BLBool _Bold,
	IN BLBool _Shadow,
	IN BLBool _Italics,
	IN BLBool _Rich);

BL_API BLUtf8* blUILabelGetText(
	IN BLGuid _ID);

BL_API BLVoid blUILabelPadding(
	IN BLGuid _ID,
	IN BLU32 _PaddingX,
	IN BLU32 _PaddingY);

BL_API BLVoid blUILabelGetPadding(
	IN BLGuid _ID,
	OUT BLU32* _PaddingX,
	OUT BLU32* _PaddingY);

BL_API BLVoid blUILabelFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUILabelGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUILabelRenderTexture(
	IN BLGuid _ID,
	IN BLGuid _Tex);

BL_API BLGuid blUILabelGetRenderTexture(
	IN BLGuid _ID);

BL_API BLVoid blUICheckPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUICheckStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUICheckCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUICheckCheckedMap(
	IN BLGuid _ID,
	IN BLAnsi* _CheckedMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUICheckDisableMap(
	IN BLGuid _ID,
	IN BLAnsi* _DisableMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUICheckText(
	IN BLGuid _ID,
	IN BLUtf8* _Text,
	IN BLU32 _TxtColor,
	IN BLEnum _TxtAlignmentH,
	IN BLEnum _TxtAlignmentV);

BL_API BLVoid blUICheckFont(
	IN BLGuid _ID,
	IN BLAnsi* _Font,
	IN BLU32 _FontHeight,
	IN BLBool _Outline,
	IN BLBool _Bold,
	IN BLBool _Shadow,
	IN BLBool _Italics);

BL_API BLAnsi* blUICheckGetFont(
	IN BLGuid _ID,
	OUT BLU32* _FontHeight,
	OUT BLBool* _Outline,
	OUT BLBool* _Bold,
	OUT BLBool* _Shadow,
	OUT BLBool* _Italics);

BL_API BLVoid blUICheckFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUICheckGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUICheckEnable(
	IN BLGuid _ID,
	IN BLBool _Enable);

BL_API BLVoid blUICheckGetEnable(
	IN BLGuid _ID,
	OUT BLBool* _Enable);

BL_API BLVoid blUICheckState(
	IN BLGuid _ID,
	IN BLBool _Checked);

BL_API BLVoid blUICheckGetState(
	IN BLGuid _ID,
	OUT BLBool* _Checked);

BL_API BLVoid blUITextPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUITextStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUITextCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUITextTypography(
	IN BLGuid _ID,
	IN BLBool _Autoscroll,
	IN BLBool _Multiline);

BL_API BLVoid blUITextGetTypography(
	IN BLGuid _ID,
	OUT BLBool* _Autoscroll,
	OUT BLBool* _Multiline);

BL_API BLVoid blUITextPassword(
	IN BLGuid _ID,
	IN BLBool _Password);

BL_API BLVoid blUITextGetPassword(
	IN BLGuid _ID,
	OUT BLBool* _Password);

BL_API BLVoid blUITextNumeric(
	IN BLGuid _ID,
	IN BLBool _Numeric,
	IN BLS32 _MinValue,
	IN BLS32 _MaxValue);

BL_API BLVoid blUITextGetNumeric(
	IN BLGuid _ID,
	OUT BLBool* _Numeric,
	OUT BLS32* _MinValue,
	OUT BLS32* _MaxValue);

BL_API BLVoid blUITextPadding(
	IN BLGuid _ID,
	IN BLF32 _PaddingX,
	IN BLF32 _PaddingY);

BL_API BLVoid blUITextGetPadding(
	IN BLGuid _ID,
	OUT BLF32* _PaddingX,
	OUT BLF32* _PaddingY);

BL_API BLVoid blUITextMaxLength(
	IN BLGuid _ID,
	IN BLU32 _MaxLength);

BL_API BLVoid blUITextGetMaxLength(
	IN BLGuid _ID,
	OUT BLU32* _MaxLength);

BL_API BLVoid blUITextPlaceholder(
	IN BLGuid _ID,
	IN BLUtf8* _Placeholder,
	IN BLU32 _PlaceholderColor);

BL_API BLUtf8* blUITextGetPlaceholder(
	IN BLGuid _ID,
	OUT BLU32* _PlaceholderColor);

BL_API BLVoid blUITextText(
	IN BLGuid _ID,
	IN BLUtf8* _Text,
	IN BLU32 _TxtColor,
	IN BLEnum _TxtAlignmentH,
	IN BLEnum _TxtAlignmentV);

BL_API BLUtf8* blUITextGetText(
	IN BLGuid _ID,
	OUT BLU32* _TxtColor,
	OUT BLEnum* _TxtAlignmentH,
	OUT BLEnum* _TxtAlignmentV);

BL_API BLVoid blUITextFont(
	IN BLGuid _ID,
	IN BLAnsi* _Font,
	IN BLU32 _FontHeight,
	IN BLBool _Outline,
	IN BLBool _Bold,
	IN BLBool _Shadow,
	IN BLBool _Italics);

BL_API BLAnsi* blUITextGetFont(
	IN BLGuid _ID,
	OUT BLU32* _FontHeight,
	OUT BLBool* _Outline,
	OUT BLBool* _Bold,
	OUT BLBool* _Shadow,
	OUT BLBool* _Italics);

BL_API BLVoid blUITextFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUITextGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUITextEnable(
	IN BLGuid _ID,
	IN BLBool _Enable);

BL_API BLVoid blUITextGetEnable(
	IN BLGuid _ID,
	OUT BLBool* _Enable);

BL_API BLVoid blUITextCaret(
	IN BLGuid _ID,
	IN BLBool _Show);

BL_API BLVoid blUITextGetCaret(
	IN BLGuid _ID,
	OUT BLBool* _Show);

BL_API BLVoid blUIProgressPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUIProgressStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUIProgressCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUIProgressFillMap(
	IN BLGuid _ID,
	IN BLAnsi* _FillMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUIProgressPercent(
	IN BLGuid _ID,
	IN BLU32 _Percent);

BL_API BLVoid blUIProgressGetPercent(
	IN BLGuid _ID,
	OUT BLU32* _Percent);

BL_API BLVoid blUIProgressBorder(
	IN BLGuid _ID,
	IN BLU32 _BorderX,
	IN BLU32 _BorderY);

BL_API BLVoid blUIProgressGetBorder(
	IN BLGuid _ID,
	OUT BLU32* _BorderX,
	OUT BLU32* _BorderY);

BL_API BLVoid blUIProgressText(
	IN BLGuid _ID,
	IN BLUtf8* _Text,
	IN BLU32 _TxtColor);

BL_API BLUtf8* blUIProgressGetText(
	IN BLGuid _ID,
	OUT BLU32* _TxtColor);

BL_API BLVoid blUIProgressFont(
	IN BLGuid _ID,
	IN BLAnsi* _Font,
	IN BLU32 _FontHeight,
	IN BLBool _Outline,
	IN BLBool _Bold,
	IN BLBool _Shadow,
	IN BLBool _Italics);

BL_API BLAnsi* blUIProgressGetFont(
	IN BLGuid _ID,
	OUT BLU32* _FontHeight,
	OUT BLBool* _Outline,
	OUT BLBool* _Bold,
	OUT BLBool* _Shadow,
	OUT BLBool* _Italics);

BL_API BLVoid blUIProgressFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUIProgressGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUISliderPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUISliderStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUISliderCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUISliderDisableMap(
	IN BLGuid _ID,
	IN BLAnsi* _DisableMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUISliderSliderCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _SliderCommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUISliderSliderDisableMap(
	IN BLGuid _ID,
	IN BLAnsi* _SliderDisableMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUISliderHorizontal(
	IN BLGuid _ID,
	IN BLBool _Horizontal);

BL_API BLVoid blUISliderGetHorizontal(
	IN BLGuid _ID,
	OUT BLBool* _Horizontal);

BL_API BLVoid blUISliderStep(
	IN BLGuid _ID,
	IN BLU32 _Step);

BL_API BLVoid blUISliderGetStep(
	IN BLGuid _ID,
	OUT BLU32* _Step);

BL_API BLVoid blUISliderThumbPos(
	IN BLGuid _ID,
	IN BLS32 _Pos);

BL_API BLVoid blUISliderGetThumbPos(
	IN BLGuid _ID,
	OUT BLS32* _Pos);

BL_API BLVoid blUISliderThumbSize(
	IN BLGuid _ID,
	IN BLU32 _Width,
	IN BLU32 _Height);

BL_API BLVoid blUISliderGetThumbSize(
	IN BLGuid _ID,
	OUT BLU32* _Width,
	OUT BLU32* _Height);

BL_API BLVoid blUISliderRange(
	IN BLGuid _ID,
	IN BLU32 _MinValue,
	IN BLU32 _MaxValue);

BL_API BLVoid blUISliderGetRange(
	IN BLGuid _ID,
	OUT BLU32* _MinValue,
	OUT BLU32* _MaxValue);

BL_API BLVoid blUISliderFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUISliderGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUISliderEnable(
	IN BLGuid _ID,
	IN BLBool _Enable);

BL_API BLVoid blUISliderGetEnable(
	IN BLGuid _ID,
	OUT BLBool* _Enable);

BL_API BLVoid blUITablePixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUITableStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUITableCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom,
	IN BLF32 _Left9,
	IN BLF32 _Top9,
	IN BLF32 _Right9,
	IN BLF32 _Bottom9);

BL_API BLVoid blUITableOddItemMap(
	IN BLGuid _ID,
	IN BLAnsi* _OddItemMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUITableEvenItemMap(
	IN BLGuid _ID,
	IN BLAnsi* _EvenItemMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUITableMaking(
	IN BLGuid _ID,
	IN BLU32 _Row,
	IN BLU32 _Column);

BL_API BLVoid blUITableRowHeight(
	IN BLGuid _ID,
	IN BLU32 _RowHeight);

BL_API BLVoid blUITableGetRowHeight(
	IN BLGuid _ID,
	OUT BLU32* _RowHeight);

BL_API BLVoid blUITableColumnWidth(
	IN BLGuid _ID,
	IN BLU32 _Column,
	IN BLU32 _Width);

BL_API BLVoid blUITableGetColumnWidth(
	IN BLGuid _ID,
	IN BLU32 _Column,
	OUT BLU32* _Width);

//#image:picture.bmg#
BL_API BLVoid blUITableCell(
	IN BLGuid _ID,
	IN BLUtf8* _Text,
	IN BLU32 _Row,
	IN BLU32 _Column,
	IN BLU32 _TxtColor);

BL_API BLUtf8* blUITableGetCell(
	IN BLGuid _ID,
	IN BLU32 _Row,
	IN BLU32 _Column,
	OUT BLU32* _TxtColor);

BL_API BLVoid blUITableFont(
	IN BLGuid _ID,
	IN BLAnsi* _Font,
	IN BLU32 _FontHeight,
	IN BLBool _Outline,
	IN BLBool _Bold,
	IN BLBool _Shadow,
	IN BLBool _Italics);

BL_API BLAnsi* blUITableGetFont(
	IN BLGuid _ID,
	OUT BLU32* _FontHeight,
	OUT BLBool* _Outline,
	OUT BLBool* _Bold,
	OUT BLBool* _Shadow,
	OUT BLBool* _Italics);

BL_API BLVoid blUITableFlip(
	IN BLGuid _ID,
	IN BLBool _FlipX,
	IN BLBool _FlipY);

BL_API BLVoid blUITableGetFlip(
	IN BLGuid _ID,
	OUT BLBool* _FlipX,
	OUT BLBool* _FlipY);

BL_API BLVoid blUIDialPixmap(
	IN BLGuid _ID,
	IN BLAnsi* _Pixmap);

BL_API BLVoid blUIDialStencilMap(
	IN BLGuid _ID,
	IN BLAnsi* _StencilMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUIDialCommonMap(
	IN BLGuid _ID,
	IN BLAnsi* _CommonMap,
	IN BLF32 _Left,
	IN BLF32 _Top,
	IN BLF32 _Right,
	IN BLF32 _Bottom);

BL_API BLVoid blUIDialAngle(
	IN BLGuid _ID,
	IN BLF32 _Angle);

BL_API BLVoid blUIDialGetAngle(
	IN BLGuid _ID,
	OUT BLF32* _Angle);

BL_API BLVoid blUIDialAngleRange(
	IN BLGuid _ID,
	IN BLS32 _StartAngle,
	IN BLS32 _EndAngle);

BL_API BLVoid blUIDialGetAngleRange(
	IN BLGuid _ID,
	OUT BLS32* _StartAngle,
	OUT BLS32* _EndAngle);

BL_API BLVoid blUIDialAngleCut(
	IN BLGuid _ID,
	IN BLBool _Cut);

BL_API BLVoid blUIDialGetAngleCut(
	IN BLGuid _ID,
	OUT BLBool* _Cut);

BL_API BLVoid blUIDialClockwise(
	IN BLGuid _ID,
	IN BLBool _Clockwise);

BL_API BLVoid blUIDialGetClockwise(
	IN BLGuid _ID,
	OUT BLBool* _Clockwise);

BL_API BLVoid blUIPrimitiveFill(
	IN BLGuid _ID,
	IN BLBool _Fill);

BL_API BLVoid blUIPrimitiveGetFill(
	IN BLGuid _ID,
	OUT BLBool* _Fill);

BL_API BLVoid blUIPrimitiveClosed(
	IN BLGuid _ID,
	IN BLBool _Closed);

BL_API BLVoid blUIPrimitiveGetClosed(
	IN BLGuid _ID,
	OUT BLBool* _Closed);

BL_API BLVoid blUIPrimitiveColor(
	IN BLGuid _ID,
	IN BLU32 _Color);

BL_API BLVoid blUIPrimitiveGetColor(
	IN BLGuid _ID,
	OUT BLU32* _Color);

BL_API BLVoid blUIPrimitiveStipple(
	IN BLGuid _ID,
	IN BLU32 _Dash,
	IN BLU32 _Gap);

BL_API BLVoid blUIPrimitiveGetStipple(
	IN BLGuid _ID,
	OUT BLU32* _Dash,
	OUT BLU32* _Gap);

BL_API BLVoid blUIPrimitiveLineWidth(
	IN BLGuid _ID,
	IN BLU32 _Width);

BL_API BLVoid blUIPrimitiveGetLineWidth(
	IN BLGuid _ID,
	OUT BLU32* _Width);

BL_API BLVoid blUIPrimitivePath(
	IN BLGuid _ID,
	IN BLF32* _XPath,
	IN BLF32* _YPath,
	IN BLU32 _PathNum);

BL_API BLF32* blUIPrimitiveGetPathX(
	IN BLGuid _ID,
	OUT BLU32* _PathNum);

BL_API BLF32* blUIPrimitiveGetPathY(
	IN BLGuid _ID,
	OUT BLU32* _PathNum);

BL_API BLBool blUIActionBegin(
	IN BLGuid _ID);

BL_API BLBool blUIActionEnd(
	IN BLGuid _ID,
	IN BLBool _Delete, 
	IN BLBool _Loop);

BL_API BLBool blUIParallelBegin(
	IN BLGuid _ID);

BL_API BLBool blUIParallelEnd(
	IN BLGuid _ID);

BL_API BLBool blUIActionPlay(
	IN BLGuid _ID);

BL_API BLBool blUIActionStop(
	IN BLGuid _ID);

//panel commonmap
//label	commonmap
//button commonmap
//check commonmap
//slider slidermap
//text commonmap
//progress fillmap
//dial none-anglecut
//table commonmap
//none-trim samesize
BL_API BLBool blUIActionUV(
	IN BLGuid _ID,
	IN BLAnsi* _Tag,
	IN BLU32 _FPS,
	IN BLF32 _Time, 
	IN BLBool _Loop);

BL_API BLBool blUIActionMove(
	IN BLGuid _ID,
	IN BLF32 _XVec,
	IN BLF32 _YVec,
	IN BLBool _Reverse,
	IN BLF32 _Time,
	IN BLBool _Loop);

BL_API BLBool blUIActionScale(
	IN BLGuid _ID,
	IN BLF32 _XScale,
	IN BLF32 _YScale,
	IN BLBool _Reverse,
	IN BLF32 _Time,
	IN BLBool _Loop);
//only dial control
BL_API BLBool blUIActionRotate(
	IN BLGuid _ID,
	IN BLF32 _Angle,
	IN BLBool _ClockWise,
	IN BLF32 _Time,
	IN BLBool _Loop);

BL_API BLBool blUIActionAlpha(
	IN BLGuid _ID,
	IN BLF32 _Alpha,
	IN BLBool _Reverse,
	IN BLF32 _Time,
	IN BLBool _Loop);

BL_API BLBool blUIActionScript(
	IN BLGuid _ID,
	IN BLAnsi* _XMLScript, 
	OUT BLF32* _TotalTime, 
	OUT BLBool* _Loop);
#ifdef __cplusplus
}
#endif
#endif/*__ui_h_*/
