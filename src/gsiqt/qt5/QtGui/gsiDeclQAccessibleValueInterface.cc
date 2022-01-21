
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
*  @file gsiDeclQAccessibleValueInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleValueInterface>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleValueInterface

// QVariant QAccessibleValueInterface::currentValue()


static void _init_f_currentValue_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_currentValue_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface *)cls)->currentValue ());
}


// QVariant QAccessibleValueInterface::maximumValue()


static void _init_f_maximumValue_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_maximumValue_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface *)cls)->maximumValue ());
}


// QVariant QAccessibleValueInterface::minimumStepSize()


static void _init_f_minimumStepSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_minimumStepSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface *)cls)->minimumStepSize ());
}


// QVariant QAccessibleValueInterface::minimumValue()


static void _init_f_minimumValue_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_minimumValue_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface *)cls)->minimumValue ());
}


// void QAccessibleValueInterface::setCurrentValue(const QVariant &value)


static void _init_f_setCurrentValue_2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCurrentValue_2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleValueInterface *)cls)->setCurrentValue (arg1);
}


namespace gsi
{

static gsi::Methods methods_QAccessibleValueInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":currentValue", "@brief Method QVariant QAccessibleValueInterface::currentValue()\n", true, &_init_f_currentValue_c0, &_call_f_currentValue_c0);
  methods += new qt_gsi::GenericMethod ("maximumValue", "@brief Method QVariant QAccessibleValueInterface::maximumValue()\n", true, &_init_f_maximumValue_c0, &_call_f_maximumValue_c0);
  methods += new qt_gsi::GenericMethod ("minimumStepSize", "@brief Method QVariant QAccessibleValueInterface::minimumStepSize()\n", true, &_init_f_minimumStepSize_c0, &_call_f_minimumStepSize_c0);
  methods += new qt_gsi::GenericMethod ("minimumValue", "@brief Method QVariant QAccessibleValueInterface::minimumValue()\n", true, &_init_f_minimumValue_c0, &_call_f_minimumValue_c0);
  methods += new qt_gsi::GenericMethod ("setCurrentValue|currentValue=", "@brief Method void QAccessibleValueInterface::setCurrentValue(const QVariant &value)\n", false, &_init_f_setCurrentValue_2119, &_call_f_setCurrentValue_2119);
  return methods;
}

gsi::Class<QAccessibleValueInterface> decl_QAccessibleValueInterface ("QtGui", "QAccessibleValueInterface_Native",
  methods_QAccessibleValueInterface (),
  "@hide\n@alias QAccessibleValueInterface");

GSI_QTGUI_PUBLIC gsi::Class<QAccessibleValueInterface> &qtdecl_QAccessibleValueInterface () { return decl_QAccessibleValueInterface; }

}


class QAccessibleValueInterface_Adaptor : public QAccessibleValueInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleValueInterface_Adaptor();

  //  [adaptor ctor] QAccessibleValueInterface::QAccessibleValueInterface()
  QAccessibleValueInterface_Adaptor() : QAccessibleValueInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QVariant QAccessibleValueInterface::currentValue()
  QVariant cbs_currentValue_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("currentValue");
  }

  virtual QVariant currentValue() const
  {
    if (cb_currentValue_c0_0.can_issue()) {
      return cb_currentValue_c0_0.issue<QAccessibleValueInterface_Adaptor, QVariant>(&QAccessibleValueInterface_Adaptor::cbs_currentValue_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("currentValue");
    }
  }

  //  [adaptor impl] QVariant QAccessibleValueInterface::maximumValue()
  QVariant cbs_maximumValue_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("maximumValue");
  }

  virtual QVariant maximumValue() const
  {
    if (cb_maximumValue_c0_0.can_issue()) {
      return cb_maximumValue_c0_0.issue<QAccessibleValueInterface_Adaptor, QVariant>(&QAccessibleValueInterface_Adaptor::cbs_maximumValue_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("maximumValue");
    }
  }

  //  [adaptor impl] QVariant QAccessibleValueInterface::minimumStepSize()
  QVariant cbs_minimumStepSize_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("minimumStepSize");
  }

  virtual QVariant minimumStepSize() const
  {
    if (cb_minimumStepSize_c0_0.can_issue()) {
      return cb_minimumStepSize_c0_0.issue<QAccessibleValueInterface_Adaptor, QVariant>(&QAccessibleValueInterface_Adaptor::cbs_minimumStepSize_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("minimumStepSize");
    }
  }

  //  [adaptor impl] QVariant QAccessibleValueInterface::minimumValue()
  QVariant cbs_minimumValue_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("minimumValue");
  }

  virtual QVariant minimumValue() const
  {
    if (cb_minimumValue_c0_0.can_issue()) {
      return cb_minimumValue_c0_0.issue<QAccessibleValueInterface_Adaptor, QVariant>(&QAccessibleValueInterface_Adaptor::cbs_minimumValue_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("minimumValue");
    }
  }

  //  [adaptor impl] void QAccessibleValueInterface::setCurrentValue(const QVariant &value)
  void cbs_setCurrentValue_2119_0(const QVariant &value)
  {
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("setCurrentValue");
  }

  virtual void setCurrentValue(const QVariant &value)
  {
    if (cb_setCurrentValue_2119_0.can_issue()) {
      cb_setCurrentValue_2119_0.issue<QAccessibleValueInterface_Adaptor, const QVariant &>(&QAccessibleValueInterface_Adaptor::cbs_setCurrentValue_2119_0, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setCurrentValue");
    }
  }

  gsi::Callback cb_currentValue_c0_0;
  gsi::Callback cb_maximumValue_c0_0;
  gsi::Callback cb_minimumStepSize_c0_0;
  gsi::Callback cb_minimumValue_c0_0;
  gsi::Callback cb_setCurrentValue_2119_0;
};

QAccessibleValueInterface_Adaptor::~QAccessibleValueInterface_Adaptor() { }

//  Constructor QAccessibleValueInterface::QAccessibleValueInterface() (adaptor class)

static void _init_ctor_QAccessibleValueInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAccessibleValueInterface_Adaptor> ();
}

static void _call_ctor_QAccessibleValueInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleValueInterface_Adaptor *> (new QAccessibleValueInterface_Adaptor ());
}


// QVariant QAccessibleValueInterface::currentValue()

static void _init_cbs_currentValue_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_cbs_currentValue_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface_Adaptor *)cls)->cbs_currentValue_c0_0 ());
}

static void _set_callback_cbs_currentValue_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleValueInterface_Adaptor *)cls)->cb_currentValue_c0_0 = cb;
}


// QVariant QAccessibleValueInterface::maximumValue()

static void _init_cbs_maximumValue_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_cbs_maximumValue_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface_Adaptor *)cls)->cbs_maximumValue_c0_0 ());
}

static void _set_callback_cbs_maximumValue_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleValueInterface_Adaptor *)cls)->cb_maximumValue_c0_0 = cb;
}


// QVariant QAccessibleValueInterface::minimumStepSize()

static void _init_cbs_minimumStepSize_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_cbs_minimumStepSize_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface_Adaptor *)cls)->cbs_minimumStepSize_c0_0 ());
}

static void _set_callback_cbs_minimumStepSize_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleValueInterface_Adaptor *)cls)->cb_minimumStepSize_c0_0 = cb;
}


// QVariant QAccessibleValueInterface::minimumValue()

static void _init_cbs_minimumValue_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_cbs_minimumValue_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueInterface_Adaptor *)cls)->cbs_minimumValue_c0_0 ());
}

static void _set_callback_cbs_minimumValue_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleValueInterface_Adaptor *)cls)->cb_minimumValue_c0_0 = cb;
}


// void QAccessibleValueInterface::setCurrentValue(const QVariant &value)

static void _init_cbs_setCurrentValue_2119_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setCurrentValue_2119_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleValueInterface_Adaptor *)cls)->cbs_setCurrentValue_2119_0 (arg1);
}

static void _set_callback_cbs_setCurrentValue_2119_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleValueInterface_Adaptor *)cls)->cb_setCurrentValue_2119_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleValueInterface> &qtdecl_QAccessibleValueInterface ();

static gsi::Methods methods_QAccessibleValueInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleValueInterface::QAccessibleValueInterface()\nThis method creates an object of class QAccessibleValueInterface.", &_init_ctor_QAccessibleValueInterface_Adaptor_0, &_call_ctor_QAccessibleValueInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("currentValue", "@brief Virtual method QVariant QAccessibleValueInterface::currentValue()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_currentValue_c0_0, &_call_cbs_currentValue_c0_0);
  methods += new qt_gsi::GenericMethod ("currentValue", "@hide", true, &_init_cbs_currentValue_c0_0, &_call_cbs_currentValue_c0_0, &_set_callback_cbs_currentValue_c0_0);
  methods += new qt_gsi::GenericMethod ("maximumValue", "@brief Virtual method QVariant QAccessibleValueInterface::maximumValue()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_maximumValue_c0_0, &_call_cbs_maximumValue_c0_0);
  methods += new qt_gsi::GenericMethod ("maximumValue", "@hide", true, &_init_cbs_maximumValue_c0_0, &_call_cbs_maximumValue_c0_0, &_set_callback_cbs_maximumValue_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumStepSize", "@brief Virtual method QVariant QAccessibleValueInterface::minimumStepSize()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_minimumStepSize_c0_0, &_call_cbs_minimumStepSize_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumStepSize", "@hide", true, &_init_cbs_minimumStepSize_c0_0, &_call_cbs_minimumStepSize_c0_0, &_set_callback_cbs_minimumStepSize_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumValue", "@brief Virtual method QVariant QAccessibleValueInterface::minimumValue()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_minimumValue_c0_0, &_call_cbs_minimumValue_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumValue", "@hide", true, &_init_cbs_minimumValue_c0_0, &_call_cbs_minimumValue_c0_0, &_set_callback_cbs_minimumValue_c0_0);
  methods += new qt_gsi::GenericMethod ("setCurrentValue", "@brief Virtual method void QAccessibleValueInterface::setCurrentValue(const QVariant &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setCurrentValue_2119_0, &_call_cbs_setCurrentValue_2119_0);
  methods += new qt_gsi::GenericMethod ("setCurrentValue", "@hide", false, &_init_cbs_setCurrentValue_2119_0, &_call_cbs_setCurrentValue_2119_0, &_set_callback_cbs_setCurrentValue_2119_0);
  return methods;
}

gsi::Class<QAccessibleValueInterface_Adaptor> decl_QAccessibleValueInterface_Adaptor (qtdecl_QAccessibleValueInterface (), "QtGui", "QAccessibleValueInterface",
  methods_QAccessibleValueInterface_Adaptor (),
  "@qt\n@brief Binding of QAccessibleValueInterface");

}

