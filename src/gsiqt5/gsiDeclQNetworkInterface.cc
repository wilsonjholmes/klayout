
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
*  @file gsiDeclQNetworkInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkInterface>
#include <QHostAddress>
#include <QNetworkAddressEntry>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkInterface

//  Constructor QNetworkInterface::QNetworkInterface()


static void _init_ctor_QNetworkInterface_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QNetworkInterface> ();
}

static void _call_ctor_QNetworkInterface_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkInterface *> (new QNetworkInterface ());
}


//  Constructor QNetworkInterface::QNetworkInterface(const QNetworkInterface &other)


static void _init_ctor_QNetworkInterface_3053 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkInterface & > (argspec_0);
  decl->set_return_new<QNetworkInterface> ();
}

static void _call_ctor_QNetworkInterface_3053 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkInterface &arg1 = args.read<const QNetworkInterface & > (heap);
  ret.write<QNetworkInterface *> (new QNetworkInterface (arg1));
}


// QList<QNetworkAddressEntry> QNetworkInterface::addressEntries()


static void _init_f_addressEntries_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QNetworkAddressEntry> > ();
}

static void _call_f_addressEntries_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QNetworkAddressEntry> > ((QList<QNetworkAddressEntry>)((QNetworkInterface *)cls)->addressEntries ());
}


// QFlags<QNetworkInterface::InterfaceFlag> QNetworkInterface::flags()


static void _init_f_flags_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QNetworkInterface::InterfaceFlag> > ();
}

static void _call_f_flags_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QNetworkInterface::InterfaceFlag> > ((QFlags<QNetworkInterface::InterfaceFlag>)((QNetworkInterface *)cls)->flags ());
}


// QString QNetworkInterface::hardwareAddress()


static void _init_f_hardwareAddress_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_hardwareAddress_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkInterface *)cls)->hardwareAddress ());
}


// QString QNetworkInterface::humanReadableName()


static void _init_f_humanReadableName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_humanReadableName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkInterface *)cls)->humanReadableName ());
}


// int QNetworkInterface::index()


static void _init_f_index_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_index_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QNetworkInterface *)cls)->index ());
}


// bool QNetworkInterface::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkInterface *)cls)->isValid ());
}


// QString QNetworkInterface::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkInterface *)cls)->name ());
}


// QNetworkInterface &QNetworkInterface::operator=(const QNetworkInterface &other)


static void _init_f_operator_eq__3053 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkInterface & > (argspec_0);
  decl->set_return<QNetworkInterface & > ();
}

static void _call_f_operator_eq__3053 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkInterface &arg1 = args.read<const QNetworkInterface & > (heap);
  ret.write<QNetworkInterface & > ((QNetworkInterface &)((QNetworkInterface *)cls)->operator= (arg1));
}


// void QNetworkInterface::swap(QNetworkInterface &other)


static void _init_f_swap_2358 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QNetworkInterface & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2358 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkInterface &arg1 = args.read<QNetworkInterface & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkInterface *)cls)->swap (arg1);
}


// static QList<QHostAddress> QNetworkInterface::allAddresses()


static void _init_f_allAddresses_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QHostAddress> > ();
}

static void _call_f_allAddresses_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QHostAddress> > ((QList<QHostAddress>)QNetworkInterface::allAddresses ());
}


// static QList<QNetworkInterface> QNetworkInterface::allInterfaces()


static void _init_f_allInterfaces_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QNetworkInterface> > ();
}

static void _call_f_allInterfaces_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QNetworkInterface> > ((QList<QNetworkInterface>)QNetworkInterface::allInterfaces ());
}


// static QNetworkInterface QNetworkInterface::interfaceFromIndex(int index)


static void _init_f_interfaceFromIndex_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QNetworkInterface > ();
}

static void _call_f_interfaceFromIndex_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QNetworkInterface > ((QNetworkInterface)QNetworkInterface::interfaceFromIndex (arg1));
}


// static QNetworkInterface QNetworkInterface::interfaceFromName(const QString &name)


static void _init_f_interfaceFromName_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QNetworkInterface > ();
}

static void _call_f_interfaceFromName_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QNetworkInterface > ((QNetworkInterface)QNetworkInterface::interfaceFromName (arg1));
}



namespace gsi
{

static gsi::Methods methods_QNetworkInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkInterface::QNetworkInterface()\nThis method creates an object of class QNetworkInterface.", &_init_ctor_QNetworkInterface_0, &_call_ctor_QNetworkInterface_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkInterface::QNetworkInterface(const QNetworkInterface &other)\nThis method creates an object of class QNetworkInterface.", &_init_ctor_QNetworkInterface_3053, &_call_ctor_QNetworkInterface_3053);
  methods += new qt_gsi::GenericMethod ("addressEntries", "@brief Method QList<QNetworkAddressEntry> QNetworkInterface::addressEntries()\n", true, &_init_f_addressEntries_c0, &_call_f_addressEntries_c0);
  methods += new qt_gsi::GenericMethod ("flags", "@brief Method QFlags<QNetworkInterface::InterfaceFlag> QNetworkInterface::flags()\n", true, &_init_f_flags_c0, &_call_f_flags_c0);
  methods += new qt_gsi::GenericMethod ("hardwareAddress", "@brief Method QString QNetworkInterface::hardwareAddress()\n", true, &_init_f_hardwareAddress_c0, &_call_f_hardwareAddress_c0);
  methods += new qt_gsi::GenericMethod ("humanReadableName", "@brief Method QString QNetworkInterface::humanReadableName()\n", true, &_init_f_humanReadableName_c0, &_call_f_humanReadableName_c0);
  methods += new qt_gsi::GenericMethod ("index", "@brief Method int QNetworkInterface::index()\n", true, &_init_f_index_c0, &_call_f_index_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QNetworkInterface::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QNetworkInterface::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QNetworkInterface &QNetworkInterface::operator=(const QNetworkInterface &other)\n", false, &_init_f_operator_eq__3053, &_call_f_operator_eq__3053);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QNetworkInterface::swap(QNetworkInterface &other)\n", false, &_init_f_swap_2358, &_call_f_swap_2358);
  methods += new qt_gsi::GenericStaticMethod ("allAddresses", "@brief Static method QList<QHostAddress> QNetworkInterface::allAddresses()\nThis method is static and can be called without an instance.", &_init_f_allAddresses_0, &_call_f_allAddresses_0);
  methods += new qt_gsi::GenericStaticMethod ("allInterfaces", "@brief Static method QList<QNetworkInterface> QNetworkInterface::allInterfaces()\nThis method is static and can be called without an instance.", &_init_f_allInterfaces_0, &_call_f_allInterfaces_0);
  methods += new qt_gsi::GenericStaticMethod ("interfaceFromIndex", "@brief Static method QNetworkInterface QNetworkInterface::interfaceFromIndex(int index)\nThis method is static and can be called without an instance.", &_init_f_interfaceFromIndex_767, &_call_f_interfaceFromIndex_767);
  methods += new qt_gsi::GenericStaticMethod ("interfaceFromName", "@brief Static method QNetworkInterface QNetworkInterface::interfaceFromName(const QString &name)\nThis method is static and can be called without an instance.", &_init_f_interfaceFromName_2025, &_call_f_interfaceFromName_2025);
  return methods;
}

gsi::Class<QNetworkInterface> decl_QNetworkInterface ("QNetworkInterface",
  methods_QNetworkInterface (),
  "@qt\n@brief Binding of QNetworkInterface");


GSIQT_PUBLIC gsi::Class<QNetworkInterface> &qtdecl_QNetworkInterface () { return decl_QNetworkInterface; }

}


//  Implementation of the enum wrapper class for QNetworkInterface::InterfaceFlag
namespace qt_gsi
{

static gsi::Enum<QNetworkInterface::InterfaceFlag> decl_QNetworkInterface_InterfaceFlag_Enum ("QNetworkInterface_InterfaceFlag",
    gsi::enum_const ("IsUp", QNetworkInterface::IsUp, "@brief Enum constant QNetworkInterface::IsUp") +
    gsi::enum_const ("IsRunning", QNetworkInterface::IsRunning, "@brief Enum constant QNetworkInterface::IsRunning") +
    gsi::enum_const ("CanBroadcast", QNetworkInterface::CanBroadcast, "@brief Enum constant QNetworkInterface::CanBroadcast") +
    gsi::enum_const ("IsLoopBack", QNetworkInterface::IsLoopBack, "@brief Enum constant QNetworkInterface::IsLoopBack") +
    gsi::enum_const ("IsPointToPoint", QNetworkInterface::IsPointToPoint, "@brief Enum constant QNetworkInterface::IsPointToPoint") +
    gsi::enum_const ("CanMulticast", QNetworkInterface::CanMulticast, "@brief Enum constant QNetworkInterface::CanMulticast"),
  "@qt\n@brief This class represents the QNetworkInterface::InterfaceFlag enum");

static gsi::QFlagsClass<QNetworkInterface::InterfaceFlag > decl_QNetworkInterface_InterfaceFlag_Enums ("QNetworkInterface_QFlags_InterfaceFlag",
  "@qt\n@brief This class represents the QFlags<QNetworkInterface::InterfaceFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkInterface> inject_QNetworkInterface_InterfaceFlag_Enum_in_parent (decl_QNetworkInterface_InterfaceFlag_Enum.defs ());
static gsi::ClassExt<QNetworkInterface> decl_QNetworkInterface_InterfaceFlag_Enum_as_child (decl_QNetworkInterface_InterfaceFlag_Enum, "InterfaceFlag");
static gsi::ClassExt<QNetworkInterface> decl_QNetworkInterface_InterfaceFlag_Enums_as_child (decl_QNetworkInterface_InterfaceFlag_Enums, "QFlags_InterfaceFlag");

}

