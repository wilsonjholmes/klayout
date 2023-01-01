
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
*  @file gsiDeclQCamera_FrameRateRange.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCamera>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QCamera::FrameRateRange

//  Constructor QCamera::FrameRateRange::FrameRateRange()


static void _init_ctor_QCamera_FrameRateRange_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCamera::FrameRateRange> ();
}

static void _call_ctor_QCamera_FrameRateRange_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCamera::FrameRateRange *> (new QCamera::FrameRateRange ());
}


//  Constructor QCamera::FrameRateRange::FrameRateRange(double minimum, double maximum)


static void _init_ctor_QCamera_FrameRateRange_2034 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("minimum");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("maximum");
  decl->add_arg<double > (argspec_1);
  decl->set_return_new<QCamera::FrameRateRange> ();
}

static void _call_ctor_QCamera_FrameRateRange_2034 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QCamera::FrameRateRange *> (new QCamera::FrameRateRange (arg1, arg2));
}


//  bool ::operator==(const QCamera::FrameRateRange &r1, const QCamera::FrameRateRange &r2)
static bool op_QCamera_FrameRateRange_operator_eq__eq__6842(const QCamera::FrameRateRange *_self, const QCamera::FrameRateRange &r2) {
  return ::operator==(*_self, r2);
}

//  bool ::operator!=(const QCamera::FrameRateRange &r1, const QCamera::FrameRateRange &r2)
static bool op_QCamera_FrameRateRange_operator_excl__eq__6842(const QCamera::FrameRateRange *_self, const QCamera::FrameRateRange &r2) {
  return ::operator!=(*_self, r2);
}


namespace gsi
{

static gsi::Methods methods_QCamera_FrameRateRange () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCamera::FrameRateRange::FrameRateRange()\nThis method creates an object of class QCamera::FrameRateRange.", &_init_ctor_QCamera_FrameRateRange_0, &_call_ctor_QCamera_FrameRateRange_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCamera::FrameRateRange::FrameRateRange(double minimum, double maximum)\nThis method creates an object of class QCamera::FrameRateRange.", &_init_ctor_QCamera_FrameRateRange_2034, &_call_ctor_QCamera_FrameRateRange_2034);
  methods += gsi::method_ext("==", &::op_QCamera_FrameRateRange_operator_eq__eq__6842, gsi::arg ("r2"), "@brief Operator bool ::operator==(const QCamera::FrameRateRange &r1, const QCamera::FrameRateRange &r2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QCamera_FrameRateRange_operator_excl__eq__6842, gsi::arg ("r2"), "@brief Operator bool ::operator!=(const QCamera::FrameRateRange &r1, const QCamera::FrameRateRange &r2)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QCamera::FrameRateRange> decl_QCamera_FrameRateRange ("QtMultimedia", "QCamera_FrameRateRange",
  methods_QCamera_FrameRateRange (),
  "@qt\n@brief Binding of QCamera::FrameRateRange");

gsi::ClassExt<QCamera> decl_QCamera_FrameRateRange_as_child (decl_QCamera_FrameRateRange, "FrameRateRange");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCamera::FrameRateRange> &qtdecl_QCamera_FrameRateRange () { return decl_QCamera_FrameRateRange; }

}

