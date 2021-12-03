
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
*  @file gsiDeclQInputMethod.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputMethod>
#include <QEvent>
#include <QLocale>
#include <QMetaMethod>
#include <QObject>
#include <QRectF>
#include <QThread>
#include <QTransform>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputMethod

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QInputMethod::staticMetaObject);
}


// void QInputMethod::commit()


static void _init_f_commit_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_commit_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->commit ();
}


// QRectF QInputMethod::cursorRectangle()


static void _init_f_cursorRectangle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_cursorRectangle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QInputMethod *)cls)->cursorRectangle ());
}


// void QInputMethod::hide()


static void _init_f_hide_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_hide_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->hide ();
}


// Qt::LayoutDirection QInputMethod::inputDirection()


static void _init_f_inputDirection_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::LayoutDirection>::target_type > ();
}

static void _call_f_inputDirection_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::LayoutDirection>::target_type > ((qt_gsi::Converter<Qt::LayoutDirection>::target_type)qt_gsi::CppToQtAdaptor<Qt::LayoutDirection>(((QInputMethod *)cls)->inputDirection ()));
}


// QRectF QInputMethod::inputItemRectangle()


static void _init_f_inputItemRectangle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_inputItemRectangle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QInputMethod *)cls)->inputItemRectangle ());
}


// QTransform QInputMethod::inputItemTransform()


static void _init_f_inputItemTransform_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTransform > ();
}

static void _call_f_inputItemTransform_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTransform > ((QTransform)((QInputMethod *)cls)->inputItemTransform ());
}


// void QInputMethod::invokeAction(QInputMethod::Action a, int cursorPosition)


static void _init_f_invokeAction_3035 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<const qt_gsi::Converter<QInputMethod::Action>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cursorPosition");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_invokeAction_3035 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QInputMethod::Action>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QInputMethod::Action>::target_type & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->invokeAction (qt_gsi::QtToCppAdaptor<QInputMethod::Action>(arg1).cref(), arg2);
}


// bool QInputMethod::isAnimating()


static void _init_f_isAnimating_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAnimating_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QInputMethod *)cls)->isAnimating ());
}


// bool QInputMethod::isVisible()


static void _init_f_isVisible_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isVisible_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QInputMethod *)cls)->isVisible ());
}


// QRectF QInputMethod::keyboardRectangle()


static void _init_f_keyboardRectangle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_keyboardRectangle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QInputMethod *)cls)->keyboardRectangle ());
}


// QLocale QInputMethod::locale()


static void _init_f_locale_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLocale > ();
}

static void _call_f_locale_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLocale > ((QLocale)((QInputMethod *)cls)->locale ());
}


// void QInputMethod::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->reset ();
}


// void QInputMethod::setInputItemRectangle(const QRectF &rect)


static void _init_f_setInputItemRectangle_1862 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rect");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setInputItemRectangle_1862 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = gsi::arg_reader<const QRectF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->setInputItemRectangle (arg1);
}


// void QInputMethod::setInputItemTransform(const QTransform &transform)


static void _init_f_setInputItemTransform_2350 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("transform");
  decl->add_arg<const QTransform & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setInputItemTransform_2350 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTransform &arg1 = gsi::arg_reader<const QTransform & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->setInputItemTransform (arg1);
}


// void QInputMethod::setVisible(bool visible)


static void _init_f_setVisible_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("visible");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVisible_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->setVisible (arg1);
}


// void QInputMethod::show()


static void _init_f_show_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_show_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->show ();
}


// void QInputMethod::update(QFlags<Qt::InputMethodQuery> queries)


static void _init_f_update_3116 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("queries");
  decl->add_arg<QFlags<Qt::InputMethodQuery> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_update_3116 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::InputMethodQuery> arg1 = gsi::arg_reader<QFlags<Qt::InputMethodQuery> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethod *)cls)->update (arg1);
}


// static QVariant QInputMethod::queryFocusObject(Qt::InputMethodQuery query, QVariant argument)


static void _init_f_queryFocusObject_3554 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("argument");
  decl->add_arg<QVariant > (argspec_1);
  decl->set_return<QVariant > ();
}

static void _call_f_queryFocusObject_3554 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & >() (args, heap);
  QVariant arg2 = gsi::arg_reader<QVariant >() (args, heap);
  ret.write<QVariant > ((QVariant)QInputMethod::queryFocusObject (qt_gsi::QtToCppAdaptor<Qt::InputMethodQuery>(arg1).cref(), arg2));
}


// static QString QInputMethod::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QInputMethod::tr (arg1, arg2, arg3));
}


// static QString QInputMethod::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QInputMethod::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QInputMethod () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("commit", "@brief Method void QInputMethod::commit()\n", false, &_init_f_commit_0, &_call_f_commit_0);
  methods += new qt_gsi::GenericMethod (":cursorRectangle", "@brief Method QRectF QInputMethod::cursorRectangle()\n", true, &_init_f_cursorRectangle_c0, &_call_f_cursorRectangle_c0);
  methods += new qt_gsi::GenericMethod ("hide", "@brief Method void QInputMethod::hide()\n", false, &_init_f_hide_0, &_call_f_hide_0);
  methods += new qt_gsi::GenericMethod (":inputDirection", "@brief Method Qt::LayoutDirection QInputMethod::inputDirection()\n", true, &_init_f_inputDirection_c0, &_call_f_inputDirection_c0);
  methods += new qt_gsi::GenericMethod (":inputItemRectangle", "@brief Method QRectF QInputMethod::inputItemRectangle()\n", true, &_init_f_inputItemRectangle_c0, &_call_f_inputItemRectangle_c0);
  methods += new qt_gsi::GenericMethod (":inputItemTransform", "@brief Method QTransform QInputMethod::inputItemTransform()\n", true, &_init_f_inputItemTransform_c0, &_call_f_inputItemTransform_c0);
  methods += new qt_gsi::GenericMethod ("invokeAction", "@brief Method void QInputMethod::invokeAction(QInputMethod::Action a, int cursorPosition)\n", false, &_init_f_invokeAction_3035, &_call_f_invokeAction_3035);
  methods += new qt_gsi::GenericMethod ("isAnimating?|:animating", "@brief Method bool QInputMethod::isAnimating()\n", true, &_init_f_isAnimating_c0, &_call_f_isAnimating_c0);
  methods += new qt_gsi::GenericMethod ("isVisible?|:visible", "@brief Method bool QInputMethod::isVisible()\n", true, &_init_f_isVisible_c0, &_call_f_isVisible_c0);
  methods += new qt_gsi::GenericMethod (":keyboardRectangle", "@brief Method QRectF QInputMethod::keyboardRectangle()\n", true, &_init_f_keyboardRectangle_c0, &_call_f_keyboardRectangle_c0);
  methods += new qt_gsi::GenericMethod (":locale", "@brief Method QLocale QInputMethod::locale()\n", true, &_init_f_locale_c0, &_call_f_locale_c0);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QInputMethod::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("setInputItemRectangle|inputItemRectangle=", "@brief Method void QInputMethod::setInputItemRectangle(const QRectF &rect)\n", false, &_init_f_setInputItemRectangle_1862, &_call_f_setInputItemRectangle_1862);
  methods += new qt_gsi::GenericMethod ("setInputItemTransform|inputItemTransform=", "@brief Method void QInputMethod::setInputItemTransform(const QTransform &transform)\n", false, &_init_f_setInputItemTransform_2350, &_call_f_setInputItemTransform_2350);
  methods += new qt_gsi::GenericMethod ("setVisible", "@brief Method void QInputMethod::setVisible(bool visible)\n", false, &_init_f_setVisible_864, &_call_f_setVisible_864);
  methods += new qt_gsi::GenericMethod ("show", "@brief Method void QInputMethod::show()\n", false, &_init_f_show_0, &_call_f_show_0);
  methods += new qt_gsi::GenericMethod ("update", "@brief Method void QInputMethod::update(QFlags<Qt::InputMethodQuery> queries)\n", false, &_init_f_update_3116, &_call_f_update_3116);
  methods += gsi::qt_signal ("animatingChanged()", "animatingChanged", "@brief Signal declaration for QInputMethod::animatingChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("cursorRectangleChanged()", "cursorRectangleChanged", "@brief Signal declaration for QInputMethod::cursorRectangleChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QInputMethod::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<Qt::LayoutDirection>::target_type & > ("inputDirectionChanged(Qt::LayoutDirection)", "inputDirectionChanged", gsi::arg("newDirection"), "@brief Signal declaration for QInputMethod::inputDirectionChanged(Qt::LayoutDirection newDirection)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("keyboardRectangleChanged()", "keyboardRectangleChanged", "@brief Signal declaration for QInputMethod::keyboardRectangleChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("localeChanged()", "localeChanged", "@brief Signal declaration for QInputMethod::localeChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QInputMethod::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("visibleChanged()", "visibleChanged", "@brief Signal declaration for QInputMethod::visibleChanged()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("queryFocusObject", "@brief Static method QVariant QInputMethod::queryFocusObject(Qt::InputMethodQuery query, QVariant argument)\nThis method is static and can be called without an instance.", &_init_f_queryFocusObject_3554, &_call_f_queryFocusObject_3554);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QInputMethod::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QInputMethod::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QInputMethod> decl_QInputMethod (qtdecl_QObject (), "QtGui", "QInputMethod",
  methods_QInputMethod (),
  "@qt\n@brief Binding of QInputMethod");


GSI_QTGUI_PUBLIC gsi::Class<QInputMethod> &qtdecl_QInputMethod () { return decl_QInputMethod; }

}


//  Implementation of the enum wrapper class for QInputMethod::Action
namespace qt_gsi
{

static gsi::Enum<QInputMethod::Action> decl_QInputMethod_Action_Enum ("QtGui", "QInputMethod_Action",
    gsi::enum_const ("Click", QInputMethod::Click, "@brief Enum constant QInputMethod::Click") +
    gsi::enum_const ("ContextMenu", QInputMethod::ContextMenu, "@brief Enum constant QInputMethod::ContextMenu"),
  "@qt\n@brief This class represents the QInputMethod::Action enum");

static gsi::QFlagsClass<QInputMethod::Action > decl_QInputMethod_Action_Enums ("QtGui", "QInputMethod_QFlags_Action",
  "@qt\n@brief This class represents the QFlags<QInputMethod::Action> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QInputMethod> inject_QInputMethod_Action_Enum_in_parent (decl_QInputMethod_Action_Enum.defs ());
static gsi::ClassExt<QInputMethod> decl_QInputMethod_Action_Enum_as_child (decl_QInputMethod_Action_Enum, "Action");
static gsi::ClassExt<QInputMethod> decl_QInputMethod_Action_Enums_as_child (decl_QInputMethod_Action_Enums, "QFlags_Action");

}

