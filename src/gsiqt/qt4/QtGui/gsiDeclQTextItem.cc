
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQTextItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextItem>
#include <QFont>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextItem

//  Constructor QTextItem::QTextItem()


static void _init_ctor_QTextItem_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextItem> ();
}

static void _call_ctor_QTextItem_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextItem *> (new QTextItem ());
}


// double QTextItem::ascent()


static void _init_f_ascent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_ascent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextItem *)cls)->ascent ());
}


// double QTextItem::descent()


static void _init_f_descent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_descent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextItem *)cls)->descent ());
}


// QFont QTextItem::font()


static void _init_f_font_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFont > ();
}

static void _call_f_font_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFont > ((QFont)((QTextItem *)cls)->font ());
}


// QFlags<QTextItem::RenderFlag> QTextItem::renderFlags()


static void _init_f_renderFlags_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QTextItem::RenderFlag> > ();
}

static void _call_f_renderFlags_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QTextItem::RenderFlag> > ((QFlags<QTextItem::RenderFlag>)((QTextItem *)cls)->renderFlags ());
}


// QString QTextItem::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextItem *)cls)->text ());
}


// double QTextItem::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextItem *)cls)->width ());
}



namespace gsi
{

static gsi::Methods methods_QTextItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextItem::QTextItem()\nThis method creates an object of class QTextItem.", &_init_ctor_QTextItem_0, &_call_ctor_QTextItem_0);
  methods += new qt_gsi::GenericMethod ("ascent", "@brief Method double QTextItem::ascent()\n", true, &_init_f_ascent_c0, &_call_f_ascent_c0);
  methods += new qt_gsi::GenericMethod ("descent", "@brief Method double QTextItem::descent()\n", true, &_init_f_descent_c0, &_call_f_descent_c0);
  methods += new qt_gsi::GenericMethod ("font", "@brief Method QFont QTextItem::font()\n", true, &_init_f_font_c0, &_call_f_font_c0);
  methods += new qt_gsi::GenericMethod ("renderFlags", "@brief Method QFlags<QTextItem::RenderFlag> QTextItem::renderFlags()\n", true, &_init_f_renderFlags_c0, &_call_f_renderFlags_c0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QTextItem::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method double QTextItem::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  return methods;
}

gsi::Class<QTextItem> decl_QTextItem ("QtGui", "QTextItem",
  methods_QTextItem (),
  "@qt\n@brief Binding of QTextItem");


GSI_QTGUI_PUBLIC gsi::Class<QTextItem> &qtdecl_QTextItem () { return decl_QTextItem; }

}


//  Implementation of the enum wrapper class for QTextItem::RenderFlag
namespace qt_gsi
{

static gsi::Enum<QTextItem::RenderFlag> decl_QTextItem_RenderFlag_Enum ("QtGui", "QTextItem_RenderFlag",
    gsi::enum_const ("RightToLeft", QTextItem::RightToLeft, "@brief Enum constant QTextItem::RightToLeft") +
    gsi::enum_const ("Overline", QTextItem::Overline, "@brief Enum constant QTextItem::Overline") +
    gsi::enum_const ("Underline", QTextItem::Underline, "@brief Enum constant QTextItem::Underline") +
    gsi::enum_const ("StrikeOut", QTextItem::StrikeOut, "@brief Enum constant QTextItem::StrikeOut") +
    gsi::enum_const ("Dummy", QTextItem::Dummy, "@brief Enum constant QTextItem::Dummy"),
  "@qt\n@brief This class represents the QTextItem::RenderFlag enum");

static gsi::QFlagsClass<QTextItem::RenderFlag > decl_QTextItem_RenderFlag_Enums ("QtGui", "QTextItem_QFlags_RenderFlag",
  "@qt\n@brief This class represents the QFlags<QTextItem::RenderFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextItem> inject_QTextItem_RenderFlag_Enum_in_parent (decl_QTextItem_RenderFlag_Enum.defs ());
static gsi::ClassExt<QTextItem> decl_QTextItem_RenderFlag_Enum_as_child (decl_QTextItem_RenderFlag_Enum, "RenderFlag");
static gsi::ClassExt<QTextItem> decl_QTextItem_RenderFlag_Enums_as_child (decl_QTextItem_RenderFlag_Enums, "QFlags_RenderFlag");

}

