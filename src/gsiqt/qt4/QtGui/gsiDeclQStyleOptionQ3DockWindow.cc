
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
*  @file gsiDeclQStyleOptionQ3DockWindow.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionQ3DockWindow>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionQ3DockWindow

//  Constructor QStyleOptionQ3DockWindow::QStyleOptionQ3DockWindow()


static void _init_ctor_QStyleOptionQ3DockWindow_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionQ3DockWindow> ();
}

static void _call_ctor_QStyleOptionQ3DockWindow_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionQ3DockWindow *> (new QStyleOptionQ3DockWindow ());
}


//  Constructor QStyleOptionQ3DockWindow::QStyleOptionQ3DockWindow(const QStyleOptionQ3DockWindow &other)


static void _init_ctor_QStyleOptionQ3DockWindow_3705 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionQ3DockWindow & > (argspec_0);
  decl->set_return_new<QStyleOptionQ3DockWindow> ();
}

static void _call_ctor_QStyleOptionQ3DockWindow_3705 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionQ3DockWindow &arg1 = gsi::arg_reader<const QStyleOptionQ3DockWindow & >() (args, heap);
  ret.write<QStyleOptionQ3DockWindow *> (new QStyleOptionQ3DockWindow (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionQ3DockWindow () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionQ3DockWindow::QStyleOptionQ3DockWindow()\nThis method creates an object of class QStyleOptionQ3DockWindow.", &_init_ctor_QStyleOptionQ3DockWindow_0, &_call_ctor_QStyleOptionQ3DockWindow_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionQ3DockWindow::QStyleOptionQ3DockWindow(const QStyleOptionQ3DockWindow &other)\nThis method creates an object of class QStyleOptionQ3DockWindow.", &_init_ctor_QStyleOptionQ3DockWindow_3705, &_call_ctor_QStyleOptionQ3DockWindow_3705);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionQ3DockWindow> decl_QStyleOptionQ3DockWindow (qtdecl_QStyleOption (), "QtGui", "QStyleOptionQ3DockWindow",
  methods_QStyleOptionQ3DockWindow (),
  "@qt\n@brief Binding of QStyleOptionQ3DockWindow");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionQ3DockWindow> &qtdecl_QStyleOptionQ3DockWindow () { return decl_QStyleOptionQ3DockWindow; }

}

