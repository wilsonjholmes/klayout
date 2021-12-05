
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
*  @file gsiDeclQFileSelector.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFileSelector>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFileSelector

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QFileSelector::staticMetaObject);
}


// QStringList QFileSelector::allSelectors()


static void _init_f_allSelectors_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_allSelectors_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QFileSelector *)cls)->allSelectors ());
}


// QStringList QFileSelector::extraSelectors()


static void _init_f_extraSelectors_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_extraSelectors_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QFileSelector *)cls)->extraSelectors ());
}


// QString QFileSelector::select(const QString &filePath)


static void _init_f_select_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filePath");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_select_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QFileSelector *)cls)->select (arg1));
}


// QUrl QFileSelector::select(const QUrl &filePath)


static void _init_f_select_c1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filePath");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<QUrl > ();
}

static void _call_f_select_c1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = gsi::arg_reader<const QUrl & >() (args, heap);
  ret.write<QUrl > ((QUrl)((QFileSelector *)cls)->select (arg1));
}


// void QFileSelector::setExtraSelectors(const QStringList &list)


static void _init_f_setExtraSelectors_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("list");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setExtraSelectors_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileSelector *)cls)->setExtraSelectors (arg1);
}


// static QString QFileSelector::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QFileSelector::tr (arg1, arg2, arg3));
}


// static QString QFileSelector::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QFileSelector::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QFileSelector () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("allSelectors", "@brief Method QStringList QFileSelector::allSelectors()\n", true, &_init_f_allSelectors_c0, &_call_f_allSelectors_c0);
  methods += new qt_gsi::GenericMethod (":extraSelectors", "@brief Method QStringList QFileSelector::extraSelectors()\n", true, &_init_f_extraSelectors_c0, &_call_f_extraSelectors_c0);
  methods += new qt_gsi::GenericMethod ("select", "@brief Method QString QFileSelector::select(const QString &filePath)\n", true, &_init_f_select_c2025, &_call_f_select_c2025);
  methods += new qt_gsi::GenericMethod ("select", "@brief Method QUrl QFileSelector::select(const QUrl &filePath)\n", true, &_init_f_select_c1701, &_call_f_select_c1701);
  methods += new qt_gsi::GenericMethod ("setExtraSelectors|extraSelectors=", "@brief Method void QFileSelector::setExtraSelectors(const QStringList &list)\n", false, &_init_f_setExtraSelectors_2437, &_call_f_setExtraSelectors_2437);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QFileSelector::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QFileSelector::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QFileSelector::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QFileSelector::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QFileSelector> decl_QFileSelector (qtdecl_QObject (), "QtCore", "QFileSelector_Native",
  methods_QFileSelector (),
  "@hide\n@alias QFileSelector");

GSI_QTCORE_PUBLIC gsi::Class<QFileSelector> &qtdecl_QFileSelector () { return decl_QFileSelector; }

}


class QFileSelector_Adaptor : public QFileSelector, public qt_gsi::QtObjectBase
{
public:

  virtual ~QFileSelector_Adaptor();

  //  [adaptor ctor] QFileSelector::QFileSelector(QObject *parent)
  QFileSelector_Adaptor() : QFileSelector()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QFileSelector::QFileSelector(QObject *parent)
  QFileSelector_Adaptor(QObject *parent) : QFileSelector(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QFileSelector::isSignalConnected(const QMetaMethod &signal)
  bool fp_QFileSelector_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QFileSelector::isSignalConnected(signal);
  }

  //  [expose] int QFileSelector::receivers(const char *signal)
  int fp_QFileSelector_receivers_c1731 (const char *signal) const {
    return QFileSelector::receivers(signal);
  }

  //  [expose] QObject *QFileSelector::sender()
  QObject * fp_QFileSelector_sender_c0 () const {
    return QFileSelector::sender();
  }

  //  [expose] int QFileSelector::senderSignalIndex()
  int fp_QFileSelector_senderSignalIndex_c0 () const {
    return QFileSelector::senderSignalIndex();
  }

  //  [emitter impl] void QFileSelector::destroyed(QObject *)
  void emitter_QFileSelector_destroyed_1302(QObject *arg1)
  {
    emit QFileSelector::destroyed(arg1);
  }

  //  [adaptor impl] bool QFileSelector::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QFileSelector::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QFileSelector_Adaptor, bool, QEvent *>(&QFileSelector_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QFileSelector::event(arg1);
    }
  }

  //  [adaptor impl] bool QFileSelector::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QFileSelector::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QFileSelector_Adaptor, bool, QObject *, QEvent *>(&QFileSelector_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QFileSelector::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QFileSelector::objectNameChanged(const QString &objectName)
  void emitter_QFileSelector_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QFileSelector::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QFileSelector::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QFileSelector::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QFileSelector_Adaptor, QChildEvent *>(&QFileSelector_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QFileSelector::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QFileSelector::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QFileSelector::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QFileSelector_Adaptor, QEvent *>(&QFileSelector_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QFileSelector::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QFileSelector::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QFileSelector::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QFileSelector_Adaptor, const QMetaMethod &>(&QFileSelector_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QFileSelector::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QFileSelector::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QFileSelector::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QFileSelector_Adaptor, QTimerEvent *>(&QFileSelector_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QFileSelector::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QFileSelector_Adaptor::~QFileSelector_Adaptor() { }

//  Constructor QFileSelector::QFileSelector(QObject *parent) (adaptor class)

static void _init_ctor_QFileSelector_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QFileSelector_Adaptor> ();
}

static void _call_ctor_QFileSelector_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QFileSelector_Adaptor *> (new QFileSelector_Adaptor (arg1));
}


// void QFileSelector::childEvent(QChildEvent *)

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
  ((QFileSelector_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSelector_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QFileSelector::customEvent(QEvent *)

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
  ((QFileSelector_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSelector_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QFileSelector::destroyed(QObject *)

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
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QFileSelector_Adaptor *)cls)->emitter_QFileSelector_destroyed_1302 (arg1);
}


// void QFileSelector::disconnectNotify(const QMetaMethod &signal)

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
  ((QFileSelector_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSelector_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QFileSelector::event(QEvent *)

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
  ret.write<bool > ((bool)((QFileSelector_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSelector_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QFileSelector::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QFileSelector_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSelector_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QFileSelector::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QFileSelector_Adaptor *)cls)->fp_QFileSelector_isSignalConnected_c2394 (arg1));
}


// emitter void QFileSelector::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QFileSelector_Adaptor *)cls)->emitter_QFileSelector_objectNameChanged_4567 (arg1);
}


// exposed int QFileSelector::receivers(const char *signal)

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
  ret.write<int > ((int)((QFileSelector_Adaptor *)cls)->fp_QFileSelector_receivers_c1731 (arg1));
}


// exposed QObject *QFileSelector::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QFileSelector_Adaptor *)cls)->fp_QFileSelector_sender_c0 ());
}


// exposed int QFileSelector::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFileSelector_Adaptor *)cls)->fp_QFileSelector_senderSignalIndex_c0 ());
}


// void QFileSelector::timerEvent(QTimerEvent *)

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
  ((QFileSelector_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSelector_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QFileSelector> &qtdecl_QFileSelector ();

static gsi::Methods methods_QFileSelector_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileSelector::QFileSelector(QObject *parent)\nThis method creates an object of class QFileSelector.", &_init_ctor_QFileSelector_Adaptor_1302, &_call_ctor_QFileSelector_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QFileSelector::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QFileSelector::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QFileSelector::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QFileSelector::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QFileSelector::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QFileSelector::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QFileSelector::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QFileSelector::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QFileSelector::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QFileSelector::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QFileSelector::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QFileSelector::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QFileSelector_Adaptor> decl_QFileSelector_Adaptor (qtdecl_QFileSelector (), "QtCore", "QFileSelector",
  methods_QFileSelector_Adaptor (),
  "@qt\n@brief Binding of QFileSelector");

}

