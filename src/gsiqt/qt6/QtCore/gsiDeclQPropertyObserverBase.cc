
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
*  @file gsiDeclQPropertyObserverBase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPropertyObserverBase>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPropertyObserverBase

//  Constructor QPropertyObserverBase::QPropertyObserverBase()


static void _init_ctor_QPropertyObserverBase_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPropertyObserverBase> ();
}

static void _call_ctor_QPropertyObserverBase_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPropertyObserverBase *> (new QPropertyObserverBase ());
}



namespace gsi
{

static gsi::Methods methods_QPropertyObserverBase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPropertyObserverBase::QPropertyObserverBase()\nThis method creates an object of class QPropertyObserverBase.", &_init_ctor_QPropertyObserverBase_0, &_call_ctor_QPropertyObserverBase_0);
  return methods;
}

gsi::Class<QPropertyObserverBase> decl_QPropertyObserverBase ("QtCore", "QPropertyObserverBase",
  methods_QPropertyObserverBase (),
  "@qt\n@brief Binding of QPropertyObserverBase");


GSI_QTCORE_PUBLIC gsi::Class<QPropertyObserverBase> &qtdecl_QPropertyObserverBase () { return decl_QPropertyObserverBase; }

}

