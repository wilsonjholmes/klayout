
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
*  @file gsiDeclQProcessEnvironment.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QProcessEnvironment>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QProcessEnvironment

//  Constructor QProcessEnvironment::QProcessEnvironment()


static void _init_ctor_QProcessEnvironment_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QProcessEnvironment> ();
}

static void _call_ctor_QProcessEnvironment_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QProcessEnvironment *> (new QProcessEnvironment ());
}


//  Constructor QProcessEnvironment::QProcessEnvironment(const QProcessEnvironment &other)


static void _init_ctor_QProcessEnvironment_3302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QProcessEnvironment & > (argspec_0);
  decl->set_return_new<QProcessEnvironment> ();
}

static void _call_ctor_QProcessEnvironment_3302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QProcessEnvironment &arg1 = args.read<const QProcessEnvironment & > (heap);
  ret.write<QProcessEnvironment *> (new QProcessEnvironment (arg1));
}


// void QProcessEnvironment::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QProcessEnvironment *)cls)->clear ();
}


// bool QProcessEnvironment::contains(const QString &name)


static void _init_f_contains_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QProcessEnvironment *)cls)->contains (arg1));
}


// void QProcessEnvironment::insert(const QString &name, const QString &value)


static void _init_f_insert_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_insert_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QProcessEnvironment *)cls)->insert (arg1, arg2);
}


// void QProcessEnvironment::insert(const QProcessEnvironment &e)


static void _init_f_insert_3302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<const QProcessEnvironment & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_insert_3302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QProcessEnvironment &arg1 = args.read<const QProcessEnvironment & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QProcessEnvironment *)cls)->insert (arg1);
}


// bool QProcessEnvironment::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QProcessEnvironment *)cls)->isEmpty ());
}


// QStringList QProcessEnvironment::keys()


static void _init_f_keys_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_keys_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QProcessEnvironment *)cls)->keys ());
}


// bool QProcessEnvironment::operator!=(const QProcessEnvironment &other)


static void _init_f_operator_excl__eq__c3302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QProcessEnvironment & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QProcessEnvironment &arg1 = args.read<const QProcessEnvironment & > (heap);
  ret.write<bool > ((bool)((QProcessEnvironment *)cls)->operator!= (arg1));
}


// QProcessEnvironment &QProcessEnvironment::operator=(const QProcessEnvironment &other)


static void _init_f_operator_eq__3302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QProcessEnvironment & > (argspec_0);
  decl->set_return<QProcessEnvironment & > ();
}

static void _call_f_operator_eq__3302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QProcessEnvironment &arg1 = args.read<const QProcessEnvironment & > (heap);
  ret.write<QProcessEnvironment & > ((QProcessEnvironment &)((QProcessEnvironment *)cls)->operator= (arg1));
}


// bool QProcessEnvironment::operator==(const QProcessEnvironment &other)


static void _init_f_operator_eq__eq__c3302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QProcessEnvironment & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QProcessEnvironment &arg1 = args.read<const QProcessEnvironment & > (heap);
  ret.write<bool > ((bool)((QProcessEnvironment *)cls)->operator== (arg1));
}


// void QProcessEnvironment::remove(const QString &name)


static void _init_f_remove_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_remove_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QProcessEnvironment *)cls)->remove (arg1);
}


// void QProcessEnvironment::swap(QProcessEnvironment &other)


static void _init_f_swap_2607 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QProcessEnvironment & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2607 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QProcessEnvironment &arg1 = args.read<QProcessEnvironment & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QProcessEnvironment *)cls)->swap (arg1);
}


// QStringList QProcessEnvironment::toStringList()


static void _init_f_toStringList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_toStringList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QProcessEnvironment *)cls)->toStringList ());
}


// QString QProcessEnvironment::value(const QString &name, const QString &defaultValue)


static void _init_f_value_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("defaultValue", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_value_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QString > ((QString)((QProcessEnvironment *)cls)->value (arg1, arg2));
}


// static QProcessEnvironment QProcessEnvironment::systemEnvironment()


static void _init_f_systemEnvironment_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QProcessEnvironment > ();
}

static void _call_f_systemEnvironment_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QProcessEnvironment > ((QProcessEnvironment)QProcessEnvironment::systemEnvironment ());
}



namespace gsi
{

static gsi::Methods methods_QProcessEnvironment () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QProcessEnvironment::QProcessEnvironment()\nThis method creates an object of class QProcessEnvironment.", &_init_ctor_QProcessEnvironment_0, &_call_ctor_QProcessEnvironment_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QProcessEnvironment::QProcessEnvironment(const QProcessEnvironment &other)\nThis method creates an object of class QProcessEnvironment.", &_init_ctor_QProcessEnvironment_3302, &_call_ctor_QProcessEnvironment_3302);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QProcessEnvironment::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QProcessEnvironment::contains(const QString &name)\n", true, &_init_f_contains_c2025, &_call_f_contains_c2025);
  methods += new qt_gsi::GenericMethod ("insert", "@brief Method void QProcessEnvironment::insert(const QString &name, const QString &value)\n", false, &_init_f_insert_3942, &_call_f_insert_3942);
  methods += new qt_gsi::GenericMethod ("insert", "@brief Method void QProcessEnvironment::insert(const QProcessEnvironment &e)\n", false, &_init_f_insert_3302, &_call_f_insert_3302);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QProcessEnvironment::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Method QStringList QProcessEnvironment::keys()\n", true, &_init_f_keys_c0, &_call_f_keys_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QProcessEnvironment::operator!=(const QProcessEnvironment &other)\n", true, &_init_f_operator_excl__eq__c3302, &_call_f_operator_excl__eq__c3302);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QProcessEnvironment &QProcessEnvironment::operator=(const QProcessEnvironment &other)\n", false, &_init_f_operator_eq__3302, &_call_f_operator_eq__3302);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QProcessEnvironment::operator==(const QProcessEnvironment &other)\n", true, &_init_f_operator_eq__eq__c3302, &_call_f_operator_eq__eq__c3302);
  methods += new qt_gsi::GenericMethod ("remove", "@brief Method void QProcessEnvironment::remove(const QString &name)\n", false, &_init_f_remove_2025, &_call_f_remove_2025);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QProcessEnvironment::swap(QProcessEnvironment &other)\n", false, &_init_f_swap_2607, &_call_f_swap_2607);
  methods += new qt_gsi::GenericMethod ("toStringList", "@brief Method QStringList QProcessEnvironment::toStringList()\n", true, &_init_f_toStringList_c0, &_call_f_toStringList_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QString QProcessEnvironment::value(const QString &name, const QString &defaultValue)\n", true, &_init_f_value_c3942, &_call_f_value_c3942);
  methods += new qt_gsi::GenericStaticMethod ("systemEnvironment", "@brief Static method QProcessEnvironment QProcessEnvironment::systemEnvironment()\nThis method is static and can be called without an instance.", &_init_f_systemEnvironment_0, &_call_f_systemEnvironment_0);
  return methods;
}

gsi::Class<QProcessEnvironment> decl_QProcessEnvironment ("QProcessEnvironment",
  methods_QProcessEnvironment (),
  "@qt\n@brief Binding of QProcessEnvironment");


GSIQT_PUBLIC gsi::Class<QProcessEnvironment> &qtdecl_QProcessEnvironment () { return decl_QProcessEnvironment; }

}

