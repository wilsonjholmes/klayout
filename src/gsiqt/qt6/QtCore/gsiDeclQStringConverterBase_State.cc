
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
*  @file gsiDeclQStringConverterBase_State.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStringConverterBase>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QStringConverterBase::State

//  Constructor QStringConverterBase::State::State(QFlags<QStringConverterBase::Flag> f)


static void _init_ctor_QStringConverterBase_State_3669 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f", true, "QStringConverterBase::Flag::Default");
  decl->add_arg<QFlags<QStringConverterBase::Flag> > (argspec_0);
  decl->set_return_new<QStringConverterBase::State> ();
}

static void _call_ctor_QStringConverterBase_State_3669 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QStringConverterBase::Flag> arg1 = args ? gsi::arg_reader<QFlags<QStringConverterBase::Flag> >() (args, heap) : gsi::arg_maker<QFlags<QStringConverterBase::Flag> >() (QStringConverterBase::Flag::Default, heap);
  ret.write<QStringConverterBase::State *> (new QStringConverterBase::State (arg1));
}


// void QStringConverterBase::State::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStringConverterBase::State *)cls)->clear ();
}



namespace gsi
{

static gsi::Methods methods_QStringConverterBase_State () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStringConverterBase::State::State(QFlags<QStringConverterBase::Flag> f)\nThis method creates an object of class QStringConverterBase::State.", &_init_ctor_QStringConverterBase_State_3669, &_call_ctor_QStringConverterBase_State_3669);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QStringConverterBase::State::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  return methods;
}

gsi::Class<QStringConverterBase::State> decl_QStringConverterBase_State ("QtCore", "QStringConverterBase_State",
  methods_QStringConverterBase_State (),
  "@qt\n@brief Binding of QStringConverterBase::State");

gsi::ClassExt<QStringConverterBase> decl_QStringConverterBase_State_as_child (decl_QStringConverterBase_State, "State");

GSI_QTCORE_PUBLIC gsi::Class<QStringConverterBase::State> &qtdecl_QStringConverterBase_State () { return decl_QStringConverterBase_State; }

}

