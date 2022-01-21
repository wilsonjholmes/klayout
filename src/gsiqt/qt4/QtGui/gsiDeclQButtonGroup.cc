
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
*  @file gsiDeclQButtonGroup.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QButtonGroup>
#include <QAbstractButton>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QButtonGroup

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QButtonGroup::staticMetaObject);
}


// void QButtonGroup::addButton(QAbstractButton *)


static void _init_f_addButton_2159 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAbstractButton * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addButton_2159 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QButtonGroup *)cls)->addButton (arg1);
}


// void QButtonGroup::addButton(QAbstractButton *, int id)


static void _init_f_addButton_2818 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAbstractButton * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("id");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_addButton_2818 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QButtonGroup *)cls)->addButton (arg1, arg2);
}


// QAbstractButton *QButtonGroup::button(int id)


static void _init_f_button_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QAbstractButton * > ();
}

static void _call_f_button_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QAbstractButton * > ((QAbstractButton *)((QButtonGroup *)cls)->button (arg1));
}


// QList<QAbstractButton*> QButtonGroup::buttons()


static void _init_f_buttons_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAbstractButton*> > ();
}

static void _call_f_buttons_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAbstractButton*> > ((QList<QAbstractButton*>)((QButtonGroup *)cls)->buttons ());
}


// QAbstractButton *QButtonGroup::checkedButton()


static void _init_f_checkedButton_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractButton * > ();
}

static void _call_f_checkedButton_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractButton * > ((QAbstractButton *)((QButtonGroup *)cls)->checkedButton ());
}


// int QButtonGroup::checkedId()


static void _init_f_checkedId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_checkedId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QButtonGroup *)cls)->checkedId ());
}


// bool QButtonGroup::exclusive()


static void _init_f_exclusive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_exclusive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QButtonGroup *)cls)->exclusive ());
}


// int QButtonGroup::id(QAbstractButton *button)


static void _init_f_id_c2159 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("button");
  decl->add_arg<QAbstractButton * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_id_c2159 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  ret.write<int > ((int)((QButtonGroup *)cls)->id (arg1));
}


// void QButtonGroup::removeButton(QAbstractButton *)


static void _init_f_removeButton_2159 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAbstractButton * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeButton_2159 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QButtonGroup *)cls)->removeButton (arg1);
}


// void QButtonGroup::setExclusive(bool)


static void _init_f_setExclusive_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setExclusive_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QButtonGroup *)cls)->setExclusive (arg1);
}


// void QButtonGroup::setId(QAbstractButton *button, int id)


static void _init_f_setId_2818 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("button");
  decl->add_arg<QAbstractButton * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("id");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setId_2818 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QButtonGroup *)cls)->setId (arg1, arg2);
}


// static QString QButtonGroup::tr(const char *s, const char *c)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QButtonGroup::tr (arg1, arg2));
}


// static QString QButtonGroup::tr(const char *s, const char *c, int n)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QButtonGroup::tr (arg1, arg2, arg3));
}


// static QString QButtonGroup::trUtf8(const char *s, const char *c)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QButtonGroup::trUtf8 (arg1, arg2));
}


// static QString QButtonGroup::trUtf8(const char *s, const char *c, int n)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QButtonGroup::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QButtonGroup () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("addButton", "@brief Method void QButtonGroup::addButton(QAbstractButton *)\n", false, &_init_f_addButton_2159, &_call_f_addButton_2159);
  methods += new qt_gsi::GenericMethod ("addButton", "@brief Method void QButtonGroup::addButton(QAbstractButton *, int id)\n", false, &_init_f_addButton_2818, &_call_f_addButton_2818);
  methods += new qt_gsi::GenericMethod ("button", "@brief Method QAbstractButton *QButtonGroup::button(int id)\n", true, &_init_f_button_c767, &_call_f_button_c767);
  methods += new qt_gsi::GenericMethod ("buttons", "@brief Method QList<QAbstractButton*> QButtonGroup::buttons()\n", true, &_init_f_buttons_c0, &_call_f_buttons_c0);
  methods += new qt_gsi::GenericMethod ("checkedButton", "@brief Method QAbstractButton *QButtonGroup::checkedButton()\n", true, &_init_f_checkedButton_c0, &_call_f_checkedButton_c0);
  methods += new qt_gsi::GenericMethod ("checkedId", "@brief Method int QButtonGroup::checkedId()\n", true, &_init_f_checkedId_c0, &_call_f_checkedId_c0);
  methods += new qt_gsi::GenericMethod (":exclusive", "@brief Method bool QButtonGroup::exclusive()\n", true, &_init_f_exclusive_c0, &_call_f_exclusive_c0);
  methods += new qt_gsi::GenericMethod ("id", "@brief Method int QButtonGroup::id(QAbstractButton *button)\n", true, &_init_f_id_c2159, &_call_f_id_c2159);
  methods += new qt_gsi::GenericMethod ("removeButton", "@brief Method void QButtonGroup::removeButton(QAbstractButton *)\n", false, &_init_f_removeButton_2159, &_call_f_removeButton_2159);
  methods += new qt_gsi::GenericMethod ("setExclusive|exclusive=", "@brief Method void QButtonGroup::setExclusive(bool)\n", false, &_init_f_setExclusive_864, &_call_f_setExclusive_864);
  methods += new qt_gsi::GenericMethod ("setId", "@brief Method void QButtonGroup::setId(QAbstractButton *button, int id)\n", false, &_init_f_setId_2818, &_call_f_setId_2818);
  methods += gsi::qt_signal<QAbstractButton * > ("buttonClicked(QAbstractButton *)", "buttonClicked_qab", gsi::arg("arg1"), "@brief Signal declaration for QButtonGroup::buttonClicked(QAbstractButton *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int > ("buttonClicked(int)", "buttonClicked", gsi::arg("arg1"), "@brief Signal declaration for QButtonGroup::buttonClicked(int)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QAbstractButton * > ("buttonPressed(QAbstractButton *)", "buttonPressed_qab", gsi::arg("arg1"), "@brief Signal declaration for QButtonGroup::buttonPressed(QAbstractButton *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int > ("buttonPressed(int)", "buttonPressed", gsi::arg("arg1"), "@brief Signal declaration for QButtonGroup::buttonPressed(int)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QAbstractButton * > ("buttonReleased(QAbstractButton *)", "buttonReleased_qab", gsi::arg("arg1"), "@brief Signal declaration for QButtonGroup::buttonReleased(QAbstractButton *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int > ("buttonReleased(int)", "buttonReleased", gsi::arg("arg1"), "@brief Signal declaration for QButtonGroup::buttonReleased(int)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QButtonGroup::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QButtonGroup::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QButtonGroup::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QButtonGroup::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QButtonGroup::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QButtonGroup> decl_QButtonGroup (qtdecl_QObject (), "QtGui", "QButtonGroup_Native",
  methods_QButtonGroup (),
  "@hide\n@alias QButtonGroup");

GSI_QTGUI_PUBLIC gsi::Class<QButtonGroup> &qtdecl_QButtonGroup () { return decl_QButtonGroup; }

}


class QButtonGroup_Adaptor : public QButtonGroup, public qt_gsi::QtObjectBase
{
public:

  virtual ~QButtonGroup_Adaptor();

  //  [adaptor ctor] QButtonGroup::QButtonGroup(QObject *parent)
  QButtonGroup_Adaptor() : QButtonGroup()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QButtonGroup::QButtonGroup(QObject *parent)
  QButtonGroup_Adaptor(QObject *parent) : QButtonGroup(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QButtonGroup::receivers(const char *signal)
  int fp_QButtonGroup_receivers_c1731 (const char *signal) const {
    return QButtonGroup::receivers(signal);
  }

  //  [expose] QObject *QButtonGroup::sender()
  QObject * fp_QButtonGroup_sender_c0 () const {
    return QButtonGroup::sender();
  }

  //  [adaptor impl] bool QButtonGroup::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QButtonGroup::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QButtonGroup_Adaptor, bool, QEvent *>(&QButtonGroup_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QButtonGroup::event(arg1);
    }
  }

  //  [adaptor impl] bool QButtonGroup::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QButtonGroup::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QButtonGroup_Adaptor, bool, QObject *, QEvent *>(&QButtonGroup_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QButtonGroup::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QButtonGroup::buttonClicked(QAbstractButton *)
  void emitter_QButtonGroup_buttonClicked_2159(QAbstractButton *arg1)
  {
    emit QButtonGroup::buttonClicked(arg1);
  }

  //  [emitter impl] void QButtonGroup::buttonClicked(int)
  void emitter_QButtonGroup_buttonClicked_767(int arg1)
  {
    emit QButtonGroup::buttonClicked(arg1);
  }

  //  [emitter impl] void QButtonGroup::buttonPressed(QAbstractButton *)
  void emitter_QButtonGroup_buttonPressed_2159(QAbstractButton *arg1)
  {
    emit QButtonGroup::buttonPressed(arg1);
  }

  //  [emitter impl] void QButtonGroup::buttonPressed(int)
  void emitter_QButtonGroup_buttonPressed_767(int arg1)
  {
    emit QButtonGroup::buttonPressed(arg1);
  }

  //  [emitter impl] void QButtonGroup::buttonReleased(QAbstractButton *)
  void emitter_QButtonGroup_buttonReleased_2159(QAbstractButton *arg1)
  {
    emit QButtonGroup::buttonReleased(arg1);
  }

  //  [emitter impl] void QButtonGroup::buttonReleased(int)
  void emitter_QButtonGroup_buttonReleased_767(int arg1)
  {
    emit QButtonGroup::buttonReleased(arg1);
  }

  //  [adaptor impl] void QButtonGroup::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QButtonGroup::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QButtonGroup_Adaptor, QChildEvent *>(&QButtonGroup_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QButtonGroup::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QButtonGroup::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QButtonGroup::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QButtonGroup_Adaptor, QEvent *>(&QButtonGroup_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QButtonGroup::customEvent(arg1);
    }
  }

  //  [emitter impl] void QButtonGroup::destroyed(QObject *)
  void emitter_QButtonGroup_destroyed_1302(QObject *arg1)
  {
    emit QButtonGroup::destroyed(arg1);
  }

  //  [adaptor impl] void QButtonGroup::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QButtonGroup::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QButtonGroup_Adaptor, const char *>(&QButtonGroup_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QButtonGroup::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QButtonGroup::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QButtonGroup::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QButtonGroup_Adaptor, QTimerEvent *>(&QButtonGroup_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QButtonGroup::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QButtonGroup_Adaptor::~QButtonGroup_Adaptor() { }

//  Constructor QButtonGroup::QButtonGroup(QObject *parent) (adaptor class)

static void _init_ctor_QButtonGroup_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QButtonGroup_Adaptor> ();
}

static void _call_ctor_QButtonGroup_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QButtonGroup_Adaptor *> (new QButtonGroup_Adaptor (arg1));
}


// emitter void QButtonGroup::buttonClicked(QAbstractButton *)

static void _init_emitter_buttonClicked_2159 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAbstractButton * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_buttonClicked_2159 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  ((QButtonGroup_Adaptor *)cls)->emitter_QButtonGroup_buttonClicked_2159 (arg1);
}


// emitter void QButtonGroup::buttonClicked(int)

static void _init_emitter_buttonClicked_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_buttonClicked_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ((QButtonGroup_Adaptor *)cls)->emitter_QButtonGroup_buttonClicked_767 (arg1);
}


// emitter void QButtonGroup::buttonPressed(QAbstractButton *)

static void _init_emitter_buttonPressed_2159 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAbstractButton * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_buttonPressed_2159 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  ((QButtonGroup_Adaptor *)cls)->emitter_QButtonGroup_buttonPressed_2159 (arg1);
}


// emitter void QButtonGroup::buttonPressed(int)

static void _init_emitter_buttonPressed_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_buttonPressed_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ((QButtonGroup_Adaptor *)cls)->emitter_QButtonGroup_buttonPressed_767 (arg1);
}


// emitter void QButtonGroup::buttonReleased(QAbstractButton *)

static void _init_emitter_buttonReleased_2159 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAbstractButton * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_buttonReleased_2159 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractButton *arg1 = gsi::arg_reader<QAbstractButton * >() (args, heap);
  ((QButtonGroup_Adaptor *)cls)->emitter_QButtonGroup_buttonReleased_2159 (arg1);
}


// emitter void QButtonGroup::buttonReleased(int)

static void _init_emitter_buttonReleased_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_buttonReleased_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ((QButtonGroup_Adaptor *)cls)->emitter_QButtonGroup_buttonReleased_767 (arg1);
}


// void QButtonGroup::childEvent(QChildEvent *)

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
  ((QButtonGroup_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QButtonGroup_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QButtonGroup::customEvent(QEvent *)

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
  ((QButtonGroup_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QButtonGroup_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QButtonGroup::destroyed(QObject *)

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
  ((QButtonGroup_Adaptor *)cls)->emitter_QButtonGroup_destroyed_1302 (arg1);
}


// void QButtonGroup::disconnectNotify(const char *signal)

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
  ((QButtonGroup_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QButtonGroup_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QButtonGroup::event(QEvent *)

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
  ret.write<bool > ((bool)((QButtonGroup_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QButtonGroup_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QButtonGroup::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QButtonGroup_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QButtonGroup_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QButtonGroup::receivers(const char *signal)

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
  ret.write<int > ((int)((QButtonGroup_Adaptor *)cls)->fp_QButtonGroup_receivers_c1731 (arg1));
}


// exposed QObject *QButtonGroup::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QButtonGroup_Adaptor *)cls)->fp_QButtonGroup_sender_c0 ());
}


// void QButtonGroup::timerEvent(QTimerEvent *)

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
  ((QButtonGroup_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QButtonGroup_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QButtonGroup> &qtdecl_QButtonGroup ();

static gsi::Methods methods_QButtonGroup_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QButtonGroup::QButtonGroup(QObject *parent)\nThis method creates an object of class QButtonGroup.", &_init_ctor_QButtonGroup_Adaptor_1302, &_call_ctor_QButtonGroup_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("emit_buttonClicked_qab", "@brief Emitter for signal void QButtonGroup::buttonClicked(QAbstractButton *)\nCall this method to emit this signal.", false, &_init_emitter_buttonClicked_2159, &_call_emitter_buttonClicked_2159);
  methods += new qt_gsi::GenericMethod ("emit_buttonClicked", "@brief Emitter for signal void QButtonGroup::buttonClicked(int)\nCall this method to emit this signal.", false, &_init_emitter_buttonClicked_767, &_call_emitter_buttonClicked_767);
  methods += new qt_gsi::GenericMethod ("emit_buttonPressed_qab", "@brief Emitter for signal void QButtonGroup::buttonPressed(QAbstractButton *)\nCall this method to emit this signal.", false, &_init_emitter_buttonPressed_2159, &_call_emitter_buttonPressed_2159);
  methods += new qt_gsi::GenericMethod ("emit_buttonPressed", "@brief Emitter for signal void QButtonGroup::buttonPressed(int)\nCall this method to emit this signal.", false, &_init_emitter_buttonPressed_767, &_call_emitter_buttonPressed_767);
  methods += new qt_gsi::GenericMethod ("emit_buttonReleased_qab", "@brief Emitter for signal void QButtonGroup::buttonReleased(QAbstractButton *)\nCall this method to emit this signal.", false, &_init_emitter_buttonReleased_2159, &_call_emitter_buttonReleased_2159);
  methods += new qt_gsi::GenericMethod ("emit_buttonReleased", "@brief Emitter for signal void QButtonGroup::buttonReleased(int)\nCall this method to emit this signal.", false, &_init_emitter_buttonReleased_767, &_call_emitter_buttonReleased_767);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QButtonGroup::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QButtonGroup::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QButtonGroup::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QButtonGroup::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QButtonGroup::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QButtonGroup::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QButtonGroup::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QButtonGroup::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QButtonGroup::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QButtonGroup_Adaptor> decl_QButtonGroup_Adaptor (qtdecl_QButtonGroup (), "QtGui", "QButtonGroup",
  methods_QButtonGroup_Adaptor (),
  "@qt\n@brief Binding of QButtonGroup");

}

