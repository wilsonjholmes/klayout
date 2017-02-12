
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
*  @file gsiDeclQCollatorSortKey.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCollatorSortKey>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCollatorSortKey

//  Constructor QCollatorSortKey::QCollatorSortKey(const QCollatorSortKey &other)


static void _init_ctor_QCollatorSortKey_2947 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCollatorSortKey & > (argspec_0);
  decl->set_return_new<QCollatorSortKey> ();
}

static void _call_ctor_QCollatorSortKey_2947 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCollatorSortKey &arg1 = args.read<const QCollatorSortKey & > (heap);
  ret.write<QCollatorSortKey *> (new QCollatorSortKey (arg1));
}


// int QCollatorSortKey::compare(const QCollatorSortKey &key)


static void _init_f_compare_c2947 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QCollatorSortKey & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_compare_c2947 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCollatorSortKey &arg1 = args.read<const QCollatorSortKey & > (heap);
  ret.write<int > ((int)((QCollatorSortKey *)cls)->compare (arg1));
}


// QCollatorSortKey &QCollatorSortKey::operator=(const QCollatorSortKey &other)


static void _init_f_operator_eq__2947 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCollatorSortKey & > (argspec_0);
  decl->set_return<QCollatorSortKey & > ();
}

static void _call_f_operator_eq__2947 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCollatorSortKey &arg1 = args.read<const QCollatorSortKey & > (heap);
  ret.write<QCollatorSortKey & > ((QCollatorSortKey &)((QCollatorSortKey *)cls)->operator= (arg1));
}


// void QCollatorSortKey::swap(QCollatorSortKey &other)


static void _init_f_swap_2252 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QCollatorSortKey & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2252 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QCollatorSortKey &arg1 = args.read<QCollatorSortKey & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCollatorSortKey *)cls)->swap (arg1);
}


//  bool ::operator<(const QCollatorSortKey &lhs, const QCollatorSortKey &rhs)
static bool op_QCollatorSortKey_operator_lt__5786(const QCollatorSortKey *_self, const QCollatorSortKey &rhs) {
  return ::operator<(*_self, rhs);
}


namespace gsi
{

static gsi::Methods methods_QCollatorSortKey () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCollatorSortKey::QCollatorSortKey(const QCollatorSortKey &other)\nThis method creates an object of class QCollatorSortKey.", &_init_ctor_QCollatorSortKey_2947, &_call_ctor_QCollatorSortKey_2947);
  methods += new qt_gsi::GenericMethod ("compare", "@brief Method int QCollatorSortKey::compare(const QCollatorSortKey &key)\n", true, &_init_f_compare_c2947, &_call_f_compare_c2947);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCollatorSortKey &QCollatorSortKey::operator=(const QCollatorSortKey &other)\n", false, &_init_f_operator_eq__2947, &_call_f_operator_eq__2947);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QCollatorSortKey::swap(QCollatorSortKey &other)\n", false, &_init_f_swap_2252, &_call_f_swap_2252);
  methods += gsi::method_ext("<", &::op_QCollatorSortKey_operator_lt__5786, gsi::arg ("rhs"), "@brief Operator bool ::operator<(const QCollatorSortKey &lhs, const QCollatorSortKey &rhs)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QCollatorSortKey> decl_QCollatorSortKey ("QCollatorSortKey",
  methods_QCollatorSortKey (),
  "@qt\n@brief Binding of QCollatorSortKey");


GSIQT_PUBLIC gsi::Class<QCollatorSortKey> &qtdecl_QCollatorSortKey () { return decl_QCollatorSortKey; }

}

