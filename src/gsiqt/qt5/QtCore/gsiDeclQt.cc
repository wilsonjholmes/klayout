
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQt.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <Qt>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace Qt

class Qt_Namespace { };

namespace gsi
{
gsi::Class<Qt_Namespace> decl_Qt_Namespace ("QtCore", "Qt",
  gsi::Methods(),
  "@qt\n@brief This class represents the Qt namespace");
}


//  Implementation of the enum wrapper class for Qt::AlignmentFlag
namespace qt_gsi
{

static gsi::Enum<Qt::AlignmentFlag> decl_Qt_AlignmentFlag_Enum ("QtCore", "Qt_AlignmentFlag",
    gsi::enum_const ("AlignLeft", Qt::AlignLeft, "@brief Enum constant Qt::AlignLeft") +
    gsi::enum_const ("AlignLeading", Qt::AlignLeading, "@brief Enum constant Qt::AlignLeading") +
    gsi::enum_const ("AlignRight", Qt::AlignRight, "@brief Enum constant Qt::AlignRight") +
    gsi::enum_const ("AlignTrailing", Qt::AlignTrailing, "@brief Enum constant Qt::AlignTrailing") +
    gsi::enum_const ("AlignHCenter", Qt::AlignHCenter, "@brief Enum constant Qt::AlignHCenter") +
    gsi::enum_const ("AlignJustify", Qt::AlignJustify, "@brief Enum constant Qt::AlignJustify") +
    gsi::enum_const ("AlignAbsolute", Qt::AlignAbsolute, "@brief Enum constant Qt::AlignAbsolute") +
    gsi::enum_const ("AlignHorizontal_Mask", Qt::AlignHorizontal_Mask, "@brief Enum constant Qt::AlignHorizontal_Mask") +
    gsi::enum_const ("AlignTop", Qt::AlignTop, "@brief Enum constant Qt::AlignTop") +
    gsi::enum_const ("AlignBottom", Qt::AlignBottom, "@brief Enum constant Qt::AlignBottom") +
    gsi::enum_const ("AlignVCenter", Qt::AlignVCenter, "@brief Enum constant Qt::AlignVCenter") +
    gsi::enum_const ("AlignBaseline", Qt::AlignBaseline, "@brief Enum constant Qt::AlignBaseline") +
    gsi::enum_const ("AlignVertical_Mask", Qt::AlignVertical_Mask, "@brief Enum constant Qt::AlignVertical_Mask") +
    gsi::enum_const ("AlignCenter", Qt::AlignCenter, "@brief Enum constant Qt::AlignCenter"),
  "@qt\n@brief This class represents the Qt::AlignmentFlag enum");

static gsi::QFlagsClass<Qt::AlignmentFlag > decl_Qt_AlignmentFlag_Enums ("QtCore", "Qt_QFlags_AlignmentFlag",
  "@qt\n@brief This class represents the QFlags<Qt::AlignmentFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_AlignmentFlag_Enum_in_parent (decl_Qt_AlignmentFlag_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_AlignmentFlag_Enum_as_child (decl_Qt_AlignmentFlag_Enum, "AlignmentFlag");
static gsi::ClassExt<Qt_Namespace> decl_Qt_AlignmentFlag_Enums_as_child (decl_Qt_AlignmentFlag_Enums, "QFlags_AlignmentFlag");

}


//  Implementation of the enum wrapper class for Qt::AnchorPoint
namespace qt_gsi
{

static gsi::Enum<Qt::AnchorPoint> decl_Qt_AnchorPoint_Enum ("QtCore", "Qt_AnchorPoint",
    gsi::enum_const ("AnchorLeft", Qt::AnchorLeft, "@brief Enum constant Qt::AnchorLeft") +
    gsi::enum_const ("AnchorHorizontalCenter", Qt::AnchorHorizontalCenter, "@brief Enum constant Qt::AnchorHorizontalCenter") +
    gsi::enum_const ("AnchorRight", Qt::AnchorRight, "@brief Enum constant Qt::AnchorRight") +
    gsi::enum_const ("AnchorTop", Qt::AnchorTop, "@brief Enum constant Qt::AnchorTop") +
    gsi::enum_const ("AnchorVerticalCenter", Qt::AnchorVerticalCenter, "@brief Enum constant Qt::AnchorVerticalCenter") +
    gsi::enum_const ("AnchorBottom", Qt::AnchorBottom, "@brief Enum constant Qt::AnchorBottom"),
  "@qt\n@brief This class represents the Qt::AnchorPoint enum");

static gsi::QFlagsClass<Qt::AnchorPoint > decl_Qt_AnchorPoint_Enums ("QtCore", "Qt_QFlags_AnchorPoint",
  "@qt\n@brief This class represents the QFlags<Qt::AnchorPoint> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_AnchorPoint_Enum_in_parent (decl_Qt_AnchorPoint_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_AnchorPoint_Enum_as_child (decl_Qt_AnchorPoint_Enum, "AnchorPoint");
static gsi::ClassExt<Qt_Namespace> decl_Qt_AnchorPoint_Enums_as_child (decl_Qt_AnchorPoint_Enums, "QFlags_AnchorPoint");

}


//  Implementation of the enum wrapper class for Qt::ApplicationAttribute
namespace qt_gsi
{

static gsi::Enum<Qt::ApplicationAttribute> decl_Qt_ApplicationAttribute_Enum ("QtCore", "Qt_ApplicationAttribute",
    gsi::enum_const ("AA_ImmediateWidgetCreation", Qt::AA_ImmediateWidgetCreation, "@brief Enum constant Qt::AA_ImmediateWidgetCreation") +
    gsi::enum_const ("AA_MSWindowsUseDirect3DByDefault", Qt::AA_MSWindowsUseDirect3DByDefault, "@brief Enum constant Qt::AA_MSWindowsUseDirect3DByDefault") +
    gsi::enum_const ("AA_DontShowIconsInMenus", Qt::AA_DontShowIconsInMenus, "@brief Enum constant Qt::AA_DontShowIconsInMenus") +
    gsi::enum_const ("AA_NativeWindows", Qt::AA_NativeWindows, "@brief Enum constant Qt::AA_NativeWindows") +
    gsi::enum_const ("AA_DontCreateNativeWidgetSiblings", Qt::AA_DontCreateNativeWidgetSiblings, "@brief Enum constant Qt::AA_DontCreateNativeWidgetSiblings") +
    gsi::enum_const ("AA_PluginApplication", Qt::AA_PluginApplication, "@brief Enum constant Qt::AA_PluginApplication") +
    gsi::enum_const ("AA_MacPluginApplication", Qt::AA_MacPluginApplication, "@brief Enum constant Qt::AA_MacPluginApplication") +
    gsi::enum_const ("AA_DontUseNativeMenuBar", Qt::AA_DontUseNativeMenuBar, "@brief Enum constant Qt::AA_DontUseNativeMenuBar") +
    gsi::enum_const ("AA_MacDontSwapCtrlAndMeta", Qt::AA_MacDontSwapCtrlAndMeta, "@brief Enum constant Qt::AA_MacDontSwapCtrlAndMeta") +
    gsi::enum_const ("AA_Use96Dpi", Qt::AA_Use96Dpi, "@brief Enum constant Qt::AA_Use96Dpi") +
    gsi::enum_const ("AA_X11InitThreads", Qt::AA_X11InitThreads, "@brief Enum constant Qt::AA_X11InitThreads") +
    gsi::enum_const ("AA_SynthesizeTouchForUnhandledMouseEvents", Qt::AA_SynthesizeTouchForUnhandledMouseEvents, "@brief Enum constant Qt::AA_SynthesizeTouchForUnhandledMouseEvents") +
    gsi::enum_const ("AA_SynthesizeMouseForUnhandledTouchEvents", Qt::AA_SynthesizeMouseForUnhandledTouchEvents, "@brief Enum constant Qt::AA_SynthesizeMouseForUnhandledTouchEvents") +
    gsi::enum_const ("AA_UseHighDpiPixmaps", Qt::AA_UseHighDpiPixmaps, "@brief Enum constant Qt::AA_UseHighDpiPixmaps") +
    gsi::enum_const ("AA_ForceRasterWidgets", Qt::AA_ForceRasterWidgets, "@brief Enum constant Qt::AA_ForceRasterWidgets") +
    gsi::enum_const ("AA_UseDesktopOpenGL", Qt::AA_UseDesktopOpenGL, "@brief Enum constant Qt::AA_UseDesktopOpenGL") +
    gsi::enum_const ("AA_UseOpenGLES", Qt::AA_UseOpenGLES, "@brief Enum constant Qt::AA_UseOpenGLES") +
    gsi::enum_const ("AA_UseSoftwareOpenGL", Qt::AA_UseSoftwareOpenGL, "@brief Enum constant Qt::AA_UseSoftwareOpenGL") +
    gsi::enum_const ("AA_ShareOpenGLContexts", Qt::AA_ShareOpenGLContexts, "@brief Enum constant Qt::AA_ShareOpenGLContexts") +
    gsi::enum_const ("AA_SetPalette", Qt::AA_SetPalette, "@brief Enum constant Qt::AA_SetPalette") +
    gsi::enum_const ("AA_EnableHighDpiScaling", Qt::AA_EnableHighDpiScaling, "@brief Enum constant Qt::AA_EnableHighDpiScaling") +
    gsi::enum_const ("AA_DisableHighDpiScaling", Qt::AA_DisableHighDpiScaling, "@brief Enum constant Qt::AA_DisableHighDpiScaling") +
    gsi::enum_const ("AA_UseStyleSheetPropagationInWidgetStyles", Qt::AA_UseStyleSheetPropagationInWidgetStyles, "@brief Enum constant Qt::AA_UseStyleSheetPropagationInWidgetStyles") +
    gsi::enum_const ("AA_DontUseNativeDialogs", Qt::AA_DontUseNativeDialogs, "@brief Enum constant Qt::AA_DontUseNativeDialogs") +
    gsi::enum_const ("AA_SynthesizeMouseForUnhandledTabletEvents", Qt::AA_SynthesizeMouseForUnhandledTabletEvents, "@brief Enum constant Qt::AA_SynthesizeMouseForUnhandledTabletEvents") +
    gsi::enum_const ("AA_CompressHighFrequencyEvents", Qt::AA_CompressHighFrequencyEvents, "@brief Enum constant Qt::AA_CompressHighFrequencyEvents") +
    gsi::enum_const ("AA_DontCheckOpenGLContextThreadAffinity", Qt::AA_DontCheckOpenGLContextThreadAffinity, "@brief Enum constant Qt::AA_DontCheckOpenGLContextThreadAffinity") +
    gsi::enum_const ("AA_DisableShaderDiskCache", Qt::AA_DisableShaderDiskCache, "@brief Enum constant Qt::AA_DisableShaderDiskCache") +
    gsi::enum_const ("AA_DontShowShortcutsInContextMenus", Qt::AA_DontShowShortcutsInContextMenus, "@brief Enum constant Qt::AA_DontShowShortcutsInContextMenus") +
    gsi::enum_const ("AA_CompressTabletEvents", Qt::AA_CompressTabletEvents, "@brief Enum constant Qt::AA_CompressTabletEvents") +
    gsi::enum_const ("AA_DisableWindowContextHelpButton", Qt::AA_DisableWindowContextHelpButton, "@brief Enum constant Qt::AA_DisableWindowContextHelpButton") +
    gsi::enum_const ("AA_AttributeCount", Qt::AA_AttributeCount, "@brief Enum constant Qt::AA_AttributeCount"),
  "@qt\n@brief This class represents the Qt::ApplicationAttribute enum");

static gsi::QFlagsClass<Qt::ApplicationAttribute > decl_Qt_ApplicationAttribute_Enums ("QtCore", "Qt_QFlags_ApplicationAttribute",
  "@qt\n@brief This class represents the QFlags<Qt::ApplicationAttribute> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ApplicationAttribute_Enum_in_parent (decl_Qt_ApplicationAttribute_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ApplicationAttribute_Enum_as_child (decl_Qt_ApplicationAttribute_Enum, "ApplicationAttribute");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ApplicationAttribute_Enums_as_child (decl_Qt_ApplicationAttribute_Enums, "QFlags_ApplicationAttribute");

}


//  Implementation of the enum wrapper class for Qt::ApplicationState
namespace qt_gsi
{

static gsi::Enum<Qt::ApplicationState> decl_Qt_ApplicationState_Enum ("QtCore", "Qt_ApplicationState",
    gsi::enum_const ("ApplicationSuspended", Qt::ApplicationSuspended, "@brief Enum constant Qt::ApplicationSuspended") +
    gsi::enum_const ("ApplicationHidden", Qt::ApplicationHidden, "@brief Enum constant Qt::ApplicationHidden") +
    gsi::enum_const ("ApplicationInactive", Qt::ApplicationInactive, "@brief Enum constant Qt::ApplicationInactive") +
    gsi::enum_const ("ApplicationActive", Qt::ApplicationActive, "@brief Enum constant Qt::ApplicationActive"),
  "@qt\n@brief This class represents the Qt::ApplicationState enum");

static gsi::QFlagsClass<Qt::ApplicationState > decl_Qt_ApplicationState_Enums ("QtCore", "Qt_QFlags_ApplicationState",
  "@qt\n@brief This class represents the QFlags<Qt::ApplicationState> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ApplicationState_Enum_in_parent (decl_Qt_ApplicationState_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ApplicationState_Enum_as_child (decl_Qt_ApplicationState_Enum, "ApplicationState");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ApplicationState_Enums_as_child (decl_Qt_ApplicationState_Enums, "QFlags_ApplicationState");

}


//  Implementation of the enum wrapper class for Qt::ArrowType
namespace qt_gsi
{

static gsi::Enum<Qt::ArrowType> decl_Qt_ArrowType_Enum ("QtCore", "Qt_ArrowType",
    gsi::enum_const ("NoArrow", Qt::NoArrow, "@brief Enum constant Qt::NoArrow") +
    gsi::enum_const ("UpArrow", Qt::UpArrow, "@brief Enum constant Qt::UpArrow") +
    gsi::enum_const ("DownArrow", Qt::DownArrow, "@brief Enum constant Qt::DownArrow") +
    gsi::enum_const ("LeftArrow", Qt::LeftArrow, "@brief Enum constant Qt::LeftArrow") +
    gsi::enum_const ("RightArrow", Qt::RightArrow, "@brief Enum constant Qt::RightArrow"),
  "@qt\n@brief This class represents the Qt::ArrowType enum");

static gsi::QFlagsClass<Qt::ArrowType > decl_Qt_ArrowType_Enums ("QtCore", "Qt_QFlags_ArrowType",
  "@qt\n@brief This class represents the QFlags<Qt::ArrowType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ArrowType_Enum_in_parent (decl_Qt_ArrowType_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ArrowType_Enum_as_child (decl_Qt_ArrowType_Enum, "ArrowType");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ArrowType_Enums_as_child (decl_Qt_ArrowType_Enums, "QFlags_ArrowType");

}


//  Implementation of the enum wrapper class for Qt::AspectRatioMode
namespace qt_gsi
{

static gsi::Enum<Qt::AspectRatioMode> decl_Qt_AspectRatioMode_Enum ("QtCore", "Qt_AspectRatioMode",
    gsi::enum_const ("IgnoreAspectRatio", Qt::IgnoreAspectRatio, "@brief Enum constant Qt::IgnoreAspectRatio") +
    gsi::enum_const ("KeepAspectRatio", Qt::KeepAspectRatio, "@brief Enum constant Qt::KeepAspectRatio") +
    gsi::enum_const ("KeepAspectRatioByExpanding", Qt::KeepAspectRatioByExpanding, "@brief Enum constant Qt::KeepAspectRatioByExpanding"),
  "@qt\n@brief This class represents the Qt::AspectRatioMode enum");

static gsi::QFlagsClass<Qt::AspectRatioMode > decl_Qt_AspectRatioMode_Enums ("QtCore", "Qt_QFlags_AspectRatioMode",
  "@qt\n@brief This class represents the QFlags<Qt::AspectRatioMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_AspectRatioMode_Enum_in_parent (decl_Qt_AspectRatioMode_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_AspectRatioMode_Enum_as_child (decl_Qt_AspectRatioMode_Enum, "AspectRatioMode");
static gsi::ClassExt<Qt_Namespace> decl_Qt_AspectRatioMode_Enums_as_child (decl_Qt_AspectRatioMode_Enums, "QFlags_AspectRatioMode");

}


//  Implementation of the enum wrapper class for Qt::Axis
namespace qt_gsi
{

static gsi::Enum<Qt::Axis> decl_Qt_Axis_Enum ("QtCore", "Qt_Axis",
    gsi::enum_const ("XAxis", Qt::XAxis, "@brief Enum constant Qt::XAxis") +
    gsi::enum_const ("YAxis", Qt::YAxis, "@brief Enum constant Qt::YAxis") +
    gsi::enum_const ("ZAxis", Qt::ZAxis, "@brief Enum constant Qt::ZAxis"),
  "@qt\n@brief This class represents the Qt::Axis enum");

static gsi::QFlagsClass<Qt::Axis > decl_Qt_Axis_Enums ("QtCore", "Qt_QFlags_Axis",
  "@qt\n@brief This class represents the QFlags<Qt::Axis> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_Axis_Enum_in_parent (decl_Qt_Axis_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_Axis_Enum_as_child (decl_Qt_Axis_Enum, "Axis");
static gsi::ClassExt<Qt_Namespace> decl_Qt_Axis_Enums_as_child (decl_Qt_Axis_Enums, "QFlags_Axis");

}


//  Implementation of the enum wrapper class for Qt::BGMode
namespace qt_gsi
{

static gsi::Enum<Qt::BGMode> decl_Qt_BGMode_Enum ("QtCore", "Qt_BGMode",
    gsi::enum_const ("TransparentMode", Qt::TransparentMode, "@brief Enum constant Qt::TransparentMode") +
    gsi::enum_const ("OpaqueMode", Qt::OpaqueMode, "@brief Enum constant Qt::OpaqueMode"),
  "@qt\n@brief This class represents the Qt::BGMode enum");

static gsi::QFlagsClass<Qt::BGMode > decl_Qt_BGMode_Enums ("QtCore", "Qt_QFlags_BGMode",
  "@qt\n@brief This class represents the QFlags<Qt::BGMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_BGMode_Enum_in_parent (decl_Qt_BGMode_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_BGMode_Enum_as_child (decl_Qt_BGMode_Enum, "BGMode");
static gsi::ClassExt<Qt_Namespace> decl_Qt_BGMode_Enums_as_child (decl_Qt_BGMode_Enums, "QFlags_BGMode");

}


//  Implementation of the enum wrapper class for Qt::BrushStyle
namespace qt_gsi
{

static gsi::Enum<Qt::BrushStyle> decl_Qt_BrushStyle_Enum ("QtCore", "Qt_BrushStyle",
    gsi::enum_const ("NoBrush", Qt::NoBrush, "@brief Enum constant Qt::NoBrush") +
    gsi::enum_const ("SolidPattern", Qt::SolidPattern, "@brief Enum constant Qt::SolidPattern") +
    gsi::enum_const ("Dense1Pattern", Qt::Dense1Pattern, "@brief Enum constant Qt::Dense1Pattern") +
    gsi::enum_const ("Dense2Pattern", Qt::Dense2Pattern, "@brief Enum constant Qt::Dense2Pattern") +
    gsi::enum_const ("Dense3Pattern", Qt::Dense3Pattern, "@brief Enum constant Qt::Dense3Pattern") +
    gsi::enum_const ("Dense4Pattern", Qt::Dense4Pattern, "@brief Enum constant Qt::Dense4Pattern") +
    gsi::enum_const ("Dense5Pattern", Qt::Dense5Pattern, "@brief Enum constant Qt::Dense5Pattern") +
    gsi::enum_const ("Dense6Pattern", Qt::Dense6Pattern, "@brief Enum constant Qt::Dense6Pattern") +
    gsi::enum_const ("Dense7Pattern", Qt::Dense7Pattern, "@brief Enum constant Qt::Dense7Pattern") +
    gsi::enum_const ("HorPattern", Qt::HorPattern, "@brief Enum constant Qt::HorPattern") +
    gsi::enum_const ("VerPattern", Qt::VerPattern, "@brief Enum constant Qt::VerPattern") +
    gsi::enum_const ("CrossPattern", Qt::CrossPattern, "@brief Enum constant Qt::CrossPattern") +
    gsi::enum_const ("BDiagPattern", Qt::BDiagPattern, "@brief Enum constant Qt::BDiagPattern") +
    gsi::enum_const ("FDiagPattern", Qt::FDiagPattern, "@brief Enum constant Qt::FDiagPattern") +
    gsi::enum_const ("DiagCrossPattern", Qt::DiagCrossPattern, "@brief Enum constant Qt::DiagCrossPattern") +
    gsi::enum_const ("LinearGradientPattern", Qt::LinearGradientPattern, "@brief Enum constant Qt::LinearGradientPattern") +
    gsi::enum_const ("RadialGradientPattern", Qt::RadialGradientPattern, "@brief Enum constant Qt::RadialGradientPattern") +
    gsi::enum_const ("ConicalGradientPattern", Qt::ConicalGradientPattern, "@brief Enum constant Qt::ConicalGradientPattern") +
    gsi::enum_const ("TexturePattern", Qt::TexturePattern, "@brief Enum constant Qt::TexturePattern"),
  "@qt\n@brief This class represents the Qt::BrushStyle enum");

static gsi::QFlagsClass<Qt::BrushStyle > decl_Qt_BrushStyle_Enums ("QtCore", "Qt_QFlags_BrushStyle",
  "@qt\n@brief This class represents the QFlags<Qt::BrushStyle> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_BrushStyle_Enum_in_parent (decl_Qt_BrushStyle_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_BrushStyle_Enum_as_child (decl_Qt_BrushStyle_Enum, "BrushStyle");
static gsi::ClassExt<Qt_Namespace> decl_Qt_BrushStyle_Enums_as_child (decl_Qt_BrushStyle_Enums, "QFlags_BrushStyle");

}


//  Implementation of the enum wrapper class for Qt::CaseSensitivity
namespace qt_gsi
{

static gsi::Enum<Qt::CaseSensitivity> decl_Qt_CaseSensitivity_Enum ("QtCore", "Qt_CaseSensitivity",
    gsi::enum_const ("CaseInsensitive", Qt::CaseInsensitive, "@brief Enum constant Qt::CaseInsensitive") +
    gsi::enum_const ("CaseSensitive", Qt::CaseSensitive, "@brief Enum constant Qt::CaseSensitive"),
  "@qt\n@brief This class represents the Qt::CaseSensitivity enum");

static gsi::QFlagsClass<Qt::CaseSensitivity > decl_Qt_CaseSensitivity_Enums ("QtCore", "Qt_QFlags_CaseSensitivity",
  "@qt\n@brief This class represents the QFlags<Qt::CaseSensitivity> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_CaseSensitivity_Enum_in_parent (decl_Qt_CaseSensitivity_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_CaseSensitivity_Enum_as_child (decl_Qt_CaseSensitivity_Enum, "CaseSensitivity");
static gsi::ClassExt<Qt_Namespace> decl_Qt_CaseSensitivity_Enums_as_child (decl_Qt_CaseSensitivity_Enums, "QFlags_CaseSensitivity");

}


//  Implementation of the enum wrapper class for Qt::CheckState
namespace qt_gsi
{

static gsi::Enum<Qt::CheckState> decl_Qt_CheckState_Enum ("QtCore", "Qt_CheckState",
    gsi::enum_const ("Unchecked", Qt::Unchecked, "@brief Enum constant Qt::Unchecked") +
    gsi::enum_const ("PartiallyChecked", Qt::PartiallyChecked, "@brief Enum constant Qt::PartiallyChecked") +
    gsi::enum_const ("Checked", Qt::Checked, "@brief Enum constant Qt::Checked"),
  "@qt\n@brief This class represents the Qt::CheckState enum");

static gsi::QFlagsClass<Qt::CheckState > decl_Qt_CheckState_Enums ("QtCore", "Qt_QFlags_CheckState",
  "@qt\n@brief This class represents the QFlags<Qt::CheckState> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_CheckState_Enum_in_parent (decl_Qt_CheckState_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_CheckState_Enum_as_child (decl_Qt_CheckState_Enum, "CheckState");
static gsi::ClassExt<Qt_Namespace> decl_Qt_CheckState_Enums_as_child (decl_Qt_CheckState_Enums, "QFlags_CheckState");

}


//  Implementation of the enum wrapper class for Qt::ChecksumType
namespace qt_gsi
{

static gsi::Enum<Qt::ChecksumType> decl_Qt_ChecksumType_Enum ("QtCore", "Qt_ChecksumType",
    gsi::enum_const ("ChecksumIso3309", Qt::ChecksumIso3309, "@brief Enum constant Qt::ChecksumIso3309") +
    gsi::enum_const ("ChecksumItuV41", Qt::ChecksumItuV41, "@brief Enum constant Qt::ChecksumItuV41"),
  "@qt\n@brief This class represents the Qt::ChecksumType enum");

static gsi::QFlagsClass<Qt::ChecksumType > decl_Qt_ChecksumType_Enums ("QtCore", "Qt_QFlags_ChecksumType",
  "@qt\n@brief This class represents the QFlags<Qt::ChecksumType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ChecksumType_Enum_in_parent (decl_Qt_ChecksumType_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ChecksumType_Enum_as_child (decl_Qt_ChecksumType_Enum, "ChecksumType");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ChecksumType_Enums_as_child (decl_Qt_ChecksumType_Enums, "QFlags_ChecksumType");

}


//  Implementation of the enum wrapper class for Qt::ClipOperation
namespace qt_gsi
{

static gsi::Enum<Qt::ClipOperation> decl_Qt_ClipOperation_Enum ("QtCore", "Qt_ClipOperation",
    gsi::enum_const ("NoClip", Qt::NoClip, "@brief Enum constant Qt::NoClip") +
    gsi::enum_const ("ReplaceClip", Qt::ReplaceClip, "@brief Enum constant Qt::ReplaceClip") +
    gsi::enum_const ("IntersectClip", Qt::IntersectClip, "@brief Enum constant Qt::IntersectClip"),
  "@qt\n@brief This class represents the Qt::ClipOperation enum");

static gsi::QFlagsClass<Qt::ClipOperation > decl_Qt_ClipOperation_Enums ("QtCore", "Qt_QFlags_ClipOperation",
  "@qt\n@brief This class represents the QFlags<Qt::ClipOperation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ClipOperation_Enum_in_parent (decl_Qt_ClipOperation_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ClipOperation_Enum_as_child (decl_Qt_ClipOperation_Enum, "ClipOperation");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ClipOperation_Enums_as_child (decl_Qt_ClipOperation_Enums, "QFlags_ClipOperation");

}


//  Implementation of the enum wrapper class for Qt::ConnectionType
namespace qt_gsi
{

static gsi::Enum<Qt::ConnectionType> decl_Qt_ConnectionType_Enum ("QtCore", "Qt_ConnectionType",
    gsi::enum_const ("AutoConnection", Qt::AutoConnection, "@brief Enum constant Qt::AutoConnection") +
    gsi::enum_const ("DirectConnection", Qt::DirectConnection, "@brief Enum constant Qt::DirectConnection") +
    gsi::enum_const ("QueuedConnection", Qt::QueuedConnection, "@brief Enum constant Qt::QueuedConnection") +
    gsi::enum_const ("BlockingQueuedConnection", Qt::BlockingQueuedConnection, "@brief Enum constant Qt::BlockingQueuedConnection") +
    gsi::enum_const ("UniqueConnection", Qt::UniqueConnection, "@brief Enum constant Qt::UniqueConnection"),
  "@qt\n@brief This class represents the Qt::ConnectionType enum");

static gsi::QFlagsClass<Qt::ConnectionType > decl_Qt_ConnectionType_Enums ("QtCore", "Qt_QFlags_ConnectionType",
  "@qt\n@brief This class represents the QFlags<Qt::ConnectionType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ConnectionType_Enum_in_parent (decl_Qt_ConnectionType_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ConnectionType_Enum_as_child (decl_Qt_ConnectionType_Enum, "ConnectionType");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ConnectionType_Enums_as_child (decl_Qt_ConnectionType_Enums, "QFlags_ConnectionType");

}


//  Implementation of the enum wrapper class for Qt::ContextMenuPolicy
namespace qt_gsi
{

static gsi::Enum<Qt::ContextMenuPolicy> decl_Qt_ContextMenuPolicy_Enum ("QtCore", "Qt_ContextMenuPolicy",
    gsi::enum_const ("NoContextMenu", Qt::NoContextMenu, "@brief Enum constant Qt::NoContextMenu") +
    gsi::enum_const ("DefaultContextMenu", Qt::DefaultContextMenu, "@brief Enum constant Qt::DefaultContextMenu") +
    gsi::enum_const ("ActionsContextMenu", Qt::ActionsContextMenu, "@brief Enum constant Qt::ActionsContextMenu") +
    gsi::enum_const ("CustomContextMenu", Qt::CustomContextMenu, "@brief Enum constant Qt::CustomContextMenu") +
    gsi::enum_const ("PreventContextMenu", Qt::PreventContextMenu, "@brief Enum constant Qt::PreventContextMenu"),
  "@qt\n@brief This class represents the Qt::ContextMenuPolicy enum");

static gsi::QFlagsClass<Qt::ContextMenuPolicy > decl_Qt_ContextMenuPolicy_Enums ("QtCore", "Qt_QFlags_ContextMenuPolicy",
  "@qt\n@brief This class represents the QFlags<Qt::ContextMenuPolicy> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ContextMenuPolicy_Enum_in_parent (decl_Qt_ContextMenuPolicy_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ContextMenuPolicy_Enum_as_child (decl_Qt_ContextMenuPolicy_Enum, "ContextMenuPolicy");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ContextMenuPolicy_Enums_as_child (decl_Qt_ContextMenuPolicy_Enums, "QFlags_ContextMenuPolicy");

}


//  Implementation of the enum wrapper class for Qt::CoordinateSystem
namespace qt_gsi
{

static gsi::Enum<Qt::CoordinateSystem> decl_Qt_CoordinateSystem_Enum ("QtCore", "Qt_CoordinateSystem",
    gsi::enum_const ("DeviceCoordinates", Qt::DeviceCoordinates, "@brief Enum constant Qt::DeviceCoordinates") +
    gsi::enum_const ("LogicalCoordinates", Qt::LogicalCoordinates, "@brief Enum constant Qt::LogicalCoordinates"),
  "@qt\n@brief This class represents the Qt::CoordinateSystem enum");

static gsi::QFlagsClass<Qt::CoordinateSystem > decl_Qt_CoordinateSystem_Enums ("QtCore", "Qt_QFlags_CoordinateSystem",
  "@qt\n@brief This class represents the QFlags<Qt::CoordinateSystem> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_CoordinateSystem_Enum_in_parent (decl_Qt_CoordinateSystem_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_CoordinateSystem_Enum_as_child (decl_Qt_CoordinateSystem_Enum, "CoordinateSystem");
static gsi::ClassExt<Qt_Namespace> decl_Qt_CoordinateSystem_Enums_as_child (decl_Qt_CoordinateSystem_Enums, "QFlags_CoordinateSystem");

}


//  Implementation of the enum wrapper class for Qt::Corner
namespace qt_gsi
{

static gsi::Enum<Qt::Corner> decl_Qt_Corner_Enum ("QtCore", "Qt_Corner",
    gsi::enum_const ("TopLeftCorner", Qt::TopLeftCorner, "@brief Enum constant Qt::TopLeftCorner") +
    gsi::enum_const ("TopRightCorner", Qt::TopRightCorner, "@brief Enum constant Qt::TopRightCorner") +
    gsi::enum_const ("BottomLeftCorner", Qt::BottomLeftCorner, "@brief Enum constant Qt::BottomLeftCorner") +
    gsi::enum_const ("BottomRightCorner", Qt::BottomRightCorner, "@brief Enum constant Qt::BottomRightCorner"),
  "@qt\n@brief This class represents the Qt::Corner enum");

static gsi::QFlagsClass<Qt::Corner > decl_Qt_Corner_Enums ("QtCore", "Qt_QFlags_Corner",
  "@qt\n@brief This class represents the QFlags<Qt::Corner> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_Corner_Enum_in_parent (decl_Qt_Corner_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_Corner_Enum_as_child (decl_Qt_Corner_Enum, "Corner");
static gsi::ClassExt<Qt_Namespace> decl_Qt_Corner_Enums_as_child (decl_Qt_Corner_Enums, "QFlags_Corner");

}


//  Implementation of the enum wrapper class for Qt::CursorMoveStyle
namespace qt_gsi
{

static gsi::Enum<Qt::CursorMoveStyle> decl_Qt_CursorMoveStyle_Enum ("QtCore", "Qt_CursorMoveStyle",
    gsi::enum_const ("LogicalMoveStyle", Qt::LogicalMoveStyle, "@brief Enum constant Qt::LogicalMoveStyle") +
    gsi::enum_const ("VisualMoveStyle", Qt::VisualMoveStyle, "@brief Enum constant Qt::VisualMoveStyle"),
  "@qt\n@brief This class represents the Qt::CursorMoveStyle enum");

static gsi::QFlagsClass<Qt::CursorMoveStyle > decl_Qt_CursorMoveStyle_Enums ("QtCore", "Qt_QFlags_CursorMoveStyle",
  "@qt\n@brief This class represents the QFlags<Qt::CursorMoveStyle> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_CursorMoveStyle_Enum_in_parent (decl_Qt_CursorMoveStyle_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_CursorMoveStyle_Enum_as_child (decl_Qt_CursorMoveStyle_Enum, "CursorMoveStyle");
static gsi::ClassExt<Qt_Namespace> decl_Qt_CursorMoveStyle_Enums_as_child (decl_Qt_CursorMoveStyle_Enums, "QFlags_CursorMoveStyle");

}


//  Implementation of the enum wrapper class for Qt::CursorShape
namespace qt_gsi
{

static gsi::Enum<Qt::CursorShape> decl_Qt_CursorShape_Enum ("QtCore", "Qt_CursorShape",
    gsi::enum_const ("ArrowCursor", Qt::ArrowCursor, "@brief Enum constant Qt::ArrowCursor") +
    gsi::enum_const ("UpArrowCursor", Qt::UpArrowCursor, "@brief Enum constant Qt::UpArrowCursor") +
    gsi::enum_const ("CrossCursor", Qt::CrossCursor, "@brief Enum constant Qt::CrossCursor") +
    gsi::enum_const ("WaitCursor", Qt::WaitCursor, "@brief Enum constant Qt::WaitCursor") +
    gsi::enum_const ("IBeamCursor", Qt::IBeamCursor, "@brief Enum constant Qt::IBeamCursor") +
    gsi::enum_const ("SizeVerCursor", Qt::SizeVerCursor, "@brief Enum constant Qt::SizeVerCursor") +
    gsi::enum_const ("SizeHorCursor", Qt::SizeHorCursor, "@brief Enum constant Qt::SizeHorCursor") +
    gsi::enum_const ("SizeBDiagCursor", Qt::SizeBDiagCursor, "@brief Enum constant Qt::SizeBDiagCursor") +
    gsi::enum_const ("SizeFDiagCursor", Qt::SizeFDiagCursor, "@brief Enum constant Qt::SizeFDiagCursor") +
    gsi::enum_const ("SizeAllCursor", Qt::SizeAllCursor, "@brief Enum constant Qt::SizeAllCursor") +
    gsi::enum_const ("BlankCursor", Qt::BlankCursor, "@brief Enum constant Qt::BlankCursor") +
    gsi::enum_const ("SplitVCursor", Qt::SplitVCursor, "@brief Enum constant Qt::SplitVCursor") +
    gsi::enum_const ("SplitHCursor", Qt::SplitHCursor, "@brief Enum constant Qt::SplitHCursor") +
    gsi::enum_const ("PointingHandCursor", Qt::PointingHandCursor, "@brief Enum constant Qt::PointingHandCursor") +
    gsi::enum_const ("ForbiddenCursor", Qt::ForbiddenCursor, "@brief Enum constant Qt::ForbiddenCursor") +
    gsi::enum_const ("WhatsThisCursor", Qt::WhatsThisCursor, "@brief Enum constant Qt::WhatsThisCursor") +
    gsi::enum_const ("BusyCursor", Qt::BusyCursor, "@brief Enum constant Qt::BusyCursor") +
    gsi::enum_const ("OpenHandCursor", Qt::OpenHandCursor, "@brief Enum constant Qt::OpenHandCursor") +
    gsi::enum_const ("ClosedHandCursor", Qt::ClosedHandCursor, "@brief Enum constant Qt::ClosedHandCursor") +
    gsi::enum_const ("DragCopyCursor", Qt::DragCopyCursor, "@brief Enum constant Qt::DragCopyCursor") +
    gsi::enum_const ("DragMoveCursor", Qt::DragMoveCursor, "@brief Enum constant Qt::DragMoveCursor") +
    gsi::enum_const ("DragLinkCursor", Qt::DragLinkCursor, "@brief Enum constant Qt::DragLinkCursor") +
    gsi::enum_const ("LastCursor", Qt::LastCursor, "@brief Enum constant Qt::LastCursor") +
    gsi::enum_const ("BitmapCursor", Qt::BitmapCursor, "@brief Enum constant Qt::BitmapCursor") +
    gsi::enum_const ("CustomCursor", Qt::CustomCursor, "@brief Enum constant Qt::CustomCursor"),
  "@qt\n@brief This class represents the Qt::CursorShape enum");

static gsi::QFlagsClass<Qt::CursorShape > decl_Qt_CursorShape_Enums ("QtCore", "Qt_QFlags_CursorShape",
  "@qt\n@brief This class represents the QFlags<Qt::CursorShape> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_CursorShape_Enum_in_parent (decl_Qt_CursorShape_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_CursorShape_Enum_as_child (decl_Qt_CursorShape_Enum, "CursorShape");
static gsi::ClassExt<Qt_Namespace> decl_Qt_CursorShape_Enums_as_child (decl_Qt_CursorShape_Enums, "QFlags_CursorShape");

}


//  Implementation of the enum wrapper class for Qt::DateFormat
namespace qt_gsi
{

static gsi::Enum<Qt::DateFormat> decl_Qt_DateFormat_Enum ("QtCore", "Qt_DateFormat",
    gsi::enum_const ("TextDate", Qt::TextDate, "@brief Enum constant Qt::TextDate") +
    gsi::enum_const ("ISODate", Qt::ISODate, "@brief Enum constant Qt::ISODate") +
    gsi::enum_const ("SystemLocaleDate", Qt::SystemLocaleDate, "@brief Enum constant Qt::SystemLocaleDate") +
    gsi::enum_const ("LocalDate", Qt::LocalDate, "@brief Enum constant Qt::LocalDate") +
    gsi::enum_const ("LocaleDate", Qt::LocaleDate, "@brief Enum constant Qt::LocaleDate") +
    gsi::enum_const ("SystemLocaleShortDate", Qt::SystemLocaleShortDate, "@brief Enum constant Qt::SystemLocaleShortDate") +
    gsi::enum_const ("SystemLocaleLongDate", Qt::SystemLocaleLongDate, "@brief Enum constant Qt::SystemLocaleLongDate") +
    gsi::enum_const ("DefaultLocaleShortDate", Qt::DefaultLocaleShortDate, "@brief Enum constant Qt::DefaultLocaleShortDate") +
    gsi::enum_const ("DefaultLocaleLongDate", Qt::DefaultLocaleLongDate, "@brief Enum constant Qt::DefaultLocaleLongDate") +
    gsi::enum_const ("RFC2822Date", Qt::RFC2822Date, "@brief Enum constant Qt::RFC2822Date") +
    gsi::enum_const ("ISODateWithMs", Qt::ISODateWithMs, "@brief Enum constant Qt::ISODateWithMs"),
  "@qt\n@brief This class represents the Qt::DateFormat enum");

static gsi::QFlagsClass<Qt::DateFormat > decl_Qt_DateFormat_Enums ("QtCore", "Qt_QFlags_DateFormat",
  "@qt\n@brief This class represents the QFlags<Qt::DateFormat> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_DateFormat_Enum_in_parent (decl_Qt_DateFormat_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_DateFormat_Enum_as_child (decl_Qt_DateFormat_Enum, "DateFormat");
static gsi::ClassExt<Qt_Namespace> decl_Qt_DateFormat_Enums_as_child (decl_Qt_DateFormat_Enums, "QFlags_DateFormat");

}

