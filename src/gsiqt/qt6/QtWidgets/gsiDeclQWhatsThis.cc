
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
*  @file gsiDeclQWhatsThis.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWhatsThis>
#include <QAction>
#include <QObject>
#include <QPoint>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWhatsThis

// static QAction *QWhatsThis::createAction(QObject *parent)


static void _init_f_createAction_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<QAction * > ();
}

static void _call_f_createAction_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAction * > ((QAction *)QWhatsThis::createAction (arg1));
}


// static void QWhatsThis::enterWhatsThisMode()


static void _init_f_enterWhatsThisMode_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_enterWhatsThisMode_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QWhatsThis::enterWhatsThisMode ();
}


// static void QWhatsThis::hideText()


static void _init_f_hideText_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_hideText_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QWhatsThis::hideText ();
}


// static bool QWhatsThis::inWhatsThisMode()


static void _init_f_inWhatsThisMode_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_inWhatsThisMode_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QWhatsThis::inWhatsThisMode ());
}


// static void QWhatsThis::leaveWhatsThisMode()


static void _init_f_leaveWhatsThisMode_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_leaveWhatsThisMode_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QWhatsThis::leaveWhatsThisMode ();
}


// static void QWhatsThis::showText(const QPoint &pos, const QString &text, QWidget *w)


static void _init_f_showText_5040 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("w", true, "nullptr");
  decl->add_arg<QWidget * > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_showText_5040 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  QWidget *arg3 = args ? gsi::arg_reader<QWidget * >() (args, heap) : gsi::arg_maker<QWidget * >() (nullptr, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QWhatsThis::showText (arg1, arg2, arg3);
}



namespace gsi
{

static gsi::Methods methods_QWhatsThis () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("createAction", "@brief Static method QAction *QWhatsThis::createAction(QObject *parent)\nThis method is static and can be called without an instance.", &_init_f_createAction_1302, &_call_f_createAction_1302);
  methods += new qt_gsi::GenericStaticMethod ("enterWhatsThisMode", "@brief Static method void QWhatsThis::enterWhatsThisMode()\nThis method is static and can be called without an instance.", &_init_f_enterWhatsThisMode_0, &_call_f_enterWhatsThisMode_0);
  methods += new qt_gsi::GenericStaticMethod ("hideText", "@brief Static method void QWhatsThis::hideText()\nThis method is static and can be called without an instance.", &_init_f_hideText_0, &_call_f_hideText_0);
  methods += new qt_gsi::GenericStaticMethod ("inWhatsThisMode", "@brief Static method bool QWhatsThis::inWhatsThisMode()\nThis method is static and can be called without an instance.", &_init_f_inWhatsThisMode_0, &_call_f_inWhatsThisMode_0);
  methods += new qt_gsi::GenericStaticMethod ("leaveWhatsThisMode", "@brief Static method void QWhatsThis::leaveWhatsThisMode()\nThis method is static and can be called without an instance.", &_init_f_leaveWhatsThisMode_0, &_call_f_leaveWhatsThisMode_0);
  methods += new qt_gsi::GenericStaticMethod ("showText", "@brief Static method void QWhatsThis::showText(const QPoint &pos, const QString &text, QWidget *w)\nThis method is static and can be called without an instance.", &_init_f_showText_5040, &_call_f_showText_5040);
  return methods;
}

gsi::Class<QWhatsThis> decl_QWhatsThis ("QtWidgets", "QWhatsThis",
  methods_QWhatsThis (),
  "@qt\n@brief Binding of QWhatsThis");


GSI_QTWIDGETS_PUBLIC gsi::Class<QWhatsThis> &qtdecl_QWhatsThis () { return decl_QWhatsThis; }

}

