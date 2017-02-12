
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2016 Matthias Koefferlein

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
*  @file gsiDeclQDoubleValidator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDoubleValidator>
#include <QChildEvent>
#include <QEvent>
#include <QLocale>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDoubleValidator

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QDoubleValidator::staticMetaObject);
}


// double QDoubleValidator::bottom()


static void _init_f_bottom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_bottom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QDoubleValidator *)cls)->bottom ());
}


// int QDoubleValidator::decimals()


static void _init_f_decimals_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_decimals_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDoubleValidator *)cls)->decimals ());
}


// QDoubleValidator::Notation QDoubleValidator::notation()


static void _init_f_notation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDoubleValidator::Notation>::target_type > ();
}

static void _call_f_notation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDoubleValidator::Notation>::target_type > ((qt_gsi::Converter<QDoubleValidator::Notation>::target_type)qt_gsi::CppToQtAdaptor<QDoubleValidator::Notation>(((QDoubleValidator *)cls)->notation ()));
}


// void QDoubleValidator::setBottom(double)


static void _init_f_setBottom_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottom_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator *)cls)->setBottom (arg1);
}


// void QDoubleValidator::setDecimals(int)


static void _init_f_setDecimals_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDecimals_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator *)cls)->setDecimals (arg1);
}


// void QDoubleValidator::setNotation(QDoubleValidator::Notation)


static void _init_f_setNotation_3014 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QDoubleValidator::Notation>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNotation_3014 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDoubleValidator::Notation>::target_type & arg1 = args.read<const qt_gsi::Converter<QDoubleValidator::Notation>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator *)cls)->setNotation (qt_gsi::QtToCppAdaptor<QDoubleValidator::Notation>(arg1).cref());
}


// void QDoubleValidator::setRange(double bottom, double top, int decimals)


static void _init_f_setRange_2693 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("decimals", true, "0");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setRange_2693 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  int arg3 = args ? args.read<int > (heap) : (int)(0);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator *)cls)->setRange (arg1, arg2, arg3);
}


// void QDoubleValidator::setTop(double)


static void _init_f_setTop_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTop_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator *)cls)->setTop (arg1);
}


// double QDoubleValidator::top()


static void _init_f_top_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_top_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QDoubleValidator *)cls)->top ());
}


// (QString &, int &) const


static void _init_f_validate_c2171 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<int & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QValidator::State>::target_type > ();
}

static void _call_f_validate_c2171 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  int &arg2 = args.read<int & > (heap);
  ret.write<qt_gsi::Converter<QValidator::State>::target_type > ((qt_gsi::Converter<QValidator::State>::target_type)qt_gsi::CppToQtAdaptor<QValidator::State>(((QDoubleValidator *)cls)->validate (arg1, arg2)));
}


// static QString QDoubleValidator::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QDoubleValidator::tr (arg1, arg2));
}


// static QString QDoubleValidator::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QDoubleValidator::tr (arg1, arg2, arg3));
}


// static QString QDoubleValidator::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QDoubleValidator::trUtf8 (arg1, arg2));
}


// static QString QDoubleValidator::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QDoubleValidator::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QDoubleValidator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":bottom", "@brief Method double QDoubleValidator::bottom()\n", true, &_init_f_bottom_c0, &_call_f_bottom_c0);
  methods += new qt_gsi::GenericMethod (":decimals", "@brief Method int QDoubleValidator::decimals()\n", true, &_init_f_decimals_c0, &_call_f_decimals_c0);
  methods += new qt_gsi::GenericMethod (":notation", "@brief Method QDoubleValidator::Notation QDoubleValidator::notation()\n", true, &_init_f_notation_c0, &_call_f_notation_c0);
  methods += new qt_gsi::GenericMethod ("setBottom|bottom=", "@brief Method void QDoubleValidator::setBottom(double)\n", false, &_init_f_setBottom_1071, &_call_f_setBottom_1071);
  methods += new qt_gsi::GenericMethod ("setDecimals|decimals=", "@brief Method void QDoubleValidator::setDecimals(int)\n", false, &_init_f_setDecimals_767, &_call_f_setDecimals_767);
  methods += new qt_gsi::GenericMethod ("setNotation|notation=", "@brief Method void QDoubleValidator::setNotation(QDoubleValidator::Notation)\n", false, &_init_f_setNotation_3014, &_call_f_setNotation_3014);
  methods += new qt_gsi::GenericMethod ("setRange", "@brief Method void QDoubleValidator::setRange(double bottom, double top, int decimals)\n", false, &_init_f_setRange_2693, &_call_f_setRange_2693);
  methods += new qt_gsi::GenericMethod ("setTop|top=", "@brief Method void QDoubleValidator::setTop(double)\n", false, &_init_f_setTop_1071, &_call_f_setTop_1071);
  methods += new qt_gsi::GenericMethod (":top", "@brief Method double QDoubleValidator::top()\n", true, &_init_f_top_c0, &_call_f_top_c0);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Method (QString &, int &) const\nThis is a reimplementation of QValidator::validate", true, &_init_f_validate_c2171, &_call_f_validate_c2171);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QDoubleValidator::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QDoubleValidator::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QDoubleValidator::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QDoubleValidator::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QDoubleValidator::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QValidator> &qtdecl_QValidator ();

gsi::Class<QDoubleValidator> decl_QDoubleValidator (qtdecl_QValidator (), "QDoubleValidator_Native",
  methods_QDoubleValidator (),
  "@hide\n@alias QDoubleValidator");

GSIQT_PUBLIC gsi::Class<QDoubleValidator> &qtdecl_QDoubleValidator () { return decl_QDoubleValidator; }

}


class QDoubleValidator_Adaptor : public QDoubleValidator, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDoubleValidator_Adaptor();

  //  [adaptor ctor] QDoubleValidator::QDoubleValidator(QObject *parent)
  QDoubleValidator_Adaptor(QObject *parent) : QDoubleValidator(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QDoubleValidator::QDoubleValidator(double bottom, double top, int decimals, QObject *parent)
  QDoubleValidator_Adaptor(double bottom, double top, int decimals, QObject *parent) : QDoubleValidator(bottom, top, decimals, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QDoubleValidator::receivers(const char *signal)
  int fp_QDoubleValidator_receivers_c1731 (const char *signal) const {
    return QDoubleValidator::receivers(signal);
  }

  //  [expose] QObject *QDoubleValidator::sender()
  QObject * fp_QDoubleValidator_sender_c0 () const {
    return QDoubleValidator::sender();
  }

  //  [adaptor impl] bool QDoubleValidator::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QDoubleValidator::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QDoubleValidator_Adaptor, bool, QEvent *>(&QDoubleValidator_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QDoubleValidator::event(arg1);
    }
  }

  //  [adaptor impl] bool QDoubleValidator::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QDoubleValidator::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QDoubleValidator_Adaptor, bool, QObject *, QEvent *>(&QDoubleValidator_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QDoubleValidator::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QDoubleValidator::fixup(QString &)
  void cbs_fixup_c1330_0(QString &arg1) const
  {
    QDoubleValidator::fixup(arg1);
  }

  virtual void fixup(QString &arg1) const
  {
    if (cb_fixup_c1330_0.can_issue()) {
      cb_fixup_c1330_0.issue<QDoubleValidator_Adaptor, QString &>(&QDoubleValidator_Adaptor::cbs_fixup_c1330_0, arg1);
    } else {
      QDoubleValidator::fixup(arg1);
    }
  }

  //  [adaptor impl] void QDoubleValidator::setRange(double bottom, double top, int decimals)
  void cbs_setRange_2693_1(double bottom, double top, int decimals)
  {
    QDoubleValidator::setRange(bottom, top, decimals);
  }

  virtual void setRange(double bottom, double top, int decimals)
  {
    if (cb_setRange_2693_1.can_issue()) {
      cb_setRange_2693_1.issue<QDoubleValidator_Adaptor, double, double, int>(&QDoubleValidator_Adaptor::cbs_setRange_2693_1, bottom, top, decimals);
    } else {
      QDoubleValidator::setRange(bottom, top, decimals);
    }
  }

  //  [adaptor impl] QValidator::State QDoubleValidator::validate(QString &, int &)
  qt_gsi::Converter<QValidator::State>::target_type cbs_validate_c2171_0(QString &arg1, int &arg2) const
  {
    return qt_gsi::CppToQtAdaptor<QValidator::State>(QDoubleValidator::validate(arg1, arg2));
  }

  virtual QValidator::State validate(QString &arg1, int &arg2) const
  {
    if (cb_validate_c2171_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QValidator::State>(cb_validate_c2171_0.issue<QDoubleValidator_Adaptor, qt_gsi::Converter<QValidator::State>::target_type, QString &, int &>(&QDoubleValidator_Adaptor::cbs_validate_c2171_0, arg1, arg2)).cref();
    } else {
      return QDoubleValidator::validate(arg1, arg2);
    }
  }

  //  [adaptor impl] void QDoubleValidator::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QDoubleValidator::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QDoubleValidator_Adaptor, QChildEvent *>(&QDoubleValidator_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QDoubleValidator::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QDoubleValidator::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QDoubleValidator::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QDoubleValidator_Adaptor, QEvent *>(&QDoubleValidator_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QDoubleValidator::customEvent(arg1);
    }
  }

  //  [emitter impl] void QDoubleValidator::destroyed(QObject *)
  void emitter_QDoubleValidator_destroyed_1302(QObject *arg1)
  {
    emit QDoubleValidator::destroyed(arg1);
  }

  //  [adaptor impl] void QDoubleValidator::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QDoubleValidator::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QDoubleValidator_Adaptor, const char *>(&QDoubleValidator_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QDoubleValidator::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QDoubleValidator::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QDoubleValidator::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QDoubleValidator_Adaptor, QTimerEvent *>(&QDoubleValidator_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QDoubleValidator::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_fixup_c1330_0;
  gsi::Callback cb_setRange_2693_1;
  gsi::Callback cb_validate_c2171_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QDoubleValidator_Adaptor::~QDoubleValidator_Adaptor() { }

//  Constructor QDoubleValidator::QDoubleValidator(QObject *parent) (adaptor class)

static void _init_ctor_QDoubleValidator_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QDoubleValidator_Adaptor> ();
}

static void _call_ctor_QDoubleValidator_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  ret.write<QDoubleValidator_Adaptor *> (new QDoubleValidator_Adaptor (arg1));
}


//  Constructor QDoubleValidator::QDoubleValidator(double bottom, double top, int decimals, QObject *parent) (adaptor class)

static void _init_ctor_QDoubleValidator_Adaptor_3887 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("decimals");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("parent");
  decl->add_arg<QObject * > (argspec_3);
  decl->set_return_new<QDoubleValidator_Adaptor> ();
}

static void _call_ctor_QDoubleValidator_Adaptor_3887 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  int arg3 = args.read<int > (heap);
  QObject *arg4 = args.read<QObject * > (heap);
  ret.write<QDoubleValidator_Adaptor *> (new QDoubleValidator_Adaptor (arg1, arg2, arg3, arg4));
}


// void QDoubleValidator::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QDoubleValidator::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QDoubleValidator::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QDoubleValidator_Adaptor *)cls)->emitter_QDoubleValidator_destroyed_1302 (arg1);
}


// void QDoubleValidator::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QDoubleValidator::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QDoubleValidator_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QDoubleValidator::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QDoubleValidator_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// void QDoubleValidator::fixup(QString &)

static void _init_cbs_fixup_c1330_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_fixup_c1330_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator_Adaptor *)cls)->cbs_fixup_c1330_0 (arg1);
}

static void _set_callback_cbs_fixup_c1330_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_fixup_c1330_0 = cb;
}


// exposed int QDoubleValidator::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QDoubleValidator_Adaptor *)cls)->fp_QDoubleValidator_receivers_c1731 (arg1));
}


// exposed QObject *QDoubleValidator::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QDoubleValidator_Adaptor *)cls)->fp_QDoubleValidator_sender_c0 ());
}


// void QDoubleValidator::setRange(double bottom, double top, int decimals)

static void _init_cbs_setRange_2693_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("decimals");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_cbs_setRange_2693_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  int arg3 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator_Adaptor *)cls)->cbs_setRange_2693_1 (arg1, arg2, arg3);
}

static void _set_callback_cbs_setRange_2693_1 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_setRange_2693_1 = cb;
}


// void QDoubleValidator::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDoubleValidator_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// QValidator::State QDoubleValidator::validate(QString &, int &)

static void _init_cbs_validate_c2171_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<int & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QValidator::State>::target_type > ();
}

static void _call_cbs_validate_c2171_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  int &arg2 = args.read<int & > (heap);
  ret.write<qt_gsi::Converter<QValidator::State>::target_type > ((qt_gsi::Converter<QValidator::State>::target_type)((QDoubleValidator_Adaptor *)cls)->cbs_validate_c2171_0 (arg1, arg2));
}

static void _set_callback_cbs_validate_c2171_0 (void *cls, const gsi::Callback &cb)
{
  ((QDoubleValidator_Adaptor *)cls)->cb_validate_c2171_0 = cb;
}


namespace gsi
{

gsi::Class<QDoubleValidator> &qtdecl_QDoubleValidator ();

static gsi::Methods methods_QDoubleValidator_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDoubleValidator::QDoubleValidator(QObject *parent)\nThis method creates an object of class QDoubleValidator.", &_init_ctor_QDoubleValidator_Adaptor_1302, &_call_ctor_QDoubleValidator_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDoubleValidator::QDoubleValidator(double bottom, double top, int decimals, QObject *parent)\nThis method creates an object of class QDoubleValidator.", &_init_ctor_QDoubleValidator_Adaptor_3887, &_call_ctor_QDoubleValidator_Adaptor_3887);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QDoubleValidator::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QDoubleValidator::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QDoubleValidator::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QDoubleValidator::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QDoubleValidator::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QDoubleValidator::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("fixup", "@hide", true, &_init_cbs_fixup_c1330_0, &_call_cbs_fixup_c1330_0);
  methods += new qt_gsi::GenericMethod ("fixup", "@brief Virtual method void QDoubleValidator::fixup(QString &)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_fixup_c1330_0, &_call_cbs_fixup_c1330_0, &_set_callback_cbs_fixup_c1330_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QDoubleValidator::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QDoubleValidator::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("setRange", "@hide", false, &_init_cbs_setRange_2693_1, &_call_cbs_setRange_2693_1);
  methods += new qt_gsi::GenericMethod ("setRange", "@brief Virtual method void QDoubleValidator::setRange(double bottom, double top, int decimals)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setRange_2693_1, &_call_cbs_setRange_2693_1, &_set_callback_cbs_setRange_2693_1);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QDoubleValidator::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("validate", "@hide", true, &_init_cbs_validate_c2171_0, &_call_cbs_validate_c2171_0);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Virtual method QValidator::State QDoubleValidator::validate(QString &, int &)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_validate_c2171_0, &_call_cbs_validate_c2171_0, &_set_callback_cbs_validate_c2171_0);
  return methods;
}

gsi::Class<QDoubleValidator_Adaptor> decl_QDoubleValidator_Adaptor (qtdecl_QDoubleValidator (), "QDoubleValidator",
  methods_QDoubleValidator_Adaptor (),
  "@qt\n@brief Binding of QDoubleValidator");

}


//  Implementation of the enum wrapper class for QDoubleValidator::Notation
namespace qt_gsi
{

static gsi::Enum<QDoubleValidator::Notation> decl_QDoubleValidator_Notation_Enum ("QDoubleValidator_Notation",
    gsi::enum_const ("StandardNotation", QDoubleValidator::StandardNotation, "@brief Enum constant QDoubleValidator::StandardNotation") +
    gsi::enum_const ("ScientificNotation", QDoubleValidator::ScientificNotation, "@brief Enum constant QDoubleValidator::ScientificNotation"),
  "@qt\n@brief This class represents the QDoubleValidator::Notation enum");

static gsi::QFlagsClass<QDoubleValidator::Notation > decl_QDoubleValidator_Notation_Enums ("QDoubleValidator_QFlags_Notation",
  "@qt\n@brief This class represents the QFlags<QDoubleValidator::Notation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDoubleValidator> inject_QDoubleValidator_Notation_Enum_in_parent (decl_QDoubleValidator_Notation_Enum.defs ());
static gsi::ClassExt<QDoubleValidator> decl_QDoubleValidator_Notation_Enum_as_child (decl_QDoubleValidator_Notation_Enum, "Notation");
static gsi::ClassExt<QDoubleValidator> decl_QDoubleValidator_Notation_Enums_as_child (decl_QDoubleValidator_Notation_Enums, "QFlags_Notation");

}

