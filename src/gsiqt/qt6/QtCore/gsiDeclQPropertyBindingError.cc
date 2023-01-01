
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
*  @file gsiDeclQPropertyBindingError.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPropertyBindingError>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPropertyBindingError

//  Constructor QPropertyBindingError::QPropertyBindingError()


static void _init_ctor_QPropertyBindingError_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPropertyBindingError> ();
}

static void _call_ctor_QPropertyBindingError_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPropertyBindingError *> (new QPropertyBindingError ());
}


//  Constructor QPropertyBindingError::QPropertyBindingError(QPropertyBindingError::Type type, const QString &description)


static void _init_ctor_QPropertyBindingError_5058 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QPropertyBindingError::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("description", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QPropertyBindingError> ();
}

static void _call_ctor_QPropertyBindingError_5058 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPropertyBindingError::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPropertyBindingError::Type>::target_type & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QPropertyBindingError *> (new QPropertyBindingError (qt_gsi::QtToCppAdaptor<QPropertyBindingError::Type>(arg1).cref(), arg2));
}


//  Constructor QPropertyBindingError::QPropertyBindingError(const QPropertyBindingError &other)


static void _init_ctor_QPropertyBindingError_3484 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPropertyBindingError & > (argspec_0);
  decl->set_return_new<QPropertyBindingError> ();
}

static void _call_ctor_QPropertyBindingError_3484 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPropertyBindingError &arg1 = gsi::arg_reader<const QPropertyBindingError & >() (args, heap);
  ret.write<QPropertyBindingError *> (new QPropertyBindingError (arg1));
}


// QString QPropertyBindingError::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QPropertyBindingError *)cls)->description ());
}


// bool QPropertyBindingError::hasError()


static void _init_f_hasError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPropertyBindingError *)cls)->hasError ());
}


// QPropertyBindingError &QPropertyBindingError::operator=(const QPropertyBindingError &other)


static void _init_f_operator_eq__3484 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPropertyBindingError & > (argspec_0);
  decl->set_return<QPropertyBindingError & > ();
}

static void _call_f_operator_eq__3484 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPropertyBindingError &arg1 = gsi::arg_reader<const QPropertyBindingError & >() (args, heap);
  ret.write<QPropertyBindingError & > ((QPropertyBindingError &)((QPropertyBindingError *)cls)->operator= (arg1));
}


// QPropertyBindingError::Type QPropertyBindingError::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPropertyBindingError::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPropertyBindingError::Type>::target_type > ((qt_gsi::Converter<QPropertyBindingError::Type>::target_type)qt_gsi::CppToQtAdaptor<QPropertyBindingError::Type>(((QPropertyBindingError *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QPropertyBindingError () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPropertyBindingError::QPropertyBindingError()\nThis method creates an object of class QPropertyBindingError.", &_init_ctor_QPropertyBindingError_0, &_call_ctor_QPropertyBindingError_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPropertyBindingError::QPropertyBindingError(QPropertyBindingError::Type type, const QString &description)\nThis method creates an object of class QPropertyBindingError.", &_init_ctor_QPropertyBindingError_5058, &_call_ctor_QPropertyBindingError_5058);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPropertyBindingError::QPropertyBindingError(const QPropertyBindingError &other)\nThis method creates an object of class QPropertyBindingError.", &_init_ctor_QPropertyBindingError_3484, &_call_ctor_QPropertyBindingError_3484);
  methods += new qt_gsi::GenericMethod ("description", "@brief Method QString QPropertyBindingError::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod ("hasError", "@brief Method bool QPropertyBindingError::hasError()\n", true, &_init_f_hasError_c0, &_call_f_hasError_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QPropertyBindingError &QPropertyBindingError::operator=(const QPropertyBindingError &other)\n", false, &_init_f_operator_eq__3484, &_call_f_operator_eq__3484);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QPropertyBindingError::Type QPropertyBindingError::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QPropertyBindingError> decl_QPropertyBindingError ("QtCore", "QPropertyBindingError",
  methods_QPropertyBindingError (),
  "@qt\n@brief Binding of QPropertyBindingError");


GSI_QTCORE_PUBLIC gsi::Class<QPropertyBindingError> &qtdecl_QPropertyBindingError () { return decl_QPropertyBindingError; }

}


//  Implementation of the enum wrapper class for QPropertyBindingError::Type
namespace qt_gsi
{

static gsi::Enum<QPropertyBindingError::Type> decl_QPropertyBindingError_Type_Enum ("QtCore", "QPropertyBindingError_Type",
    gsi::enum_const ("NoError", QPropertyBindingError::NoError, "@brief Enum constant QPropertyBindingError::NoError") +
    gsi::enum_const ("BindingLoop", QPropertyBindingError::BindingLoop, "@brief Enum constant QPropertyBindingError::BindingLoop") +
    gsi::enum_const ("EvaluationError", QPropertyBindingError::EvaluationError, "@brief Enum constant QPropertyBindingError::EvaluationError") +
    gsi::enum_const ("UnknownError", QPropertyBindingError::UnknownError, "@brief Enum constant QPropertyBindingError::UnknownError"),
  "@qt\n@brief This class represents the QPropertyBindingError::Type enum");

static gsi::QFlagsClass<QPropertyBindingError::Type > decl_QPropertyBindingError_Type_Enums ("QtCore", "QPropertyBindingError_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QPropertyBindingError::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPropertyBindingError> inject_QPropertyBindingError_Type_Enum_in_parent (decl_QPropertyBindingError_Type_Enum.defs ());
static gsi::ClassExt<QPropertyBindingError> decl_QPropertyBindingError_Type_Enum_as_child (decl_QPropertyBindingError_Type_Enum, "Type");
static gsi::ClassExt<QPropertyBindingError> decl_QPropertyBindingError_Type_Enums_as_child (decl_QPropertyBindingError_Type_Enums, "QFlags_Type");

}

