
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
*  @file gsiDeclQToolTip.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QToolTip>
#include <QFont>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QToolTip

// static QFont QToolTip::font()


static void _init_f_font_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QFont > ();
}

static void _call_f_font_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFont > ((QFont)QToolTip::font ());
}


// static void QToolTip::hideText()


static void _init_f_hideText_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_hideText_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QToolTip::hideText ();
}


// static bool QToolTip::isVisible()


static void _init_f_isVisible_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isVisible_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QToolTip::isVisible ());
}


// static QPalette QToolTip::palette()


static void _init_f_palette_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QPalette > ();
}

static void _call_f_palette_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPalette > ((QPalette)QToolTip::palette ());
}


// static void QToolTip::setFont(const QFont &)


static void _init_f_setFont_1801 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFont & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFont_1801 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = gsi::arg_reader<const QFont & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QToolTip::setFont (arg1);
}


// static void QToolTip::setPalette(const QPalette &)


static void _init_f_setPalette_2113 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPalette & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPalette_2113 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPalette &arg1 = gsi::arg_reader<const QPalette & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QToolTip::setPalette (arg1);
}


// static void QToolTip::showText(const QPoint &pos, const QString &text, QWidget *w)


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
  QToolTip::showText (arg1, arg2, arg3);
}


// static void QToolTip::showText(const QPoint &pos, const QString &text, QWidget *w, const QRect &rect)


static void _init_f_showText_6724 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("w");
  decl->add_arg<QWidget * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("rect");
  decl->add_arg<const QRect & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_showText_6724 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  QWidget *arg3 = gsi::arg_reader<QWidget * >() (args, heap);
  const QRect &arg4 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QToolTip::showText (arg1, arg2, arg3, arg4);
}


// static void QToolTip::showText(const QPoint &pos, const QString &text, QWidget *w, const QRect &rect, int msecShowTime)


static void _init_f_showText_7383 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("w");
  decl->add_arg<QWidget * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("rect");
  decl->add_arg<const QRect & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("msecShowTime");
  decl->add_arg<int > (argspec_4);
  decl->set_return<void > ();
}

static void _call_f_showText_7383 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  QWidget *arg3 = gsi::arg_reader<QWidget * >() (args, heap);
  const QRect &arg4 = gsi::arg_reader<const QRect & >() (args, heap);
  int arg5 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QToolTip::showText (arg1, arg2, arg3, arg4, arg5);
}


// static QString QToolTip::text()


static void _init_f_text_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QToolTip::text ());
}



namespace gsi
{

static gsi::Methods methods_QToolTip () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod (":font", "@brief Static method QFont QToolTip::font()\nThis method is static and can be called without an instance.", &_init_f_font_0, &_call_f_font_0);
  methods += new qt_gsi::GenericStaticMethod ("hideText", "@brief Static method void QToolTip::hideText()\nThis method is static and can be called without an instance.", &_init_f_hideText_0, &_call_f_hideText_0);
  methods += new qt_gsi::GenericStaticMethod ("isVisible?", "@brief Static method bool QToolTip::isVisible()\nThis method is static and can be called without an instance.", &_init_f_isVisible_0, &_call_f_isVisible_0);
  methods += new qt_gsi::GenericStaticMethod (":palette", "@brief Static method QPalette QToolTip::palette()\nThis method is static and can be called without an instance.", &_init_f_palette_0, &_call_f_palette_0);
  methods += new qt_gsi::GenericStaticMethod ("setFont|font=", "@brief Static method void QToolTip::setFont(const QFont &)\nThis method is static and can be called without an instance.", &_init_f_setFont_1801, &_call_f_setFont_1801);
  methods += new qt_gsi::GenericStaticMethod ("setPalette|palette=", "@brief Static method void QToolTip::setPalette(const QPalette &)\nThis method is static and can be called without an instance.", &_init_f_setPalette_2113, &_call_f_setPalette_2113);
  methods += new qt_gsi::GenericStaticMethod ("showText", "@brief Static method void QToolTip::showText(const QPoint &pos, const QString &text, QWidget *w)\nThis method is static and can be called without an instance.", &_init_f_showText_5040, &_call_f_showText_5040);
  methods += new qt_gsi::GenericStaticMethod ("showText", "@brief Static method void QToolTip::showText(const QPoint &pos, const QString &text, QWidget *w, const QRect &rect)\nThis method is static and can be called without an instance.", &_init_f_showText_6724, &_call_f_showText_6724);
  methods += new qt_gsi::GenericStaticMethod ("showText", "@brief Static method void QToolTip::showText(const QPoint &pos, const QString &text, QWidget *w, const QRect &rect, int msecShowTime)\nThis method is static and can be called without an instance.", &_init_f_showText_7383, &_call_f_showText_7383);
  methods += new qt_gsi::GenericStaticMethod ("text", "@brief Static method QString QToolTip::text()\nThis method is static and can be called without an instance.", &_init_f_text_0, &_call_f_text_0);
  return methods;
}

gsi::Class<QToolTip> decl_QToolTip ("QtWidgets", "QToolTip",
  methods_QToolTip (),
  "@qt\n@brief Binding of QToolTip");


GSI_QTWIDGETS_PUBLIC gsi::Class<QToolTip> &qtdecl_QToolTip () { return decl_QToolTip; }

}

