
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
*  @file gsiDeclQTableWidgetSelectionRange.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTableWidgetSelectionRange>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTableWidgetSelectionRange

//  Constructor QTableWidgetSelectionRange::QTableWidgetSelectionRange()


static void _init_ctor_QTableWidgetSelectionRange_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTableWidgetSelectionRange> ();
}

static void _call_ctor_QTableWidgetSelectionRange_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTableWidgetSelectionRange *> (new QTableWidgetSelectionRange ());
}


//  Constructor QTableWidgetSelectionRange::QTableWidgetSelectionRange(int top, int left, int bottom, int right)


static void _init_ctor_QTableWidgetSelectionRange_2744 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("top");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("left");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("bottom");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("right");
  decl->add_arg<int > (argspec_3);
  decl->set_return_new<QTableWidgetSelectionRange> ();
}

static void _call_ctor_QTableWidgetSelectionRange_2744 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTableWidgetSelectionRange *> (new QTableWidgetSelectionRange (arg1, arg2, arg3, arg4));
}


//  Constructor QTableWidgetSelectionRange::QTableWidgetSelectionRange(const QTableWidgetSelectionRange &other)


static void _init_ctor_QTableWidgetSelectionRange_3921 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTableWidgetSelectionRange & > (argspec_0);
  decl->set_return_new<QTableWidgetSelectionRange> ();
}

static void _call_ctor_QTableWidgetSelectionRange_3921 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTableWidgetSelectionRange &arg1 = gsi::arg_reader<const QTableWidgetSelectionRange & >() (args, heap);
  ret.write<QTableWidgetSelectionRange *> (new QTableWidgetSelectionRange (arg1));
}


// int QTableWidgetSelectionRange::bottomRow()


static void _init_f_bottomRow_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bottomRow_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTableWidgetSelectionRange *)cls)->bottomRow ());
}


// int QTableWidgetSelectionRange::columnCount()


static void _init_f_columnCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_columnCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTableWidgetSelectionRange *)cls)->columnCount ());
}


// int QTableWidgetSelectionRange::leftColumn()


static void _init_f_leftColumn_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_leftColumn_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTableWidgetSelectionRange *)cls)->leftColumn ());
}


// int QTableWidgetSelectionRange::rightColumn()


static void _init_f_rightColumn_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_rightColumn_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTableWidgetSelectionRange *)cls)->rightColumn ());
}


// int QTableWidgetSelectionRange::rowCount()


static void _init_f_rowCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_rowCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTableWidgetSelectionRange *)cls)->rowCount ());
}


// int QTableWidgetSelectionRange::topRow()


static void _init_f_topRow_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_topRow_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTableWidgetSelectionRange *)cls)->topRow ());
}



namespace gsi
{

static gsi::Methods methods_QTableWidgetSelectionRange () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTableWidgetSelectionRange::QTableWidgetSelectionRange()\nThis method creates an object of class QTableWidgetSelectionRange.", &_init_ctor_QTableWidgetSelectionRange_0, &_call_ctor_QTableWidgetSelectionRange_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTableWidgetSelectionRange::QTableWidgetSelectionRange(int top, int left, int bottom, int right)\nThis method creates an object of class QTableWidgetSelectionRange.", &_init_ctor_QTableWidgetSelectionRange_2744, &_call_ctor_QTableWidgetSelectionRange_2744);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTableWidgetSelectionRange::QTableWidgetSelectionRange(const QTableWidgetSelectionRange &other)\nThis method creates an object of class QTableWidgetSelectionRange.", &_init_ctor_QTableWidgetSelectionRange_3921, &_call_ctor_QTableWidgetSelectionRange_3921);
  methods += new qt_gsi::GenericMethod ("bottomRow", "@brief Method int QTableWidgetSelectionRange::bottomRow()\n", true, &_init_f_bottomRow_c0, &_call_f_bottomRow_c0);
  methods += new qt_gsi::GenericMethod ("columnCount", "@brief Method int QTableWidgetSelectionRange::columnCount()\n", true, &_init_f_columnCount_c0, &_call_f_columnCount_c0);
  methods += new qt_gsi::GenericMethod ("leftColumn", "@brief Method int QTableWidgetSelectionRange::leftColumn()\n", true, &_init_f_leftColumn_c0, &_call_f_leftColumn_c0);
  methods += new qt_gsi::GenericMethod ("rightColumn", "@brief Method int QTableWidgetSelectionRange::rightColumn()\n", true, &_init_f_rightColumn_c0, &_call_f_rightColumn_c0);
  methods += new qt_gsi::GenericMethod ("rowCount", "@brief Method int QTableWidgetSelectionRange::rowCount()\n", true, &_init_f_rowCount_c0, &_call_f_rowCount_c0);
  methods += new qt_gsi::GenericMethod ("topRow", "@brief Method int QTableWidgetSelectionRange::topRow()\n", true, &_init_f_topRow_c0, &_call_f_topRow_c0);
  return methods;
}

gsi::Class<QTableWidgetSelectionRange> decl_QTableWidgetSelectionRange ("QtWidgets", "QTableWidgetSelectionRange",
  methods_QTableWidgetSelectionRange (),
  "@qt\n@brief Binding of QTableWidgetSelectionRange");


GSI_QTWIDGETS_PUBLIC gsi::Class<QTableWidgetSelectionRange> &qtdecl_QTableWidgetSelectionRange () { return decl_QTableWidgetSelectionRange; }

}

