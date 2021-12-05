
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
*  @file gsiDeclQAccessibleInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleInterface

// QString QAccessibleInterface::actionText(int action, QAccessible::Text t, int child)


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
  ret.write<QString > ((QString)((QAccessibleInterface *)cls)->actionText (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg2).cref(), arg3));
}


// QColor QAccessibleInterface::backgroundColor()


static void _init_f_backgroundColor_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_backgroundColor_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QAccessibleInterface *)cls)->backgroundColor ());
}


// int QAccessibleInterface::childAt(int x, int y)


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
  ret.write<int > ((int)((QAccessibleInterface *)cls)->childAt (arg1, arg2));
}


// int QAccessibleInterface::childCount()


static void _init_f_childCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_childCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleInterface *)cls)->childCount ());
}


// bool QAccessibleInterface::doAction(int action, int child, const QList<QVariant> &params)


static void _init_f_doAction_4052 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("params", true, "QVariantList()");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_doAction_4052 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QList<QVariant> &arg3 = args ? gsi::arg_reader<const QList<QVariant> & >() (args, heap) : gsi::arg_maker<const QList<QVariant> & >() (QVariantList(), heap);
  ret.write<bool > ((bool)((QAccessibleInterface *)cls)->doAction (arg1, arg2, arg3));
}


// QColor QAccessibleInterface::foregroundColor()


static void _init_f_foregroundColor_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_foregroundColor_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QAccessibleInterface *)cls)->foregroundColor ());
}


// int QAccessibleInterface::indexOfChild(const QAccessibleInterface *)


static void _init_f_indexOfChild_c3317 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QAccessibleInterface * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfChild_c3317 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAccessibleInterface *arg1 = gsi::arg_reader<const QAccessibleInterface * >() (args, heap);
  ret.write<int > ((int)((QAccessibleInterface *)cls)->indexOfChild (arg1));
}


// QVariant QAccessibleInterface::invokeMethod(QAccessible::Method method, int child, const QList<QVariant> &params)


static void _init_f_invokeMethod_5533 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("method");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Method>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child", true, "0");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("params", true, "QVariantList()");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return<QVariant > ();
}

static void _call_f_invokeMethod_5533 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Method>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Method>::target_type & >() (args, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  const QList<QVariant> &arg3 = args ? gsi::arg_reader<const QList<QVariant> & >() (args, heap) : gsi::arg_maker<const QList<QVariant> & >() (QVariantList(), heap);
  ret.write<QVariant > ((QVariant)((QAccessibleInterface *)cls)->invokeMethod (qt_gsi::QtToCppAdaptor<QAccessible::Method>(arg1).cref(), arg2, arg3));
}


// bool QAccessibleInterface::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleInterface *)cls)->isValid ());
}


// QObject *QAccessibleInterface::object()


static void _init_f_object_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_object_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAccessibleInterface *)cls)->object ());
}


// QRect QAccessibleInterface::rect(int child)


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
  ret.write<QRect > ((QRect)((QAccessibleInterface *)cls)->rect (arg1));
}


// QFlags<QAccessible::RelationFlag> QAccessibleInterface::relationTo(int child, const QAccessibleInterface *other, int otherChild)


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
  ret.write<QFlags<QAccessible::RelationFlag> > ((QFlags<QAccessible::RelationFlag>)((QAccessibleInterface *)cls)->relationTo (arg1, arg2, arg3));
}


// QAccessible::Role QAccessibleInterface::role(int child)


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
  ret.write<qt_gsi::Converter<QAccessible::Role>::target_type > ((qt_gsi::Converter<QAccessible::Role>::target_type)qt_gsi::CppToQtAdaptor<QAccessible::Role>(((QAccessibleInterface *)cls)->role (arg1)));
}


// void QAccessibleInterface::setText(QAccessible::Text t, int child, const QString &text)


static void _init_f_setText_4636 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setText_4636 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Text>::target_type & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleInterface *)cls)->setText (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2, arg3);
}


// QFlags<QAccessible::StateFlag> QAccessibleInterface::state(int child)


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
  ret.write<QFlags<QAccessible::StateFlag> > ((QFlags<QAccessible::StateFlag>)((QAccessibleInterface *)cls)->state (arg1));
}


// QSet<QAccessible::Method> QAccessibleInterface::supportedMethods()


static void _init_f_supportedMethods_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSet<QAccessible::Method> > ();
}

static void _call_f_supportedMethods_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSet<QAccessible::Method> > ((QSet<QAccessible::Method>)((QAccessibleInterface *)cls)->supportedMethods ());
}


// QString QAccessibleInterface::text(QAccessible::Text t, int child)


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
  ret.write<QString > ((QString)((QAccessibleInterface *)cls)->text (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2));
}


// int QAccessibleInterface::userActionCount(int child)


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
  ret.write<int > ((int)((QAccessibleInterface *)cls)->userActionCount (arg1));
}



namespace gsi
{

static gsi::Methods methods_QAccessibleInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("actionText", "@brief Method QString QAccessibleInterface::actionText(int action, QAccessible::Text t, int child)\n", true, &_init_f_actionText_c3378, &_call_f_actionText_c3378);
  methods += new qt_gsi::GenericMethod ("backgroundColor", "@brief Method QColor QAccessibleInterface::backgroundColor()\n", false, &_init_f_backgroundColor_0, &_call_f_backgroundColor_0);
  methods += new qt_gsi::GenericMethod ("childAt", "@brief Method int QAccessibleInterface::childAt(int x, int y)\n", true, &_init_f_childAt_c1426, &_call_f_childAt_c1426);
  methods += new qt_gsi::GenericMethod ("childCount", "@brief Method int QAccessibleInterface::childCount()\n", true, &_init_f_childCount_c0, &_call_f_childCount_c0);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Method bool QAccessibleInterface::doAction(int action, int child, const QList<QVariant> &params)\n", false, &_init_f_doAction_4052, &_call_f_doAction_4052);
  methods += new qt_gsi::GenericMethod ("foregroundColor", "@brief Method QColor QAccessibleInterface::foregroundColor()\n", false, &_init_f_foregroundColor_0, &_call_f_foregroundColor_0);
  methods += new qt_gsi::GenericMethod ("indexOfChild", "@brief Method int QAccessibleInterface::indexOfChild(const QAccessibleInterface *)\n", true, &_init_f_indexOfChild_c3317, &_call_f_indexOfChild_c3317);
  methods += new qt_gsi::GenericMethod ("invokeMethod", "@brief Method QVariant QAccessibleInterface::invokeMethod(QAccessible::Method method, int child, const QList<QVariant> &params)\n", false, &_init_f_invokeMethod_5533, &_call_f_invokeMethod_5533);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAccessibleInterface::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Method QObject *QAccessibleInterface::object()\n", true, &_init_f_object_c0, &_call_f_object_c0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method QRect QAccessibleInterface::rect(int child)\n", true, &_init_f_rect_c767, &_call_f_rect_c767);
  methods += new qt_gsi::GenericMethod ("relationTo", "@brief Method QFlags<QAccessible::RelationFlag> QAccessibleInterface::relationTo(int child, const QAccessibleInterface *other, int otherChild)\n", true, &_init_f_relationTo_c4635, &_call_f_relationTo_c4635);
  methods += new qt_gsi::GenericMethod ("role", "@brief Method QAccessible::Role QAccessibleInterface::role(int child)\n", true, &_init_f_role_c767, &_call_f_role_c767);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method void QAccessibleInterface::setText(QAccessible::Text t, int child, const QString &text)\n", false, &_init_f_setText_4636, &_call_f_setText_4636);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QFlags<QAccessible::StateFlag> QAccessibleInterface::state(int child)\n", true, &_init_f_state_c767, &_call_f_state_c767);
  methods += new qt_gsi::GenericMethod ("supportedMethods", "@brief Method QSet<QAccessible::Method> QAccessibleInterface::supportedMethods()\n", false, &_init_f_supportedMethods_0, &_call_f_supportedMethods_0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QAccessibleInterface::text(QAccessible::Text t, int child)\n", true, &_init_f_text_c2719, &_call_f_text_c2719);
  methods += new qt_gsi::GenericMethod ("userActionCount", "@brief Method int QAccessibleInterface::userActionCount(int child)\n", true, &_init_f_userActionCount_c767, &_call_f_userActionCount_c767);
  return methods;
}

gsi::Class<QAccessible> &qtdecl_QAccessible ();

gsi::Class<QAccessibleInterface> decl_QAccessibleInterface (qtdecl_QAccessible (), "QtGui", "QAccessibleInterface",
  methods_QAccessibleInterface (),
  "@qt\n@brief Binding of QAccessibleInterface");


GSI_QTGUI_PUBLIC gsi::Class<QAccessibleInterface> &qtdecl_QAccessibleInterface () { return decl_QAccessibleInterface; }

}

