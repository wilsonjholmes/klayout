
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
*  @file gsiDeclQExposeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QExposeEvent>
#include <QEvent>
#include <QRegion>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QExposeEvent

// const QRegion &QExposeEvent::region()


static void _init_f_region_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QRegion & > ();
}

static void _call_f_region_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QRegion & > ((const QRegion &)((QExposeEvent *)cls)->region ());
}


namespace gsi
{

static gsi::Methods methods_QExposeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("region", "@brief Method const QRegion &QExposeEvent::region()\n", true, &_init_f_region_c0, &_call_f_region_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QExposeEvent> decl_QExposeEvent (qtdecl_QEvent (), "QtGui", "QExposeEvent_Native",
  methods_QExposeEvent (),
  "@hide\n@alias QExposeEvent");

GSI_QTGUI_PUBLIC gsi::Class<QExposeEvent> &qtdecl_QExposeEvent () { return decl_QExposeEvent; }

}


class QExposeEvent_Adaptor : public QExposeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QExposeEvent_Adaptor();

  //  [adaptor ctor] QExposeEvent::QExposeEvent(const QRegion &rgn)
  QExposeEvent_Adaptor(const QRegion &rgn) : QExposeEvent(rgn)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QExposeEvent_Adaptor::~QExposeEvent_Adaptor() { }

//  Constructor QExposeEvent::QExposeEvent(const QRegion &rgn) (adaptor class)

static void _init_ctor_QExposeEvent_Adaptor_2006 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rgn");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return_new<QExposeEvent_Adaptor> ();
}

static void _call_ctor_QExposeEvent_Adaptor_2006 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QExposeEvent_Adaptor *> (new QExposeEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QExposeEvent> &qtdecl_QExposeEvent ();

static gsi::Methods methods_QExposeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QExposeEvent::QExposeEvent(const QRegion &rgn)\nThis method creates an object of class QExposeEvent.", &_init_ctor_QExposeEvent_Adaptor_2006, &_call_ctor_QExposeEvent_Adaptor_2006);
  return methods;
}

gsi::Class<QExposeEvent_Adaptor> decl_QExposeEvent_Adaptor (qtdecl_QExposeEvent (), "QtGui", "QExposeEvent",
  methods_QExposeEvent_Adaptor (),
  "@qt\n@brief Binding of QExposeEvent");

}

