
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
*  @file gsiDeclQMetaDataReaderControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaDataReaderControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMetaDataReaderControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMetaDataReaderControl::staticMetaObject);
}


// QStringList QMetaDataReaderControl::availableMetaData()


static void _init_f_availableMetaData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_availableMetaData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMetaDataReaderControl *)cls)->availableMetaData ());
}


// bool QMetaDataReaderControl::isMetaDataAvailable()


static void _init_f_isMetaDataAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isMetaDataAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaDataReaderControl *)cls)->isMetaDataAvailable ());
}


// QVariant QMetaDataReaderControl::metaData(const QString &key)


static void _init_f_metaData_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_metaData_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QMetaDataReaderControl *)cls)->metaData (arg1));
}


// void QMetaDataReaderControl::metaDataAvailableChanged(bool available)


static void _init_f_metaDataAvailableChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("available");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_metaDataAvailableChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMetaDataReaderControl *)cls)->metaDataAvailableChanged (arg1);
}


// void QMetaDataReaderControl::metaDataChanged()


static void _init_f_metaDataChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_metaDataChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMetaDataReaderControl *)cls)->metaDataChanged ();
}


// void QMetaDataReaderControl::metaDataChanged(const QString &key, const QVariant &value)


static void _init_f_metaDataChanged_4036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_metaDataChanged_4036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMetaDataReaderControl *)cls)->metaDataChanged (arg1, arg2);
}


// static QString QMetaDataReaderControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMetaDataReaderControl::tr (arg1, arg2, arg3));
}


// static QString QMetaDataReaderControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMetaDataReaderControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMetaDataReaderControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("availableMetaData", "@brief Method QStringList QMetaDataReaderControl::availableMetaData()\n", true, &_init_f_availableMetaData_c0, &_call_f_availableMetaData_c0);
  methods += new qt_gsi::GenericMethod ("isMetaDataAvailable?", "@brief Method bool QMetaDataReaderControl::isMetaDataAvailable()\n", true, &_init_f_isMetaDataAvailable_c0, &_call_f_isMetaDataAvailable_c0);
  methods += new qt_gsi::GenericMethod ("metaData", "@brief Method QVariant QMetaDataReaderControl::metaData(const QString &key)\n", true, &_init_f_metaData_c2025, &_call_f_metaData_c2025);
  methods += new qt_gsi::GenericMethod ("metaDataAvailableChanged", "@brief Method void QMetaDataReaderControl::metaDataAvailableChanged(bool available)\n", false, &_init_f_metaDataAvailableChanged_864, &_call_f_metaDataAvailableChanged_864);
  methods += new qt_gsi::GenericMethod ("metaDataChanged", "@brief Method void QMetaDataReaderControl::metaDataChanged()\n", false, &_init_f_metaDataChanged_0, &_call_f_metaDataChanged_0);
  methods += new qt_gsi::GenericMethod ("metaDataChanged_kv", "@brief Method void QMetaDataReaderControl::metaDataChanged(const QString &key, const QVariant &value)\n", false, &_init_f_metaDataChanged_4036, &_call_f_metaDataChanged_4036);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMetaDataReaderControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMetaDataReaderControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QMetaDataReaderControl> decl_QMetaDataReaderControl (qtdecl_QMediaControl (), "QtMultimedia", "QMetaDataReaderControl_Native",
  methods_QMetaDataReaderControl (),
  "@hide\n@alias QMetaDataReaderControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMetaDataReaderControl> &qtdecl_QMetaDataReaderControl () { return decl_QMetaDataReaderControl; }

}


class QMetaDataReaderControl_Adaptor : public QMetaDataReaderControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMetaDataReaderControl_Adaptor();

  //  [adaptor ctor] QMetaDataReaderControl::QMetaDataReaderControl()
  QMetaDataReaderControl_Adaptor() : QMetaDataReaderControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QMetaDataReaderControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMetaDataReaderControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMetaDataReaderControl::isSignalConnected(signal);
  }

  //  [expose] int QMetaDataReaderControl::receivers(const char *signal)
  int fp_QMetaDataReaderControl_receivers_c1731 (const char *signal) const {
    return QMetaDataReaderControl::receivers(signal);
  }

  //  [expose] QObject *QMetaDataReaderControl::sender()
  QObject * fp_QMetaDataReaderControl_sender_c0 () const {
    return QMetaDataReaderControl::sender();
  }

  //  [expose] int QMetaDataReaderControl::senderSignalIndex()
  int fp_QMetaDataReaderControl_senderSignalIndex_c0 () const {
    return QMetaDataReaderControl::senderSignalIndex();
  }

  //  [adaptor impl] QStringList QMetaDataReaderControl::availableMetaData()
  QStringList cbs_availableMetaData_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("availableMetaData");
  }

  virtual QStringList availableMetaData() const
  {
    if (cb_availableMetaData_c0_0.can_issue()) {
      return cb_availableMetaData_c0_0.issue<QMetaDataReaderControl_Adaptor, QStringList>(&QMetaDataReaderControl_Adaptor::cbs_availableMetaData_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("availableMetaData");
    }
  }

  //  [adaptor impl] bool QMetaDataReaderControl::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QMetaDataReaderControl::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMetaDataReaderControl_Adaptor, bool, QEvent *>(&QMetaDataReaderControl_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QMetaDataReaderControl::event(_event);
    }
  }

  //  [adaptor impl] bool QMetaDataReaderControl::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QMetaDataReaderControl::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMetaDataReaderControl_Adaptor, bool, QObject *, QEvent *>(&QMetaDataReaderControl_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QMetaDataReaderControl::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] bool QMetaDataReaderControl::isMetaDataAvailable()
  bool cbs_isMetaDataAvailable_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("isMetaDataAvailable");
  }

  virtual bool isMetaDataAvailable() const
  {
    if (cb_isMetaDataAvailable_c0_0.can_issue()) {
      return cb_isMetaDataAvailable_c0_0.issue<QMetaDataReaderControl_Adaptor, bool>(&QMetaDataReaderControl_Adaptor::cbs_isMetaDataAvailable_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("isMetaDataAvailable");
    }
  }

  //  [adaptor impl] QVariant QMetaDataReaderControl::metaData(const QString &key)
  QVariant cbs_metaData_c2025_0(const QString &key) const
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("metaData");
  }

  virtual QVariant metaData(const QString &key) const
  {
    if (cb_metaData_c2025_0.can_issue()) {
      return cb_metaData_c2025_0.issue<QMetaDataReaderControl_Adaptor, QVariant, const QString &>(&QMetaDataReaderControl_Adaptor::cbs_metaData_c2025_0, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("metaData");
    }
  }

  //  [adaptor impl] void QMetaDataReaderControl::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QMetaDataReaderControl::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMetaDataReaderControl_Adaptor, QChildEvent *>(&QMetaDataReaderControl_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QMetaDataReaderControl::childEvent(event);
    }
  }

  //  [adaptor impl] void QMetaDataReaderControl::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QMetaDataReaderControl::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMetaDataReaderControl_Adaptor, QEvent *>(&QMetaDataReaderControl_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QMetaDataReaderControl::customEvent(event);
    }
  }

  //  [adaptor impl] void QMetaDataReaderControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMetaDataReaderControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMetaDataReaderControl_Adaptor, const QMetaMethod &>(&QMetaDataReaderControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMetaDataReaderControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMetaDataReaderControl::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QMetaDataReaderControl::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMetaDataReaderControl_Adaptor, QTimerEvent *>(&QMetaDataReaderControl_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QMetaDataReaderControl::timerEvent(event);
    }
  }

  gsi::Callback cb_availableMetaData_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_isMetaDataAvailable_c0_0;
  gsi::Callback cb_metaData_c2025_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMetaDataReaderControl_Adaptor::~QMetaDataReaderControl_Adaptor() { }

//  Constructor QMetaDataReaderControl::QMetaDataReaderControl() (adaptor class)

static void _init_ctor_QMetaDataReaderControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaDataReaderControl_Adaptor> ();
}

static void _call_ctor_QMetaDataReaderControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaDataReaderControl_Adaptor *> (new QMetaDataReaderControl_Adaptor ());
}


// QStringList QMetaDataReaderControl::availableMetaData()

static void _init_cbs_availableMetaData_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_availableMetaData_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMetaDataReaderControl_Adaptor *)cls)->cbs_availableMetaData_c0_0 ());
}

static void _set_callback_cbs_availableMetaData_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_availableMetaData_c0_0 = cb;
}


// void QMetaDataReaderControl::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMetaDataReaderControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QMetaDataReaderControl::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMetaDataReaderControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QMetaDataReaderControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QMetaDataReaderControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMetaDataReaderControl::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMetaDataReaderControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMetaDataReaderControl::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMetaDataReaderControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QMetaDataReaderControl::isMetaDataAvailable()

static void _init_cbs_isMetaDataAvailable_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isMetaDataAvailable_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaDataReaderControl_Adaptor *)cls)->cbs_isMetaDataAvailable_c0_0 ());
}

static void _set_callback_cbs_isMetaDataAvailable_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_isMetaDataAvailable_c0_0 = cb;
}


// exposed bool QMetaDataReaderControl::isSignalConnected(const QMetaMethod &signal)

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
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QMetaDataReaderControl_Adaptor *)cls)->fp_QMetaDataReaderControl_isSignalConnected_c2394 (arg1));
}


// QVariant QMetaDataReaderControl::metaData(const QString &key)

static void _init_cbs_metaData_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_cbs_metaData_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QVariant > ((QVariant)((QMetaDataReaderControl_Adaptor *)cls)->cbs_metaData_c2025_0 (arg1));
}

static void _set_callback_cbs_metaData_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_metaData_c2025_0 = cb;
}


// exposed int QMetaDataReaderControl::receivers(const char *signal)

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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaDataReaderControl_Adaptor *)cls)->fp_QMetaDataReaderControl_receivers_c1731 (arg1));
}


// exposed QObject *QMetaDataReaderControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMetaDataReaderControl_Adaptor *)cls)->fp_QMetaDataReaderControl_sender_c0 ());
}


// exposed int QMetaDataReaderControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaDataReaderControl_Adaptor *)cls)->fp_QMetaDataReaderControl_senderSignalIndex_c0 ());
}


// void QMetaDataReaderControl::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMetaDataReaderControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMetaDataReaderControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMetaDataReaderControl> &qtdecl_QMetaDataReaderControl ();

static gsi::Methods methods_QMetaDataReaderControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaDataReaderControl::QMetaDataReaderControl()\nThis method creates an object of class QMetaDataReaderControl.", &_init_ctor_QMetaDataReaderControl_Adaptor_0, &_call_ctor_QMetaDataReaderControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("availableMetaData", "@brief Virtual method QStringList QMetaDataReaderControl::availableMetaData()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_availableMetaData_c0_0, &_call_cbs_availableMetaData_c0_0);
  methods += new qt_gsi::GenericMethod ("availableMetaData", "@hide", true, &_init_cbs_availableMetaData_c0_0, &_call_cbs_availableMetaData_c0_0, &_set_callback_cbs_availableMetaData_c0_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMetaDataReaderControl::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMetaDataReaderControl::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMetaDataReaderControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMetaDataReaderControl::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMetaDataReaderControl::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("isMetaDataAvailable", "@brief Virtual method bool QMetaDataReaderControl::isMetaDataAvailable()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isMetaDataAvailable_c0_0, &_call_cbs_isMetaDataAvailable_c0_0);
  methods += new qt_gsi::GenericMethod ("isMetaDataAvailable", "@hide", true, &_init_cbs_isMetaDataAvailable_c0_0, &_call_cbs_isMetaDataAvailable_c0_0, &_set_callback_cbs_isMetaDataAvailable_c0_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMetaDataReaderControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("metaData", "@brief Virtual method QVariant QMetaDataReaderControl::metaData(const QString &key)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metaData_c2025_0, &_call_cbs_metaData_c2025_0);
  methods += new qt_gsi::GenericMethod ("metaData", "@hide", true, &_init_cbs_metaData_c2025_0, &_call_cbs_metaData_c2025_0, &_set_callback_cbs_metaData_c2025_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMetaDataReaderControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMetaDataReaderControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMetaDataReaderControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMetaDataReaderControl::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMetaDataReaderControl_Adaptor> decl_QMetaDataReaderControl_Adaptor (qtdecl_QMetaDataReaderControl (), "QtMultimedia", "QMetaDataReaderControl",
  methods_QMetaDataReaderControl_Adaptor (),
  "@qt\n@brief Binding of QMetaDataReaderControl");

}

