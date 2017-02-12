
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2016 Matthias Koefferlein

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
*  @file gsiDeclQStaticText.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStaticText>
#include <QFont>
#include <QSizeF>
#include <QTextOption>
#include <QTransform>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStaticText

//  Constructor QStaticText::QStaticText()


static void _init_ctor_QStaticText_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStaticText> ();
}

static void _call_ctor_QStaticText_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStaticText *> (new QStaticText ());
}


//  Constructor QStaticText::QStaticText(const QString &text)


static void _init_ctor_QStaticText_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QStaticText> ();
}

static void _call_ctor_QStaticText_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QStaticText *> (new QStaticText (arg1));
}


//  Constructor QStaticText::QStaticText(const QStaticText &other)


static void _init_ctor_QStaticText_2431 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStaticText & > (argspec_0);
  decl->set_return_new<QStaticText> ();
}

static void _call_ctor_QStaticText_2431 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStaticText &arg1 = args.read<const QStaticText & > (heap);
  ret.write<QStaticText *> (new QStaticText (arg1));
}


// bool QStaticText::operator!=(const QStaticText &)


static void _init_f_operator_excl__eq__c2431 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStaticText & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2431 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStaticText &arg1 = args.read<const QStaticText & > (heap);
  ret.write<bool > ((bool)((QStaticText *)cls)->operator!= (arg1));
}


// QStaticText &QStaticText::operator=(const QStaticText &)


static void _init_f_operator_eq__2431 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStaticText & > (argspec_0);
  decl->set_return<QStaticText & > ();
}

static void _call_f_operator_eq__2431 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStaticText &arg1 = args.read<const QStaticText & > (heap);
  ret.write<QStaticText & > ((QStaticText &)((QStaticText *)cls)->operator= (arg1));
}


// bool QStaticText::operator==(const QStaticText &)


static void _init_f_operator_eq__eq__c2431 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStaticText & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2431 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStaticText &arg1 = args.read<const QStaticText & > (heap);
  ret.write<bool > ((bool)((QStaticText *)cls)->operator== (arg1));
}


// QStaticText::PerformanceHint QStaticText::performanceHint()


static void _init_f_performanceHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QStaticText::PerformanceHint>::target_type > ();
}

static void _call_f_performanceHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QStaticText::PerformanceHint>::target_type > ((qt_gsi::Converter<QStaticText::PerformanceHint>::target_type)qt_gsi::CppToQtAdaptor<QStaticText::PerformanceHint>(((QStaticText *)cls)->performanceHint ()));
}


// void QStaticText::prepare(const QTransform &matrix, const QFont &font)


static void _init_f_prepare_4043 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix", true, "QTransform()");
  decl->add_arg<const QTransform & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("font", true, "QFont()");
  decl->add_arg<const QFont & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_prepare_4043 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTransform &arg1 = args ? args.read<const QTransform & > (heap) : (const QTransform &)(QTransform());
  const QFont &arg2 = args ? args.read<const QFont & > (heap) : (const QFont &)(QFont());
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStaticText *)cls)->prepare (arg1, arg2);
}


// void QStaticText::setPerformanceHint(QStaticText::PerformanceHint performanceHint)


static void _init_f_setPerformanceHint_3211 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("performanceHint");
  decl->add_arg<const qt_gsi::Converter<QStaticText::PerformanceHint>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPerformanceHint_3211 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStaticText::PerformanceHint>::target_type & arg1 = args.read<const qt_gsi::Converter<QStaticText::PerformanceHint>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStaticText *)cls)->setPerformanceHint (qt_gsi::QtToCppAdaptor<QStaticText::PerformanceHint>(arg1).cref());
}


// void QStaticText::setText(const QString &text)


static void _init_f_setText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStaticText *)cls)->setText (arg1);
}


// void QStaticText::setTextFormat(Qt::TextFormat textFormat)


static void _init_f_setTextFormat_1787 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("textFormat");
  decl->add_arg<const qt_gsi::Converter<Qt::TextFormat>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextFormat_1787 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::TextFormat>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::TextFormat>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStaticText *)cls)->setTextFormat (qt_gsi::QtToCppAdaptor<Qt::TextFormat>(arg1).cref());
}


// void QStaticText::setTextOption(const QTextOption &textOption)


static void _init_f_setTextOption_2448 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("textOption");
  decl->add_arg<const QTextOption & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextOption_2448 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextOption &arg1 = args.read<const QTextOption & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStaticText *)cls)->setTextOption (arg1);
}


// void QStaticText::setTextWidth(double textWidth)


static void _init_f_setTextWidth_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("textWidth");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextWidth_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStaticText *)cls)->setTextWidth (arg1);
}


// QSizeF QStaticText::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSizeF > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSizeF > ((QSizeF)((QStaticText *)cls)->size ());
}


// void QStaticText::swap(QStaticText &other)


static void _init_f_swap_1736 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QStaticText & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1736 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QStaticText &arg1 = args.read<QStaticText & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStaticText *)cls)->swap (arg1);
}


// QString QStaticText::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QStaticText *)cls)->text ());
}


// Qt::TextFormat QStaticText::textFormat()


static void _init_f_textFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::TextFormat>::target_type > ();
}

static void _call_f_textFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::TextFormat>::target_type > ((qt_gsi::Converter<Qt::TextFormat>::target_type)qt_gsi::CppToQtAdaptor<Qt::TextFormat>(((QStaticText *)cls)->textFormat ()));
}


// QTextOption QStaticText::textOption()


static void _init_f_textOption_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextOption > ();
}

static void _call_f_textOption_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextOption > ((QTextOption)((QStaticText *)cls)->textOption ());
}


// double QStaticText::textWidth()


static void _init_f_textWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_textWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QStaticText *)cls)->textWidth ());
}



namespace gsi
{

static gsi::Methods methods_QStaticText () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStaticText::QStaticText()\nThis method creates an object of class QStaticText.", &_init_ctor_QStaticText_0, &_call_ctor_QStaticText_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStaticText::QStaticText(const QString &text)\nThis method creates an object of class QStaticText.", &_init_ctor_QStaticText_2025, &_call_ctor_QStaticText_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStaticText::QStaticText(const QStaticText &other)\nThis method creates an object of class QStaticText.", &_init_ctor_QStaticText_2431, &_call_ctor_QStaticText_2431);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QStaticText::operator!=(const QStaticText &)\n", true, &_init_f_operator_excl__eq__c2431, &_call_f_operator_excl__eq__c2431);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStaticText &QStaticText::operator=(const QStaticText &)\n", false, &_init_f_operator_eq__2431, &_call_f_operator_eq__2431);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QStaticText::operator==(const QStaticText &)\n", true, &_init_f_operator_eq__eq__c2431, &_call_f_operator_eq__eq__c2431);
  methods += new qt_gsi::GenericMethod (":performanceHint", "@brief Method QStaticText::PerformanceHint QStaticText::performanceHint()\n", true, &_init_f_performanceHint_c0, &_call_f_performanceHint_c0);
  methods += new qt_gsi::GenericMethod ("prepare", "@brief Method void QStaticText::prepare(const QTransform &matrix, const QFont &font)\n", false, &_init_f_prepare_4043, &_call_f_prepare_4043);
  methods += new qt_gsi::GenericMethod ("setPerformanceHint|performanceHint=", "@brief Method void QStaticText::setPerformanceHint(QStaticText::PerformanceHint performanceHint)\n", false, &_init_f_setPerformanceHint_3211, &_call_f_setPerformanceHint_3211);
  methods += new qt_gsi::GenericMethod ("setText|text=", "@brief Method void QStaticText::setText(const QString &text)\n", false, &_init_f_setText_2025, &_call_f_setText_2025);
  methods += new qt_gsi::GenericMethod ("setTextFormat|textFormat=", "@brief Method void QStaticText::setTextFormat(Qt::TextFormat textFormat)\n", false, &_init_f_setTextFormat_1787, &_call_f_setTextFormat_1787);
  methods += new qt_gsi::GenericMethod ("setTextOption|textOption=", "@brief Method void QStaticText::setTextOption(const QTextOption &textOption)\n", false, &_init_f_setTextOption_2448, &_call_f_setTextOption_2448);
  methods += new qt_gsi::GenericMethod ("setTextWidth|textWidth=", "@brief Method void QStaticText::setTextWidth(double textWidth)\n", false, &_init_f_setTextWidth_1071, &_call_f_setTextWidth_1071);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method QSizeF QStaticText::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QStaticText::swap(QStaticText &other)\n", false, &_init_f_swap_1736, &_call_f_swap_1736);
  methods += new qt_gsi::GenericMethod (":text", "@brief Method QString QStaticText::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  methods += new qt_gsi::GenericMethod (":textFormat", "@brief Method Qt::TextFormat QStaticText::textFormat()\n", true, &_init_f_textFormat_c0, &_call_f_textFormat_c0);
  methods += new qt_gsi::GenericMethod (":textOption", "@brief Method QTextOption QStaticText::textOption()\n", true, &_init_f_textOption_c0, &_call_f_textOption_c0);
  methods += new qt_gsi::GenericMethod (":textWidth", "@brief Method double QStaticText::textWidth()\n", true, &_init_f_textWidth_c0, &_call_f_textWidth_c0);
  return methods;
}

gsi::Class<QStaticText> decl_QStaticText ("QStaticText",
  methods_QStaticText (),
  "@qt\n@brief Binding of QStaticText");


GSIQT_PUBLIC gsi::Class<QStaticText> &qtdecl_QStaticText () { return decl_QStaticText; }

}


//  Implementation of the enum wrapper class for QStaticText::PerformanceHint
namespace qt_gsi
{

static gsi::Enum<QStaticText::PerformanceHint> decl_QStaticText_PerformanceHint_Enum ("QStaticText_PerformanceHint",
    gsi::enum_const ("ModerateCaching", QStaticText::ModerateCaching, "@brief Enum constant QStaticText::ModerateCaching") +
    gsi::enum_const ("AggressiveCaching", QStaticText::AggressiveCaching, "@brief Enum constant QStaticText::AggressiveCaching"),
  "@qt\n@brief This class represents the QStaticText::PerformanceHint enum");

static gsi::QFlagsClass<QStaticText::PerformanceHint > decl_QStaticText_PerformanceHint_Enums ("QStaticText_QFlags_PerformanceHint",
  "@qt\n@brief This class represents the QFlags<QStaticText::PerformanceHint> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QStaticText> inject_QStaticText_PerformanceHint_Enum_in_parent (decl_QStaticText_PerformanceHint_Enum.defs ());
static gsi::ClassExt<QStaticText> decl_QStaticText_PerformanceHint_Enum_as_child (decl_QStaticText_PerformanceHint_Enum, "PerformanceHint");
static gsi::ClassExt<QStaticText> decl_QStaticText_PerformanceHint_Enums_as_child (decl_QStaticText_PerformanceHint_Enums, "QFlags_PerformanceHint");

}

