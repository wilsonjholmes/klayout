
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQXmlNamePool.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlNamePool>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlNamePool

//  Constructor QXmlNamePool::QXmlNamePool()


static void _init_ctor_QXmlNamePool_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlNamePool> ();
}

static void _call_ctor_QXmlNamePool_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlNamePool *> (new QXmlNamePool ());
}


//  Constructor QXmlNamePool::QXmlNamePool(const QXmlNamePool &other)


static void _init_ctor_QXmlNamePool_2494 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlNamePool & > (argspec_0);
  decl->set_return_new<QXmlNamePool> ();
}

static void _call_ctor_QXmlNamePool_2494 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNamePool &arg1 = gsi::arg_reader<const QXmlNamePool & >() (args, heap);
  ret.write<QXmlNamePool *> (new QXmlNamePool (arg1));
}


// QXmlNamePool &QXmlNamePool::operator=(const QXmlNamePool &other)


static void _init_f_operator_eq__2494 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlNamePool & > (argspec_0);
  decl->set_return<QXmlNamePool & > ();
}

static void _call_f_operator_eq__2494 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNamePool &arg1 = gsi::arg_reader<const QXmlNamePool & >() (args, heap);
  ret.write<QXmlNamePool & > ((QXmlNamePool &)((QXmlNamePool *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QXmlNamePool () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlNamePool::QXmlNamePool()\nThis method creates an object of class QXmlNamePool.", &_init_ctor_QXmlNamePool_0, &_call_ctor_QXmlNamePool_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlNamePool::QXmlNamePool(const QXmlNamePool &other)\nThis method creates an object of class QXmlNamePool.", &_init_ctor_QXmlNamePool_2494, &_call_ctor_QXmlNamePool_2494);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlNamePool &QXmlNamePool::operator=(const QXmlNamePool &other)\n", false, &_init_f_operator_eq__2494, &_call_f_operator_eq__2494);
  return methods;
}

gsi::Class<QXmlNamePool> decl_QXmlNamePool ("QtXmlPatterns", "QXmlNamePool",
  methods_QXmlNamePool (),
  "@qt\n@brief Binding of QXmlNamePool");


GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QXmlNamePool> &qtdecl_QXmlNamePool () { return decl_QXmlNamePool; }

}

