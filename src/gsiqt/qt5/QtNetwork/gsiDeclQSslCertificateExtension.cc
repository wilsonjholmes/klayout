
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
*  @file gsiDeclQSslCertificateExtension.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSslCertificateExtension>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSslCertificateExtension

//  Constructor QSslCertificateExtension::QSslCertificateExtension()


static void _init_ctor_QSslCertificateExtension_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSslCertificateExtension> ();
}

static void _call_ctor_QSslCertificateExtension_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslCertificateExtension *> (new QSslCertificateExtension ());
}


//  Constructor QSslCertificateExtension::QSslCertificateExtension(const QSslCertificateExtension &other)


static void _init_ctor_QSslCertificateExtension_3780 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslCertificateExtension & > (argspec_0);
  decl->set_return_new<QSslCertificateExtension> ();
}

static void _call_ctor_QSslCertificateExtension_3780 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslCertificateExtension &arg1 = gsi::arg_reader<const QSslCertificateExtension & >() (args, heap);
  ret.write<QSslCertificateExtension *> (new QSslCertificateExtension (arg1));
}


// bool QSslCertificateExtension::isCritical()


static void _init_f_isCritical_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCritical_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslCertificateExtension *)cls)->isCritical ());
}


// bool QSslCertificateExtension::isSupported()


static void _init_f_isSupported_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSupported_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslCertificateExtension *)cls)->isSupported ());
}


// QString QSslCertificateExtension::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSslCertificateExtension *)cls)->name ());
}


// QString QSslCertificateExtension::oid()


static void _init_f_oid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_oid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSslCertificateExtension *)cls)->oid ());
}


// QSslCertificateExtension &QSslCertificateExtension::operator=(const QSslCertificateExtension &other)


static void _init_f_operator_eq__3780 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslCertificateExtension & > (argspec_0);
  decl->set_return<QSslCertificateExtension & > ();
}

static void _call_f_operator_eq__3780 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslCertificateExtension &arg1 = gsi::arg_reader<const QSslCertificateExtension & >() (args, heap);
  ret.write<QSslCertificateExtension & > ((QSslCertificateExtension &)((QSslCertificateExtension *)cls)->operator= (arg1));
}


// void QSslCertificateExtension::swap(QSslCertificateExtension &other)


static void _init_f_swap_3085 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QSslCertificateExtension & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_3085 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSslCertificateExtension &arg1 = gsi::arg_reader<QSslCertificateExtension & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslCertificateExtension *)cls)->swap (arg1);
}


// QVariant QSslCertificateExtension::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QSslCertificateExtension *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QSslCertificateExtension () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslCertificateExtension::QSslCertificateExtension()\nThis method creates an object of class QSslCertificateExtension.", &_init_ctor_QSslCertificateExtension_0, &_call_ctor_QSslCertificateExtension_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslCertificateExtension::QSslCertificateExtension(const QSslCertificateExtension &other)\nThis method creates an object of class QSslCertificateExtension.", &_init_ctor_QSslCertificateExtension_3780, &_call_ctor_QSslCertificateExtension_3780);
  methods += new qt_gsi::GenericMethod ("isCritical?", "@brief Method bool QSslCertificateExtension::isCritical()\n", true, &_init_f_isCritical_c0, &_call_f_isCritical_c0);
  methods += new qt_gsi::GenericMethod ("isSupported?", "@brief Method bool QSslCertificateExtension::isSupported()\n", true, &_init_f_isSupported_c0, &_call_f_isSupported_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QSslCertificateExtension::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("oid", "@brief Method QString QSslCertificateExtension::oid()\n", true, &_init_f_oid_c0, &_call_f_oid_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSslCertificateExtension &QSslCertificateExtension::operator=(const QSslCertificateExtension &other)\n", false, &_init_f_operator_eq__3780, &_call_f_operator_eq__3780);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QSslCertificateExtension::swap(QSslCertificateExtension &other)\n", false, &_init_f_swap_3085, &_call_f_swap_3085);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariant QSslCertificateExtension::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QSslCertificateExtension> decl_QSslCertificateExtension ("QtNetwork", "QSslCertificateExtension",
  methods_QSslCertificateExtension (),
  "@qt\n@brief Binding of QSslCertificateExtension");


GSI_QTNETWORK_PUBLIC gsi::Class<QSslCertificateExtension> &qtdecl_QSslCertificateExtension () { return decl_QSslCertificateExtension; }

}

