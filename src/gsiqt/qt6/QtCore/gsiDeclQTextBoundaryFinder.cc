
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
*  @file gsiDeclQTextBoundaryFinder.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextBoundaryFinder>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextBoundaryFinder

//  Constructor QTextBoundaryFinder::QTextBoundaryFinder()


static void _init_ctor_QTextBoundaryFinder_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextBoundaryFinder> ();
}

static void _call_ctor_QTextBoundaryFinder_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBoundaryFinder *> (new QTextBoundaryFinder ());
}


//  Constructor QTextBoundaryFinder::QTextBoundaryFinder(const QTextBoundaryFinder &other)


static void _init_ctor_QTextBoundaryFinder_3251 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTextBoundaryFinder & > (argspec_0);
  decl->set_return_new<QTextBoundaryFinder> ();
}

static void _call_ctor_QTextBoundaryFinder_3251 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBoundaryFinder &arg1 = gsi::arg_reader<const QTextBoundaryFinder & >() (args, heap);
  ret.write<QTextBoundaryFinder *> (new QTextBoundaryFinder (arg1));
}


//  Constructor QTextBoundaryFinder::QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type, const QString &string)


static void _init_ctor_QTextBoundaryFinder_5661 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QTextBoundaryFinder::BoundaryType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("string");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QTextBoundaryFinder> ();
}

static void _call_ctor_QTextBoundaryFinder_5661 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextBoundaryFinder::BoundaryType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextBoundaryFinder::BoundaryType>::target_type & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTextBoundaryFinder *> (new QTextBoundaryFinder (qt_gsi::QtToCppAdaptor<QTextBoundaryFinder::BoundaryType>(arg1).cref(), arg2));
}


// QFlags<QTextBoundaryFinder::BoundaryReason> QTextBoundaryFinder::boundaryReasons()


static void _init_f_boundaryReasons_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QTextBoundaryFinder::BoundaryReason> > ();
}

static void _call_f_boundaryReasons_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QTextBoundaryFinder::BoundaryReason> > ((QFlags<QTextBoundaryFinder::BoundaryReason>)((QTextBoundaryFinder *)cls)->boundaryReasons ());
}


// bool QTextBoundaryFinder::isAtBoundary()


static void _init_f_isAtBoundary_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAtBoundary_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextBoundaryFinder *)cls)->isAtBoundary ());
}


// bool QTextBoundaryFinder::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextBoundaryFinder *)cls)->isValid ());
}


// QTextBoundaryFinder &QTextBoundaryFinder::operator=(const QTextBoundaryFinder &other)


static void _init_f_operator_eq__3251 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTextBoundaryFinder & > (argspec_0);
  decl->set_return<QTextBoundaryFinder & > ();
}

static void _call_f_operator_eq__3251 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBoundaryFinder &arg1 = gsi::arg_reader<const QTextBoundaryFinder & >() (args, heap);
  ret.write<QTextBoundaryFinder & > ((QTextBoundaryFinder &)((QTextBoundaryFinder *)cls)->operator= (arg1));
}


// qsizetype QTextBoundaryFinder::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QTextBoundaryFinder *)cls)->position ());
}


// void QTextBoundaryFinder::setPosition(qsizetype position)


static void _init_f_setPosition_1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPosition_1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBoundaryFinder *)cls)->setPosition (arg1);
}


// QString QTextBoundaryFinder::string()


static void _init_f_string_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_string_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextBoundaryFinder *)cls)->string ());
}


// void QTextBoundaryFinder::toEnd()


static void _init_f_toEnd_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_toEnd_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBoundaryFinder *)cls)->toEnd ();
}


// qsizetype QTextBoundaryFinder::toNextBoundary()


static void _init_f_toNextBoundary_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_toNextBoundary_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QTextBoundaryFinder *)cls)->toNextBoundary ());
}


// qsizetype QTextBoundaryFinder::toPreviousBoundary()


static void _init_f_toPreviousBoundary_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_toPreviousBoundary_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QTextBoundaryFinder *)cls)->toPreviousBoundary ());
}


// void QTextBoundaryFinder::toStart()


static void _init_f_toStart_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_toStart_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBoundaryFinder *)cls)->toStart ();
}


// QTextBoundaryFinder::BoundaryType QTextBoundaryFinder::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextBoundaryFinder::BoundaryType>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextBoundaryFinder::BoundaryType>::target_type > ((qt_gsi::Converter<QTextBoundaryFinder::BoundaryType>::target_type)qt_gsi::CppToQtAdaptor<QTextBoundaryFinder::BoundaryType>(((QTextBoundaryFinder *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QTextBoundaryFinder () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBoundaryFinder::QTextBoundaryFinder()\nThis method creates an object of class QTextBoundaryFinder.", &_init_ctor_QTextBoundaryFinder_0, &_call_ctor_QTextBoundaryFinder_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBoundaryFinder::QTextBoundaryFinder(const QTextBoundaryFinder &other)\nThis method creates an object of class QTextBoundaryFinder.", &_init_ctor_QTextBoundaryFinder_3251, &_call_ctor_QTextBoundaryFinder_3251);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBoundaryFinder::QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type, const QString &string)\nThis method creates an object of class QTextBoundaryFinder.", &_init_ctor_QTextBoundaryFinder_5661, &_call_ctor_QTextBoundaryFinder_5661);
  methods += new qt_gsi::GenericMethod ("boundaryReasons", "@brief Method QFlags<QTextBoundaryFinder::BoundaryReason> QTextBoundaryFinder::boundaryReasons()\n", true, &_init_f_boundaryReasons_c0, &_call_f_boundaryReasons_c0);
  methods += new qt_gsi::GenericMethod ("isAtBoundary?", "@brief Method bool QTextBoundaryFinder::isAtBoundary()\n", true, &_init_f_isAtBoundary_c0, &_call_f_isAtBoundary_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextBoundaryFinder::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextBoundaryFinder &QTextBoundaryFinder::operator=(const QTextBoundaryFinder &other)\n", false, &_init_f_operator_eq__3251, &_call_f_operator_eq__3251);
  methods += new qt_gsi::GenericMethod (":position", "@brief Method qsizetype QTextBoundaryFinder::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("setPosition|position=", "@brief Method void QTextBoundaryFinder::setPosition(qsizetype position)\n", false, &_init_f_setPosition_1442, &_call_f_setPosition_1442);
  methods += new qt_gsi::GenericMethod ("string", "@brief Method QString QTextBoundaryFinder::string()\n", true, &_init_f_string_c0, &_call_f_string_c0);
  methods += new qt_gsi::GenericMethod ("toEnd", "@brief Method void QTextBoundaryFinder::toEnd()\n", false, &_init_f_toEnd_0, &_call_f_toEnd_0);
  methods += new qt_gsi::GenericMethod ("toNextBoundary", "@brief Method qsizetype QTextBoundaryFinder::toNextBoundary()\n", false, &_init_f_toNextBoundary_0, &_call_f_toNextBoundary_0);
  methods += new qt_gsi::GenericMethod ("toPreviousBoundary", "@brief Method qsizetype QTextBoundaryFinder::toPreviousBoundary()\n", false, &_init_f_toPreviousBoundary_0, &_call_f_toPreviousBoundary_0);
  methods += new qt_gsi::GenericMethod ("toStart", "@brief Method void QTextBoundaryFinder::toStart()\n", false, &_init_f_toStart_0, &_call_f_toStart_0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QTextBoundaryFinder::BoundaryType QTextBoundaryFinder::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QTextBoundaryFinder> decl_QTextBoundaryFinder ("QtCore", "QTextBoundaryFinder",
  methods_QTextBoundaryFinder (),
  "@qt\n@brief Binding of QTextBoundaryFinder");


GSI_QTCORE_PUBLIC gsi::Class<QTextBoundaryFinder> &qtdecl_QTextBoundaryFinder () { return decl_QTextBoundaryFinder; }

}


//  Implementation of the enum wrapper class for QTextBoundaryFinder::BoundaryReason
namespace qt_gsi
{

static gsi::Enum<QTextBoundaryFinder::BoundaryReason> decl_QTextBoundaryFinder_BoundaryReason_Enum ("QtCore", "QTextBoundaryFinder_BoundaryReason",
    gsi::enum_const ("NotAtBoundary", QTextBoundaryFinder::NotAtBoundary, "@brief Enum constant QTextBoundaryFinder::NotAtBoundary") +
    gsi::enum_const ("BreakOpportunity", QTextBoundaryFinder::BreakOpportunity, "@brief Enum constant QTextBoundaryFinder::BreakOpportunity") +
    gsi::enum_const ("StartOfItem", QTextBoundaryFinder::StartOfItem, "@brief Enum constant QTextBoundaryFinder::StartOfItem") +
    gsi::enum_const ("EndOfItem", QTextBoundaryFinder::EndOfItem, "@brief Enum constant QTextBoundaryFinder::EndOfItem") +
    gsi::enum_const ("MandatoryBreak", QTextBoundaryFinder::MandatoryBreak, "@brief Enum constant QTextBoundaryFinder::MandatoryBreak") +
    gsi::enum_const ("SoftHyphen", QTextBoundaryFinder::SoftHyphen, "@brief Enum constant QTextBoundaryFinder::SoftHyphen"),
  "@qt\n@brief This class represents the QTextBoundaryFinder::BoundaryReason enum");

static gsi::QFlagsClass<QTextBoundaryFinder::BoundaryReason > decl_QTextBoundaryFinder_BoundaryReason_Enums ("QtCore", "QTextBoundaryFinder_QFlags_BoundaryReason",
  "@qt\n@brief This class represents the QFlags<QTextBoundaryFinder::BoundaryReason> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextBoundaryFinder> inject_QTextBoundaryFinder_BoundaryReason_Enum_in_parent (decl_QTextBoundaryFinder_BoundaryReason_Enum.defs ());
static gsi::ClassExt<QTextBoundaryFinder> decl_QTextBoundaryFinder_BoundaryReason_Enum_as_child (decl_QTextBoundaryFinder_BoundaryReason_Enum, "BoundaryReason");
static gsi::ClassExt<QTextBoundaryFinder> decl_QTextBoundaryFinder_BoundaryReason_Enums_as_child (decl_QTextBoundaryFinder_BoundaryReason_Enums, "QFlags_BoundaryReason");

}


//  Implementation of the enum wrapper class for QTextBoundaryFinder::BoundaryType
namespace qt_gsi
{

static gsi::Enum<QTextBoundaryFinder::BoundaryType> decl_QTextBoundaryFinder_BoundaryType_Enum ("QtCore", "QTextBoundaryFinder_BoundaryType",
    gsi::enum_const ("Grapheme", QTextBoundaryFinder::Grapheme, "@brief Enum constant QTextBoundaryFinder::Grapheme") +
    gsi::enum_const ("Word", QTextBoundaryFinder::Word, "@brief Enum constant QTextBoundaryFinder::Word") +
    gsi::enum_const ("Sentence", QTextBoundaryFinder::Sentence, "@brief Enum constant QTextBoundaryFinder::Sentence") +
    gsi::enum_const ("Line", QTextBoundaryFinder::Line, "@brief Enum constant QTextBoundaryFinder::Line"),
  "@qt\n@brief This class represents the QTextBoundaryFinder::BoundaryType enum");

static gsi::QFlagsClass<QTextBoundaryFinder::BoundaryType > decl_QTextBoundaryFinder_BoundaryType_Enums ("QtCore", "QTextBoundaryFinder_QFlags_BoundaryType",
  "@qt\n@brief This class represents the QFlags<QTextBoundaryFinder::BoundaryType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextBoundaryFinder> inject_QTextBoundaryFinder_BoundaryType_Enum_in_parent (decl_QTextBoundaryFinder_BoundaryType_Enum.defs ());
static gsi::ClassExt<QTextBoundaryFinder> decl_QTextBoundaryFinder_BoundaryType_Enum_as_child (decl_QTextBoundaryFinder_BoundaryType_Enum, "BoundaryType");
static gsi::ClassExt<QTextBoundaryFinder> decl_QTextBoundaryFinder_BoundaryType_Enums_as_child (decl_QTextBoundaryFinder_BoundaryType_Enums, "QFlags_BoundaryType");

}

