
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
*  @file gsiDeclQMediaContainerControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaContainerControl>
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
// class QMediaContainerControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaContainerControl::staticMetaObject);
}


// QString QMediaContainerControl::containerDescription(const QString &formatMimeType)


static void _init_f_containerDescription_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("formatMimeType");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_containerDescription_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QMediaContainerControl *)cls)->containerDescription (arg1));
}


// QString QMediaContainerControl::containerFormat()


static void _init_f_containerFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_containerFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMediaContainerControl *)cls)->containerFormat ());
}


// void QMediaContainerControl::setContainerFormat(const QString &format)


static void _init_f_setContainerFormat_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setContainerFormat_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaContainerControl *)cls)->setContainerFormat (arg1);
}


// QStringList QMediaContainerControl::supportedContainers()


static void _init_f_supportedContainers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_supportedContainers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMediaContainerControl *)cls)->supportedContainers ());
}


// static QString QMediaContainerControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaContainerControl::tr (arg1, arg2, arg3));
}


// static QString QMediaContainerControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaContainerControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMediaContainerControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("containerDescription", "@brief Method QString QMediaContainerControl::containerDescription(const QString &formatMimeType)\n", true, &_init_f_containerDescription_c2025, &_call_f_containerDescription_c2025);
  methods += new qt_gsi::GenericMethod (":containerFormat", "@brief Method QString QMediaContainerControl::containerFormat()\n", true, &_init_f_containerFormat_c0, &_call_f_containerFormat_c0);
  methods += new qt_gsi::GenericMethod ("setContainerFormat|containerFormat=", "@brief Method void QMediaContainerControl::setContainerFormat(const QString &format)\n", false, &_init_f_setContainerFormat_2025, &_call_f_setContainerFormat_2025);
  methods += new qt_gsi::GenericMethod ("supportedContainers", "@brief Method QStringList QMediaContainerControl::supportedContainers()\n", true, &_init_f_supportedContainers_c0, &_call_f_supportedContainers_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QMediaContainerControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaContainerControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMediaContainerControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

gsi::Class<QMediaContainerControl> decl_QMediaContainerControl (qtdecl_QMediaControl (), "QMediaContainerControl_Native",
  methods_QMediaContainerControl (),
  "@hide\n@alias QMediaContainerControl");

GSIQT_PUBLIC gsi::Class<QMediaContainerControl> &qtdecl_QMediaContainerControl () { return decl_QMediaContainerControl; }

}


class QMediaContainerControl_Adaptor : public QMediaContainerControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaContainerControl_Adaptor();

  //  [expose] bool QMediaContainerControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaContainerControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaContainerControl::isSignalConnected(signal);
  }

  //  [expose] int QMediaContainerControl::receivers(const char *signal)
  int fp_QMediaContainerControl_receivers_c1731 (const char *signal) const {
    return QMediaContainerControl::receivers(signal);
  }

  //  [expose] QObject *QMediaContainerControl::sender()
  QObject * fp_QMediaContainerControl_sender_c0 () const {
    return QMediaContainerControl::sender();
  }

  //  [expose] int QMediaContainerControl::senderSignalIndex()
  int fp_QMediaContainerControl_senderSignalIndex_c0 () const {
    return QMediaContainerControl::senderSignalIndex();
  }

  //  [adaptor impl] QString QMediaContainerControl::containerDescription(const QString &formatMimeType)
  QString cbs_containerDescription_c2025_0(const QString &formatMimeType) const
  {
    __SUPPRESS_UNUSED_WARNING (formatMimeType);
    throw qt_gsi::AbstractMethodCalledException("containerDescription");
  }

  virtual QString containerDescription(const QString &formatMimeType) const
  {
    if (cb_containerDescription_c2025_0.can_issue()) {
      return cb_containerDescription_c2025_0.issue<QMediaContainerControl_Adaptor, QString, const QString &>(&QMediaContainerControl_Adaptor::cbs_containerDescription_c2025_0, formatMimeType);
    } else {
      throw qt_gsi::AbstractMethodCalledException("containerDescription");
    }
  }

  //  [adaptor impl] QString QMediaContainerControl::containerFormat()
  QString cbs_containerFormat_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("containerFormat");
  }

  virtual QString containerFormat() const
  {
    if (cb_containerFormat_c0_0.can_issue()) {
      return cb_containerFormat_c0_0.issue<QMediaContainerControl_Adaptor, QString>(&QMediaContainerControl_Adaptor::cbs_containerFormat_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("containerFormat");
    }
  }

  //  [emitter impl] void QMediaContainerControl::destroyed(QObject *)
  void emitter_QMediaContainerControl_destroyed_1302(QObject *arg1)
  {
    emit QMediaContainerControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QMediaContainerControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QMediaContainerControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaContainerControl_Adaptor, bool, QEvent *>(&QMediaContainerControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QMediaContainerControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QMediaContainerControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QMediaContainerControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaContainerControl_Adaptor, bool, QObject *, QEvent *>(&QMediaContainerControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QMediaContainerControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QMediaContainerControl::setContainerFormat(const QString &format)
  void cbs_setContainerFormat_2025_0(const QString &format)
  {
    __SUPPRESS_UNUSED_WARNING (format);
    throw qt_gsi::AbstractMethodCalledException("setContainerFormat");
  }

  virtual void setContainerFormat(const QString &format)
  {
    if (cb_setContainerFormat_2025_0.can_issue()) {
      cb_setContainerFormat_2025_0.issue<QMediaContainerControl_Adaptor, const QString &>(&QMediaContainerControl_Adaptor::cbs_setContainerFormat_2025_0, format);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setContainerFormat");
    }
  }

  //  [adaptor impl] QStringList QMediaContainerControl::supportedContainers()
  QStringList cbs_supportedContainers_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedContainers");
  }

  virtual QStringList supportedContainers() const
  {
    if (cb_supportedContainers_c0_0.can_issue()) {
      return cb_supportedContainers_c0_0.issue<QMediaContainerControl_Adaptor, QStringList>(&QMediaContainerControl_Adaptor::cbs_supportedContainers_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedContainers");
    }
  }

  //  [adaptor impl] void QMediaContainerControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QMediaContainerControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaContainerControl_Adaptor, QChildEvent *>(&QMediaContainerControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QMediaContainerControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaContainerControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QMediaContainerControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaContainerControl_Adaptor, QEvent *>(&QMediaContainerControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QMediaContainerControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaContainerControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaContainerControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaContainerControl_Adaptor, const QMetaMethod &>(&QMediaContainerControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaContainerControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaContainerControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QMediaContainerControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaContainerControl_Adaptor, QTimerEvent *>(&QMediaContainerControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QMediaContainerControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_containerDescription_c2025_0;
  gsi::Callback cb_containerFormat_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_setContainerFormat_2025_0;
  gsi::Callback cb_supportedContainers_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaContainerControl_Adaptor::~QMediaContainerControl_Adaptor() { }

// void QMediaContainerControl::childEvent(QChildEvent *)

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
  ((QMediaContainerControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QString QMediaContainerControl::containerDescription(const QString &formatMimeType)

static void _init_cbs_containerDescription_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("formatMimeType");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_containerDescription_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QMediaContainerControl_Adaptor *)cls)->cbs_containerDescription_c2025_0 (arg1));
}

static void _set_callback_cbs_containerDescription_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_containerDescription_c2025_0 = cb;
}


// QString QMediaContainerControl::containerFormat()

static void _init_cbs_containerFormat_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_containerFormat_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMediaContainerControl_Adaptor *)cls)->cbs_containerFormat_c0_0 ());
}

static void _set_callback_cbs_containerFormat_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_containerFormat_c0_0 = cb;
}


// void QMediaContainerControl::customEvent(QEvent *)

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
  ((QMediaContainerControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QMediaContainerControl::destroyed(QObject *)

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
  ((QMediaContainerControl_Adaptor *)cls)->emitter_QMediaContainerControl_destroyed_1302 (arg1);
}


// void QMediaContainerControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QMediaContainerControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaContainerControl::event(QEvent *)

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
  ret.write<bool > ((bool)((QMediaContainerControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaContainerControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QMediaContainerControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QMediaContainerControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QMediaContainerControl_Adaptor *)cls)->fp_QMediaContainerControl_isSignalConnected_c2394 (arg1));
}


// exposed int QMediaContainerControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QMediaContainerControl_Adaptor *)cls)->fp_QMediaContainerControl_receivers_c1731 (arg1));
}


// exposed QObject *QMediaContainerControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaContainerControl_Adaptor *)cls)->fp_QMediaContainerControl_sender_c0 ());
}


// exposed int QMediaContainerControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaContainerControl_Adaptor *)cls)->fp_QMediaContainerControl_senderSignalIndex_c0 ());
}


// void QMediaContainerControl::setContainerFormat(const QString &format)

static void _init_cbs_setContainerFormat_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setContainerFormat_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaContainerControl_Adaptor *)cls)->cbs_setContainerFormat_2025_0 (arg1);
}

static void _set_callback_cbs_setContainerFormat_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_setContainerFormat_2025_0 = cb;
}


// QStringList QMediaContainerControl::supportedContainers()

static void _init_cbs_supportedContainers_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_supportedContainers_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMediaContainerControl_Adaptor *)cls)->cbs_supportedContainers_c0_0 ());
}

static void _set_callback_cbs_supportedContainers_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_supportedContainers_c0_0 = cb;
}


// void QMediaContainerControl::timerEvent(QTimerEvent *)

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
  ((QMediaContainerControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaContainerControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaContainerControl> &qtdecl_QMediaContainerControl ();

static gsi::Methods methods_QMediaContainerControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaContainerControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("containerDescription", "@hide", true, &_init_cbs_containerDescription_c2025_0, &_call_cbs_containerDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("containerDescription", "@brief Virtual method QString QMediaContainerControl::containerDescription(const QString &formatMimeType)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_containerDescription_c2025_0, &_call_cbs_containerDescription_c2025_0, &_set_callback_cbs_containerDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("containerFormat", "@hide", true, &_init_cbs_containerFormat_c0_0, &_call_cbs_containerFormat_c0_0);
  methods += new qt_gsi::GenericMethod ("containerFormat", "@brief Virtual method QString QMediaContainerControl::containerFormat()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_containerFormat_c0_0, &_call_cbs_containerFormat_c0_0, &_set_callback_cbs_containerFormat_c0_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaContainerControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QMediaContainerControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaContainerControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaContainerControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaContainerControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaContainerControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaContainerControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaContainerControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaContainerControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setContainerFormat", "@hide", false, &_init_cbs_setContainerFormat_2025_0, &_call_cbs_setContainerFormat_2025_0);
  methods += new qt_gsi::GenericMethod ("setContainerFormat", "@brief Virtual method void QMediaContainerControl::setContainerFormat(const QString &format)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setContainerFormat_2025_0, &_call_cbs_setContainerFormat_2025_0, &_set_callback_cbs_setContainerFormat_2025_0);
  methods += new qt_gsi::GenericMethod ("supportedContainers", "@hide", true, &_init_cbs_supportedContainers_c0_0, &_call_cbs_supportedContainers_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedContainers", "@brief Virtual method QStringList QMediaContainerControl::supportedContainers()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedContainers_c0_0, &_call_cbs_supportedContainers_c0_0, &_set_callback_cbs_supportedContainers_c0_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaContainerControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMediaContainerControl_Adaptor> decl_QMediaContainerControl_Adaptor (qtdecl_QMediaContainerControl (), "QMediaContainerControl",
  methods_QMediaContainerControl_Adaptor (),
  "@qt\n@brief Binding of QMediaContainerControl");

}

