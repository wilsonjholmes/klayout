
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
*  @file gsiDeclQAudioInputSelectorControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioInputSelectorControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioInputSelectorControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioInputSelectorControl::staticMetaObject);
}


// QString QAudioInputSelectorControl::activeInput()


static void _init_f_activeInput_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_activeInput_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioInputSelectorControl *)cls)->activeInput ());
}


// QList<QString> QAudioInputSelectorControl::availableInputs()


static void _init_f_availableInputs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QString> > ();
}

static void _call_f_availableInputs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QString> > ((QList<QString>)((QAudioInputSelectorControl *)cls)->availableInputs ());
}


// QString QAudioInputSelectorControl::defaultInput()


static void _init_f_defaultInput_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_defaultInput_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioInputSelectorControl *)cls)->defaultInput ());
}


// QString QAudioInputSelectorControl::inputDescription(const QString &name)


static void _init_f_inputDescription_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_inputDescription_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QAudioInputSelectorControl *)cls)->inputDescription (arg1));
}


// void QAudioInputSelectorControl::setActiveInput(const QString &name)


static void _init_f_setActiveInput_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setActiveInput_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInputSelectorControl *)cls)->setActiveInput (arg1);
}


// static QString QAudioInputSelectorControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QAudioInputSelectorControl::tr (arg1, arg2, arg3));
}


// static QString QAudioInputSelectorControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QAudioInputSelectorControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioInputSelectorControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":activeInput", "@brief Method QString QAudioInputSelectorControl::activeInput()\n", true, &_init_f_activeInput_c0, &_call_f_activeInput_c0);
  methods += new qt_gsi::GenericMethod ("availableInputs", "@brief Method QList<QString> QAudioInputSelectorControl::availableInputs()\n", true, &_init_f_availableInputs_c0, &_call_f_availableInputs_c0);
  methods += new qt_gsi::GenericMethod ("defaultInput", "@brief Method QString QAudioInputSelectorControl::defaultInput()\n", true, &_init_f_defaultInput_c0, &_call_f_defaultInput_c0);
  methods += new qt_gsi::GenericMethod ("inputDescription", "@brief Method QString QAudioInputSelectorControl::inputDescription(const QString &name)\n", true, &_init_f_inputDescription_c2025, &_call_f_inputDescription_c2025);
  methods += new qt_gsi::GenericMethod ("setActiveInput|activeInput=", "@brief Method void QAudioInputSelectorControl::setActiveInput(const QString &name)\n", false, &_init_f_setActiveInput_2025, &_call_f_setActiveInput_2025);
  methods += gsi::qt_signal<const QString & > ("activeInputChanged(const QString &)", "activeInputChanged", gsi::arg("name"), "@brief Signal declaration for QAudioInputSelectorControl::activeInputChanged(const QString &name)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("availableInputsChanged()", "availableInputsChanged", "@brief Signal declaration for QAudioInputSelectorControl::availableInputsChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QAudioInputSelectorControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioInputSelectorControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAudioInputSelectorControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

gsi::Class<QAudioInputSelectorControl> decl_QAudioInputSelectorControl (qtdecl_QMediaControl (), "QAudioInputSelectorControl_Native",
  methods_QAudioInputSelectorControl (),
  "@hide\n@alias QAudioInputSelectorControl");

GSIQT_PUBLIC gsi::Class<QAudioInputSelectorControl> &qtdecl_QAudioInputSelectorControl () { return decl_QAudioInputSelectorControl; }

}


class QAudioInputSelectorControl_Adaptor : public QAudioInputSelectorControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioInputSelectorControl_Adaptor();

  //  [expose] bool QAudioInputSelectorControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioInputSelectorControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioInputSelectorControl::isSignalConnected(signal);
  }

  //  [expose] int QAudioInputSelectorControl::receivers(const char *signal)
  int fp_QAudioInputSelectorControl_receivers_c1731 (const char *signal) const {
    return QAudioInputSelectorControl::receivers(signal);
  }

  //  [expose] QObject *QAudioInputSelectorControl::sender()
  QObject * fp_QAudioInputSelectorControl_sender_c0 () const {
    return QAudioInputSelectorControl::sender();
  }

  //  [expose] int QAudioInputSelectorControl::senderSignalIndex()
  int fp_QAudioInputSelectorControl_senderSignalIndex_c0 () const {
    return QAudioInputSelectorControl::senderSignalIndex();
  }

  //  [adaptor impl] QString QAudioInputSelectorControl::activeInput()
  QString cbs_activeInput_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("activeInput");
  }

  virtual QString activeInput() const
  {
    if (cb_activeInput_c0_0.can_issue()) {
      return cb_activeInput_c0_0.issue<QAudioInputSelectorControl_Adaptor, QString>(&QAudioInputSelectorControl_Adaptor::cbs_activeInput_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("activeInput");
    }
  }

  //  [emitter impl] void QAudioInputSelectorControl::activeInputChanged(const QString &name)
  void emitter_QAudioInputSelectorControl_activeInputChanged_2025(const QString &name)
  {
    emit QAudioInputSelectorControl::activeInputChanged(name);
  }

  //  [adaptor impl] QList<QString> QAudioInputSelectorControl::availableInputs()
  QList<QString> cbs_availableInputs_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("availableInputs");
  }

  virtual QList<QString> availableInputs() const
  {
    if (cb_availableInputs_c0_0.can_issue()) {
      return cb_availableInputs_c0_0.issue<QAudioInputSelectorControl_Adaptor, QList<QString> >(&QAudioInputSelectorControl_Adaptor::cbs_availableInputs_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("availableInputs");
    }
  }

  //  [emitter impl] void QAudioInputSelectorControl::availableInputsChanged()
  void emitter_QAudioInputSelectorControl_availableInputsChanged_0()
  {
    emit QAudioInputSelectorControl::availableInputsChanged();
  }

  //  [adaptor impl] QString QAudioInputSelectorControl::defaultInput()
  QString cbs_defaultInput_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("defaultInput");
  }

  virtual QString defaultInput() const
  {
    if (cb_defaultInput_c0_0.can_issue()) {
      return cb_defaultInput_c0_0.issue<QAudioInputSelectorControl_Adaptor, QString>(&QAudioInputSelectorControl_Adaptor::cbs_defaultInput_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("defaultInput");
    }
  }

  //  [emitter impl] void QAudioInputSelectorControl::destroyed(QObject *)
  void emitter_QAudioInputSelectorControl_destroyed_1302(QObject *arg1)
  {
    emit QAudioInputSelectorControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QAudioInputSelectorControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QAudioInputSelectorControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioInputSelectorControl_Adaptor, bool, QEvent *>(&QAudioInputSelectorControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QAudioInputSelectorControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QAudioInputSelectorControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAudioInputSelectorControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioInputSelectorControl_Adaptor, bool, QObject *, QEvent *>(&QAudioInputSelectorControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAudioInputSelectorControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QString QAudioInputSelectorControl::inputDescription(const QString &name)
  QString cbs_inputDescription_c2025_0(const QString &name) const
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("inputDescription");
  }

  virtual QString inputDescription(const QString &name) const
  {
    if (cb_inputDescription_c2025_0.can_issue()) {
      return cb_inputDescription_c2025_0.issue<QAudioInputSelectorControl_Adaptor, QString, const QString &>(&QAudioInputSelectorControl_Adaptor::cbs_inputDescription_c2025_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("inputDescription");
    }
  }

  //  [adaptor impl] void QAudioInputSelectorControl::setActiveInput(const QString &name)
  void cbs_setActiveInput_2025_0(const QString &name)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("setActiveInput");
  }

  virtual void setActiveInput(const QString &name)
  {
    if (cb_setActiveInput_2025_0.can_issue()) {
      cb_setActiveInput_2025_0.issue<QAudioInputSelectorControl_Adaptor, const QString &>(&QAudioInputSelectorControl_Adaptor::cbs_setActiveInput_2025_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setActiveInput");
    }
  }

  //  [adaptor impl] void QAudioInputSelectorControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAudioInputSelectorControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioInputSelectorControl_Adaptor, QChildEvent *>(&QAudioInputSelectorControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAudioInputSelectorControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioInputSelectorControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAudioInputSelectorControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioInputSelectorControl_Adaptor, QEvent *>(&QAudioInputSelectorControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAudioInputSelectorControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioInputSelectorControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioInputSelectorControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioInputSelectorControl_Adaptor, const QMetaMethod &>(&QAudioInputSelectorControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioInputSelectorControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioInputSelectorControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAudioInputSelectorControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioInputSelectorControl_Adaptor, QTimerEvent *>(&QAudioInputSelectorControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAudioInputSelectorControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_activeInput_c0_0;
  gsi::Callback cb_availableInputs_c0_0;
  gsi::Callback cb_defaultInput_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_inputDescription_c2025_0;
  gsi::Callback cb_setActiveInput_2025_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioInputSelectorControl_Adaptor::~QAudioInputSelectorControl_Adaptor() { }

// QString QAudioInputSelectorControl::activeInput()

static void _init_cbs_activeInput_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_activeInput_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioInputSelectorControl_Adaptor *)cls)->cbs_activeInput_c0_0 ());
}

static void _set_callback_cbs_activeInput_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_activeInput_c0_0 = cb;
}


// emitter void QAudioInputSelectorControl::activeInputChanged(const QString &name)

static void _init_emitter_activeInputChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_activeInputChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ((QAudioInputSelectorControl_Adaptor *)cls)->emitter_QAudioInputSelectorControl_activeInputChanged_2025 (arg1);
}


// QList<QString> QAudioInputSelectorControl::availableInputs()

static void _init_cbs_availableInputs_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QString> > ();
}

static void _call_cbs_availableInputs_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QString> > ((QList<QString>)((QAudioInputSelectorControl_Adaptor *)cls)->cbs_availableInputs_c0_0 ());
}

static void _set_callback_cbs_availableInputs_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_availableInputs_c0_0 = cb;
}


// emitter void QAudioInputSelectorControl::availableInputsChanged()

static void _init_emitter_availableInputsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_availableInputsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QAudioInputSelectorControl_Adaptor *)cls)->emitter_QAudioInputSelectorControl_availableInputsChanged_0 ();
}


// void QAudioInputSelectorControl::childEvent(QChildEvent *)

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
  ((QAudioInputSelectorControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioInputSelectorControl::customEvent(QEvent *)

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
  ((QAudioInputSelectorControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// QString QAudioInputSelectorControl::defaultInput()

static void _init_cbs_defaultInput_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_defaultInput_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioInputSelectorControl_Adaptor *)cls)->cbs_defaultInput_c0_0 ());
}

static void _set_callback_cbs_defaultInput_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_defaultInput_c0_0 = cb;
}


// emitter void QAudioInputSelectorControl::destroyed(QObject *)

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
  ((QAudioInputSelectorControl_Adaptor *)cls)->emitter_QAudioInputSelectorControl_destroyed_1302 (arg1);
}


// void QAudioInputSelectorControl::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInputSelectorControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioInputSelectorControl::event(QEvent *)

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
  ret.write<bool > ((bool)((QAudioInputSelectorControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioInputSelectorControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QAudioInputSelectorControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// QString QAudioInputSelectorControl::inputDescription(const QString &name)

static void _init_cbs_inputDescription_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_inputDescription_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QAudioInputSelectorControl_Adaptor *)cls)->cbs_inputDescription_c2025_0 (arg1));
}

static void _set_callback_cbs_inputDescription_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_inputDescription_c2025_0 = cb;
}


// exposed bool QAudioInputSelectorControl::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QAudioInputSelectorControl_Adaptor *)cls)->fp_QAudioInputSelectorControl_isSignalConnected_c2394 (arg1));
}


// exposed int QAudioInputSelectorControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QAudioInputSelectorControl_Adaptor *)cls)->fp_QAudioInputSelectorControl_receivers_c1731 (arg1));
}


// exposed QObject *QAudioInputSelectorControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioInputSelectorControl_Adaptor *)cls)->fp_QAudioInputSelectorControl_sender_c0 ());
}


// exposed int QAudioInputSelectorControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioInputSelectorControl_Adaptor *)cls)->fp_QAudioInputSelectorControl_senderSignalIndex_c0 ());
}


// void QAudioInputSelectorControl::setActiveInput(const QString &name)

static void _init_cbs_setActiveInput_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setActiveInput_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInputSelectorControl_Adaptor *)cls)->cbs_setActiveInput_2025_0 (arg1);
}

static void _set_callback_cbs_setActiveInput_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_setActiveInput_2025_0 = cb;
}


// void QAudioInputSelectorControl::timerEvent(QTimerEvent *)

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
  ((QAudioInputSelectorControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInputSelectorControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioInputSelectorControl> &qtdecl_QAudioInputSelectorControl ();

static gsi::Methods methods_QAudioInputSelectorControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("activeInput", "@hide", true, &_init_cbs_activeInput_c0_0, &_call_cbs_activeInput_c0_0);
  methods += new qt_gsi::GenericMethod ("activeInput", "@brief Virtual method QString QAudioInputSelectorControl::activeInput()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_activeInput_c0_0, &_call_cbs_activeInput_c0_0, &_set_callback_cbs_activeInput_c0_0);
  methods += new qt_gsi::GenericMethod ("emit_activeInputChanged", "@brief Emitter for signal void QAudioInputSelectorControl::activeInputChanged(const QString &name)\nCall this method to emit this signal.", false, &_init_emitter_activeInputChanged_2025, &_call_emitter_activeInputChanged_2025);
  methods += new qt_gsi::GenericMethod ("availableInputs", "@hide", true, &_init_cbs_availableInputs_c0_0, &_call_cbs_availableInputs_c0_0);
  methods += new qt_gsi::GenericMethod ("availableInputs", "@brief Virtual method QList<QString> QAudioInputSelectorControl::availableInputs()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_availableInputs_c0_0, &_call_cbs_availableInputs_c0_0, &_set_callback_cbs_availableInputs_c0_0);
  methods += new qt_gsi::GenericMethod ("emit_availableInputsChanged", "@brief Emitter for signal void QAudioInputSelectorControl::availableInputsChanged()\nCall this method to emit this signal.", false, &_init_emitter_availableInputsChanged_0, &_call_emitter_availableInputsChanged_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioInputSelectorControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioInputSelectorControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("defaultInput", "@hide", true, &_init_cbs_defaultInput_c0_0, &_call_cbs_defaultInput_c0_0);
  methods += new qt_gsi::GenericMethod ("defaultInput", "@brief Virtual method QString QAudioInputSelectorControl::defaultInput()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_defaultInput_c0_0, &_call_cbs_defaultInput_c0_0, &_set_callback_cbs_defaultInput_c0_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QAudioInputSelectorControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioInputSelectorControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioInputSelectorControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioInputSelectorControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("inputDescription", "@hide", true, &_init_cbs_inputDescription_c2025_0, &_call_cbs_inputDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("inputDescription", "@brief Virtual method QString QAudioInputSelectorControl::inputDescription(const QString &name)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_inputDescription_c2025_0, &_call_cbs_inputDescription_c2025_0, &_set_callback_cbs_inputDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioInputSelectorControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioInputSelectorControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioInputSelectorControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioInputSelectorControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setActiveInput", "@hide", false, &_init_cbs_setActiveInput_2025_0, &_call_cbs_setActiveInput_2025_0);
  methods += new qt_gsi::GenericMethod ("setActiveInput", "@brief Virtual method void QAudioInputSelectorControl::setActiveInput(const QString &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setActiveInput_2025_0, &_call_cbs_setActiveInput_2025_0, &_set_callback_cbs_setActiveInput_2025_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioInputSelectorControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioInputSelectorControl_Adaptor> decl_QAudioInputSelectorControl_Adaptor (qtdecl_QAudioInputSelectorControl (), "QAudioInputSelectorControl",
  methods_QAudioInputSelectorControl_Adaptor (),
  "@qt\n@brief Binding of QAudioInputSelectorControl");

}

