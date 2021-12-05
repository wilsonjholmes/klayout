
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQStyleOptionSlider.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionSlider>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionSlider

//  Constructor QStyleOptionSlider::QStyleOptionSlider()


static void _init_ctor_QStyleOptionSlider_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionSlider> ();
}

static void _call_ctor_QStyleOptionSlider_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionSlider *> (new QStyleOptionSlider ());
}


//  Constructor QStyleOptionSlider::QStyleOptionSlider(const QStyleOptionSlider &other)


static void _init_ctor_QStyleOptionSlider_3167 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionSlider & > (argspec_0);
  decl->set_return_new<QStyleOptionSlider> ();
}

static void _call_ctor_QStyleOptionSlider_3167 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionSlider &arg1 = gsi::arg_reader<const QStyleOptionSlider & >() (args, heap);
  ret.write<QStyleOptionSlider *> (new QStyleOptionSlider (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionSlider () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionSlider::QStyleOptionSlider()\nThis method creates an object of class QStyleOptionSlider.", &_init_ctor_QStyleOptionSlider_0, &_call_ctor_QStyleOptionSlider_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionSlider::QStyleOptionSlider(const QStyleOptionSlider &other)\nThis method creates an object of class QStyleOptionSlider.", &_init_ctor_QStyleOptionSlider_3167, &_call_ctor_QStyleOptionSlider_3167);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionSlider> decl_QStyleOptionSlider (qtdecl_QStyleOptionComplex (), "QtGui", "QStyleOptionSlider",
  methods_QStyleOptionSlider (),
  "@qt\n@brief Binding of QStyleOptionSlider");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionSlider> &qtdecl_QStyleOptionSlider () { return decl_QStyleOptionSlider; }

}

