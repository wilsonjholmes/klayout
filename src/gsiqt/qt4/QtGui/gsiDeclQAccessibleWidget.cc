
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
*  @file gsiDeclQAccessibleWidget.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleWidget>
#include <QAccessibleInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleWidget

//  Constructor QAccessibleWidget::QAccessibleWidget(QWidget *o, QAccessible::Role r, const QString &name)


static void _init_ctor_QAccessibleWidget_5165 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<QWidget * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("r", true, "QAccessible::Client");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Role>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("name", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return_new<QAccessibleWidget> ();
}

static void _call_ctor_QAccessibleWidget_5165 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  const qt_gsi::Converter<QAccessible::Role>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QAccessible::Role>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QAccessible::Role>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QAccessible::Role>(heap, QAccessible::Client), heap);
  const QString &arg3 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QAccessibleWidget *> (new QAccessibleWidget (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Role>(arg2).cref(), arg3));
}


// QString QAccessibleWidget::actionText(int action, QAccessible::Text t, int child)


static void _init_f_actionText_c3378 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("child");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_actionText_c3378 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Text>::target_type & >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QAccessibleWidget *)cls)->actionText (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg2).cref(), arg3));
}


// int QAccessibleWidget::childAt(int x, int y)


static void _init_f_childAt_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_childAt_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QAccessibleWidget *)cls)->childAt (arg1, arg2));
}


// int QAccessibleWidget::childCount()


static void _init_f_childCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_childCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleWidget *)cls)->childCount ());
}


// bool QAccessibleWidget::doAction(int action, int child, const QList<QVariant> &params)


static void _init_f_doAction_4052 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("params");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_doAction_4052 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QList<QVariant> &arg3 = gsi::arg_reader<const QList<QVariant> & >() (args, heap);
  ret.write<bool > ((bool)((QAccessibleWidget *)cls)->doAction (arg1, arg2, arg3));
}


// int QAccessibleWidget::indexOfChild(const QAccessibleInterface *child)


static void _init_f_indexOfChild_c3317 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<const QAccessibleInterface * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfChild_c3317 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAccessibleInterface *arg1 = gsi::arg_reader<const QAccessibleInterface * >() (args, heap);
  ret.write<int > ((int)((QAccessibleWidget *)cls)->indexOfChild (arg1));
}


// QRect QAccessibleWidget::rect(int child)


static void _init_f_rect_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_rect_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QRect > ((QRect)((QAccessibleWidget *)cls)->rect (arg1));
}


// QFlags<QAccessible::RelationFlag> QAccessibleWidget::relationTo(int child, const QAccessibleInterface *other, int otherChild)


static void _init_f_relationTo_c4635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("other");
  decl->add_arg<const QAccessibleInterface * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("otherChild");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QFlags<QAccessible::RelationFlag> > ();
}

static void _call_f_relationTo_c4635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QAccessibleInterface *arg2 = gsi::arg_reader<const QAccessibleInterface * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QFlags<QAccessible::RelationFlag> > ((QFlags<QAccessible::RelationFlag>)((QAccessibleWidget *)cls)->relationTo (arg1, arg2, arg3));
}


// QAccessible::Role QAccessibleWidget::role(int child)


static void _init_f_role_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<qt_gsi::Converter<QAccessible::Role>::target_type > ();
}

static void _call_f_role_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<qt_gsi::Converter<QAccessible::Role>::target_type > ((qt_gsi::Converter<QAccessible::Role>::target_type)qt_gsi::CppToQtAdaptor<QAccessible::Role>(((QAccessibleWidget *)cls)->role (arg1)));
}


// QFlags<QAccessible::StateFlag> QAccessibleWidget::state(int child)


static void _init_f_state_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QFlags<QAccessible::StateFlag> > ();
}

static void _call_f_state_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QFlags<QAccessible::StateFlag> > ((QFlags<QAccessible::StateFlag>)((QAccessibleWidget *)cls)->state (arg1));
}


// QString QAccessibleWidget::text(QAccessible::Text t, int child)


static void _init_f_text_c2719 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_text_c2719 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Text>::target_type & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QAccessibleWidget *)cls)->text (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2));
}


// int QAccessibleWidget::userActionCount(int child)


static void _init_f_userActionCount_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_userActionCount_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QAccessibleWidget *)cls)->userActionCount (arg1));
}



namespace gsi
{

static gsi::Methods methods_QAccessibleWidget () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleWidget::QAccessibleWidget(QWidget *o, QAccessible::Role r, const QString &name)\nThis method creates an object of class QAccessibleWidget.", &_init_ctor_QAccessibleWidget_5165, &_call_ctor_QAccessibleWidget_5165);
  methods += new qt_gsi::GenericMethod ("actionText", "@brief Method QString QAccessibleWidget::actionText(int action, QAccessible::Text t, int child)\nThis is a reimplementation of QAccessibleObject::actionText", true, &_init_f_actionText_c3378, &_call_f_actionText_c3378);
  methods += new qt_gsi::GenericMethod ("childAt", "@brief Method int QAccessibleWidget::childAt(int x, int y)\nThis is a reimplementation of QAccessibleInterface::childAt", true, &_init_f_childAt_c1426, &_call_f_childAt_c1426);
  methods += new qt_gsi::GenericMethod ("childCount", "@brief Method int QAccessibleWidget::childCount()\nThis is a reimplementation of QAccessibleInterface::childCount", true, &_init_f_childCount_c0, &_call_f_childCount_c0);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Method bool QAccessibleWidget::doAction(int action, int child, const QList<QVariant> &params)\nThis is a reimplementation of QAccessibleObject::doAction", false, &_init_f_doAction_4052, &_call_f_doAction_4052);
  methods += new qt_gsi::GenericMethod ("indexOfChild", "@brief Method int QAccessibleWidget::indexOfChild(const QAccessibleInterface *child)\nThis is a reimplementation of QAccessibleInterface::indexOfChild", true, &_init_f_indexOfChild_c3317, &_call_f_indexOfChild_c3317);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method QRect QAccessibleWidget::rect(int child)\nThis is a reimplementation of QAccessibleObject::rect", true, &_init_f_rect_c767, &_call_f_rect_c767);
  methods += new qt_gsi::GenericMethod ("relationTo", "@brief Method QFlags<QAccessible::RelationFlag> QAccessibleWidget::relationTo(int child, const QAccessibleInterface *other, int otherChild)\nThis is a reimplementation of QAccessibleInterface::relationTo", true, &_init_f_relationTo_c4635, &_call_f_relationTo_c4635);
  methods += new qt_gsi::GenericMethod ("role", "@brief Method QAccessible::Role QAccessibleWidget::role(int child)\nThis is a reimplementation of QAccessibleInterface::role", true, &_init_f_role_c767, &_call_f_role_c767);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QFlags<QAccessible::StateFlag> QAccessibleWidget::state(int child)\nThis is a reimplementation of QAccessibleInterface::state", true, &_init_f_state_c767, &_call_f_state_c767);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QAccessibleWidget::text(QAccessible::Text t, int child)\nThis is a reimplementation of QAccessibleInterface::text", true, &_init_f_text_c2719, &_call_f_text_c2719);
  methods += new qt_gsi::GenericMethod ("userActionCount", "@brief Method int QAccessibleWidget::userActionCount(int child)\nThis is a reimplementation of QAccessibleObject::userActionCount", true, &_init_f_userActionCount_c767, &_call_f_userActionCount_c767);
  return methods;
}

gsi::Class<QAccessibleObject> &qtdecl_QAccessibleObject ();

gsi::Class<QAccessibleWidget> decl_QAccessibleWidget (qtdecl_QAccessibleObject (), "QtGui", "QAccessibleWidget",
  methods_QAccessibleWidget (),
  "@qt\n@brief Binding of QAccessibleWidget");


GSI_QTGUI_PUBLIC gsi::Class<QAccessibleWidget> &qtdecl_QAccessibleWidget () { return decl_QAccessibleWidget; }

}

