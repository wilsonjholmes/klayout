
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
*  @file gsiDeclQCalendar_YearMonthDay.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCalendar>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QCalendar::YearMonthDay

//  Constructor QCalendar::YearMonthDay::YearMonthDay()


static void _init_ctor_QCalendar_YearMonthDay_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCalendar::YearMonthDay> ();
}

static void _call_ctor_QCalendar_YearMonthDay_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCalendar::YearMonthDay *> (new QCalendar::YearMonthDay ());
}


//  Constructor QCalendar::YearMonthDay::YearMonthDay(int y, int m, int d)


static void _init_ctor_QCalendar_YearMonthDay_2085 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m", true, "1");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("d", true, "1");
  decl->add_arg<int > (argspec_2);
  decl->set_return_new<QCalendar::YearMonthDay> ();
}

static void _call_ctor_QCalendar_YearMonthDay_2085 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (1, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (1, heap);
  ret.write<QCalendar::YearMonthDay *> (new QCalendar::YearMonthDay (arg1, arg2, arg3));
}


// bool QCalendar::YearMonthDay::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCalendar::YearMonthDay *)cls)->isValid ());
}



namespace gsi
{

static gsi::Methods methods_QCalendar_YearMonthDay () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCalendar::YearMonthDay::YearMonthDay()\nThis method creates an object of class QCalendar::YearMonthDay.", &_init_ctor_QCalendar_YearMonthDay_0, &_call_ctor_QCalendar_YearMonthDay_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCalendar::YearMonthDay::YearMonthDay(int y, int m, int d)\nThis method creates an object of class QCalendar::YearMonthDay.", &_init_ctor_QCalendar_YearMonthDay_2085, &_call_ctor_QCalendar_YearMonthDay_2085);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QCalendar::YearMonthDay::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  return methods;
}

gsi::Class<QCalendar::YearMonthDay> decl_QCalendar_YearMonthDay ("QtCore", "QCalendar_YearMonthDay",
  methods_QCalendar_YearMonthDay (),
  "@qt\n@brief Binding of QCalendar::YearMonthDay");

gsi::ClassExt<QCalendar> decl_QCalendar_YearMonthDay_as_child (decl_QCalendar_YearMonthDay, "YearMonthDay");

GSI_QTCORE_PUBLIC gsi::Class<QCalendar::YearMonthDay> &qtdecl_QCalendar_YearMonthDay () { return decl_QCalendar_YearMonthDay; }

}

