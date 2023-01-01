
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
*  @file gsiDeclQIODeviceBase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIODeviceBase>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIODeviceBase

//  Constructor QIODeviceBase::QIODeviceBase()


static void _init_ctor_QIODeviceBase_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QIODeviceBase> ();
}

static void _call_ctor_QIODeviceBase_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODeviceBase *> (new QIODeviceBase ());
}



namespace gsi
{

static gsi::Methods methods_QIODeviceBase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIODeviceBase::QIODeviceBase()\nThis method creates an object of class QIODeviceBase.", &_init_ctor_QIODeviceBase_0, &_call_ctor_QIODeviceBase_0);
  return methods;
}

gsi::Class<QIODeviceBase> decl_QIODeviceBase ("QtCore", "QIODeviceBase",
  methods_QIODeviceBase (),
  "@qt\n@brief Binding of QIODeviceBase");


GSI_QTCORE_PUBLIC gsi::Class<QIODeviceBase> &qtdecl_QIODeviceBase () { return decl_QIODeviceBase; }

}


//  Implementation of the enum wrapper class for QIODeviceBase::OpenModeFlag
namespace qt_gsi
{

static gsi::Enum<QIODeviceBase::OpenModeFlag> decl_QIODeviceBase_OpenModeFlag_Enum ("QtCore", "QIODeviceBase_OpenModeFlag",
    gsi::enum_const ("NotOpen", QIODeviceBase::NotOpen, "@brief Enum constant QIODeviceBase::NotOpen") +
    gsi::enum_const ("ReadOnly", QIODeviceBase::ReadOnly, "@brief Enum constant QIODeviceBase::ReadOnly") +
    gsi::enum_const ("WriteOnly", QIODeviceBase::WriteOnly, "@brief Enum constant QIODeviceBase::WriteOnly") +
    gsi::enum_const ("ReadWrite", QIODeviceBase::ReadWrite, "@brief Enum constant QIODeviceBase::ReadWrite") +
    gsi::enum_const ("Append", QIODeviceBase::Append, "@brief Enum constant QIODeviceBase::Append") +
    gsi::enum_const ("Truncate", QIODeviceBase::Truncate, "@brief Enum constant QIODeviceBase::Truncate") +
    gsi::enum_const ("Text", QIODeviceBase::Text, "@brief Enum constant QIODeviceBase::Text") +
    gsi::enum_const ("Unbuffered", QIODeviceBase::Unbuffered, "@brief Enum constant QIODeviceBase::Unbuffered") +
    gsi::enum_const ("NewOnly", QIODeviceBase::NewOnly, "@brief Enum constant QIODeviceBase::NewOnly") +
    gsi::enum_const ("ExistingOnly", QIODeviceBase::ExistingOnly, "@brief Enum constant QIODeviceBase::ExistingOnly"),
  "@qt\n@brief This class represents the QIODeviceBase::OpenModeFlag enum");

static gsi::QFlagsClass<QIODeviceBase::OpenModeFlag > decl_QIODeviceBase_OpenModeFlag_Enums ("QtCore", "QIODeviceBase_QFlags_OpenModeFlag",
  "@qt\n@brief This class represents the QFlags<QIODeviceBase::OpenModeFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QIODeviceBase> inject_QIODeviceBase_OpenModeFlag_Enum_in_parent (decl_QIODeviceBase_OpenModeFlag_Enum.defs ());
static gsi::ClassExt<QIODeviceBase> decl_QIODeviceBase_OpenModeFlag_Enum_as_child (decl_QIODeviceBase_OpenModeFlag_Enum, "OpenModeFlag");
static gsi::ClassExt<QIODeviceBase> decl_QIODeviceBase_OpenModeFlag_Enums_as_child (decl_QIODeviceBase_OpenModeFlag_Enums, "QFlags_OpenModeFlag");

}

