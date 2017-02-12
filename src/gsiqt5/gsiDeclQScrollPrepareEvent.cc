
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
*  @file gsiDeclQScrollPrepareEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QScrollPrepareEvent>
#include <QEvent>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QScrollPrepareEvent

// QPointF QScrollPrepareEvent::contentPos()


static void _init_f_contentPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_contentPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QScrollPrepareEvent *)cls)->contentPos ());
}


// QRectF QScrollPrepareEvent::contentPosRange()


static void _init_f_contentPosRange_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_contentPosRange_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QScrollPrepareEvent *)cls)->contentPosRange ());
}


// void QScrollPrepareEvent::setContentPos(const QPointF &pos)


static void _init_f_setContentPos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setContentPos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QScrollPrepareEvent *)cls)->setContentPos (arg1);
}


// void QScrollPrepareEvent::setContentPosRange(const QRectF &rect)


static void _init_f_setContentPosRange_1862 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rect");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setContentPosRange_1862 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = args.read<const QRectF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QScrollPrepareEvent *)cls)->setContentPosRange (arg1);
}


// void QScrollPrepareEvent::setViewportSize(const QSizeF &size)


static void _init_f_setViewportSize_1875 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSizeF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setViewportSize_1875 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizeF &arg1 = args.read<const QSizeF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QScrollPrepareEvent *)cls)->setViewportSize (arg1);
}


// QPointF QScrollPrepareEvent::startPos()


static void _init_f_startPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_startPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QScrollPrepareEvent *)cls)->startPos ());
}


// QSizeF QScrollPrepareEvent::viewportSize()


static void _init_f_viewportSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSizeF > ();
}

static void _call_f_viewportSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSizeF > ((QSizeF)((QScrollPrepareEvent *)cls)->viewportSize ());
}


namespace gsi
{

static gsi::Methods methods_QScrollPrepareEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":contentPos", "@brief Method QPointF QScrollPrepareEvent::contentPos()\n", true, &_init_f_contentPos_c0, &_call_f_contentPos_c0);
  methods += new qt_gsi::GenericMethod (":contentPosRange", "@brief Method QRectF QScrollPrepareEvent::contentPosRange()\n", true, &_init_f_contentPosRange_c0, &_call_f_contentPosRange_c0);
  methods += new qt_gsi::GenericMethod ("setContentPos|contentPos=", "@brief Method void QScrollPrepareEvent::setContentPos(const QPointF &pos)\n", false, &_init_f_setContentPos_1986, &_call_f_setContentPos_1986);
  methods += new qt_gsi::GenericMethod ("setContentPosRange|contentPosRange=", "@brief Method void QScrollPrepareEvent::setContentPosRange(const QRectF &rect)\n", false, &_init_f_setContentPosRange_1862, &_call_f_setContentPosRange_1862);
  methods += new qt_gsi::GenericMethod ("setViewportSize|viewportSize=", "@brief Method void QScrollPrepareEvent::setViewportSize(const QSizeF &size)\n", false, &_init_f_setViewportSize_1875, &_call_f_setViewportSize_1875);
  methods += new qt_gsi::GenericMethod ("startPos", "@brief Method QPointF QScrollPrepareEvent::startPos()\n", true, &_init_f_startPos_c0, &_call_f_startPos_c0);
  methods += new qt_gsi::GenericMethod (":viewportSize", "@brief Method QSizeF QScrollPrepareEvent::viewportSize()\n", true, &_init_f_viewportSize_c0, &_call_f_viewportSize_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QScrollPrepareEvent> decl_QScrollPrepareEvent (qtdecl_QEvent (), "QScrollPrepareEvent_Native",
  methods_QScrollPrepareEvent (),
  "@hide\n@alias QScrollPrepareEvent");

GSIQT_PUBLIC gsi::Class<QScrollPrepareEvent> &qtdecl_QScrollPrepareEvent () { return decl_QScrollPrepareEvent; }

}


class QScrollPrepareEvent_Adaptor : public QScrollPrepareEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QScrollPrepareEvent_Adaptor();

  //  [adaptor ctor] QScrollPrepareEvent::QScrollPrepareEvent(const QPointF &startPos)
  QScrollPrepareEvent_Adaptor(const QPointF &startPos) : QScrollPrepareEvent(startPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QScrollPrepareEvent_Adaptor::~QScrollPrepareEvent_Adaptor() { }

//  Constructor QScrollPrepareEvent::QScrollPrepareEvent(const QPointF &startPos) (adaptor class)

static void _init_ctor_QScrollPrepareEvent_Adaptor_1986 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("startPos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return_new<QScrollPrepareEvent_Adaptor> ();
}

static void _call_ctor_QScrollPrepareEvent_Adaptor_1986 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  ret.write<QScrollPrepareEvent_Adaptor *> (new QScrollPrepareEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QScrollPrepareEvent> &qtdecl_QScrollPrepareEvent ();

static gsi::Methods methods_QScrollPrepareEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QScrollPrepareEvent::QScrollPrepareEvent(const QPointF &startPos)\nThis method creates an object of class QScrollPrepareEvent.", &_init_ctor_QScrollPrepareEvent_Adaptor_1986, &_call_ctor_QScrollPrepareEvent_Adaptor_1986);
  return methods;
}

gsi::Class<QScrollPrepareEvent_Adaptor> decl_QScrollPrepareEvent_Adaptor (qtdecl_QScrollPrepareEvent (), "QScrollPrepareEvent",
  methods_QScrollPrepareEvent_Adaptor (),
  "@qt\n@brief Binding of QScrollPrepareEvent");

}

