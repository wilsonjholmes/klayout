
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
*  @file gsiDeclQLineF.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLineF>
#include <QLine>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLineF

//  Constructor QLineF::QLineF()


static void _init_ctor_QLineF_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QLineF> ();
}

static void _call_ctor_QLineF_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLineF *> (new QLineF ());
}


//  Constructor QLineF::QLineF(const QPointF &pt1, const QPointF &pt2)


static void _init_ctor_QLineF_3864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pt1");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pt2");
  decl->add_arg<const QPointF & > (argspec_1);
  decl->set_return_new<QLineF> ();
}

static void _call_ctor_QLineF_3864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QLineF *> (new QLineF (arg1, arg2));
}


//  Constructor QLineF::QLineF(double x1, double y1, double x2, double y2)


static void _init_ctor_QLineF_3960 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x1");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y1");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("x2");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("y2");
  decl->add_arg<double > (argspec_3);
  decl->set_return_new<QLineF> ();
}

static void _call_ctor_QLineF_3960 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  ret.write<QLineF *> (new QLineF (arg1, arg2, arg3, arg4));
}


//  Constructor QLineF::QLineF(const QLine &line)


static void _init_ctor_QLineF_1786 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("line");
  decl->add_arg<const QLine & > (argspec_0);
  decl->set_return_new<QLineF> ();
}

static void _call_ctor_QLineF_1786 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLine &arg1 = gsi::arg_reader<const QLine & >() (args, heap);
  ret.write<QLineF *> (new QLineF (arg1));
}


// double QLineF::angle()


static void _init_f_angle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_angle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->angle ());
}


// double QLineF::angleTo(const QLineF &l)


static void _init_f_angleTo_c1856 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("l");
  decl->add_arg<const QLineF & > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_angleTo_c1856 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLineF &arg1 = gsi::arg_reader<const QLineF & >() (args, heap);
  ret.write<double > ((double)((QLineF *)cls)->angleTo (arg1));
}


// QPointF QLineF::center()


static void _init_f_center_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_center_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QLineF *)cls)->center ());
}


// double QLineF::dx()


static void _init_f_dx_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_dx_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->dx ());
}


// double QLineF::dy()


static void _init_f_dy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_dy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->dy ());
}


// QLineF::IntersectionType QLineF::intersects(const QLineF &l, QPointF *intersectionPoint)


static void _init_f_intersects_c3043 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("l");
  decl->add_arg<const QLineF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("intersectionPoint", true, "nullptr");
  decl->add_arg<QPointF * > (argspec_1);
  decl->set_return<qt_gsi::Converter<QLineF::IntersectionType>::target_type > ();
}

static void _call_f_intersects_c3043 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLineF &arg1 = gsi::arg_reader<const QLineF & >() (args, heap);
  QPointF *arg2 = args ? gsi::arg_reader<QPointF * >() (args, heap) : gsi::arg_maker<QPointF * >() (nullptr, heap);
  ret.write<qt_gsi::Converter<QLineF::IntersectionType>::target_type > ((qt_gsi::Converter<QLineF::IntersectionType>::target_type)qt_gsi::CppToQtAdaptor<QLineF::IntersectionType>(((QLineF *)cls)->intersects (arg1, arg2)));
}


// bool QLineF::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLineF *)cls)->isNull ());
}


// double QLineF::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->length ());
}


// QLineF QLineF::normalVector()


static void _init_f_normalVector_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLineF > ();
}

static void _call_f_normalVector_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLineF > ((QLineF)((QLineF *)cls)->normalVector ());
}


// bool QLineF::operator!=(const QLineF &d)


static void _init_f_operator_excl__eq__c1856 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<const QLineF & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c1856 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLineF &arg1 = gsi::arg_reader<const QLineF & >() (args, heap);
  ret.write<bool > ((bool)((QLineF *)cls)->operator!= (arg1));
}


// bool QLineF::operator==(const QLineF &d)


static void _init_f_operator_eq__eq__c1856 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<const QLineF & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c1856 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLineF &arg1 = gsi::arg_reader<const QLineF & >() (args, heap);
  ret.write<bool > ((bool)((QLineF *)cls)->operator== (arg1));
}


// QPointF QLineF::p1()


static void _init_f_p1_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_p1_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QLineF *)cls)->p1 ());
}


// QPointF QLineF::p2()


static void _init_f_p2_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_p2_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QLineF *)cls)->p2 ());
}


// QPointF QLineF::pointAt(double t)


static void _init_f_pointAt_c1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QPointF > ();
}

static void _call_f_pointAt_c1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QPointF > ((QPointF)((QLineF *)cls)->pointAt (arg1));
}


// void QLineF::setAngle(double angle)


static void _init_f_setAngle_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("angle");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAngle_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->setAngle (arg1);
}


// void QLineF::setLength(double len)


static void _init_f_setLength_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("len");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLength_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->setLength (arg1);
}


// void QLineF::setLine(double x1, double y1, double x2, double y2)


static void _init_f_setLine_3960 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x1");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y1");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("x2");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("y2");
  decl->add_arg<double > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_setLine_3960 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->setLine (arg1, arg2, arg3, arg4);
}


// void QLineF::setP1(const QPointF &p1)


static void _init_f_setP1_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p1");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setP1_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->setP1 (arg1);
}


// void QLineF::setP2(const QPointF &p2)


static void _init_f_setP2_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p2");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setP2_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->setP2 (arg1);
}


// void QLineF::setPoints(const QPointF &p1, const QPointF &p2)


static void _init_f_setPoints_3864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p1");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("p2");
  decl->add_arg<const QPointF & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPoints_3864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->setPoints (arg1, arg2);
}


// QLine QLineF::toLine()


static void _init_f_toLine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLine > ();
}

static void _call_f_toLine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLine > ((QLine)((QLineF *)cls)->toLine ());
}


// void QLineF::translate(const QPointF &p)


static void _init_f_translate_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_translate_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->translate (arg1);
}


// void QLineF::translate(double dx, double dy)


static void _init_f_translate_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_translate_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLineF *)cls)->translate (arg1, arg2);
}


// QLineF QLineF::translated(const QPointF &p)


static void _init_f_translated_c1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<QLineF > ();
}

static void _call_f_translated_c1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QLineF > ((QLineF)((QLineF *)cls)->translated (arg1));
}


// QLineF QLineF::translated(double dx, double dy)


static void _init_f_translated_c2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<double > (argspec_1);
  decl->set_return<QLineF > ();
}

static void _call_f_translated_c2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QLineF > ((QLineF)((QLineF *)cls)->translated (arg1, arg2));
}


// QLineF QLineF::unitVector()


static void _init_f_unitVector_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLineF > ();
}

static void _call_f_unitVector_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLineF > ((QLineF)((QLineF *)cls)->unitVector ());
}


// double QLineF::x1()


static void _init_f_x1_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_x1_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->x1 ());
}


// double QLineF::x2()


static void _init_f_x2_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_x2_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->x2 ());
}


// double QLineF::y1()


static void _init_f_y1_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_y1_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->y1 ());
}


// double QLineF::y2()


static void _init_f_y2_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_y2_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QLineF *)cls)->y2 ());
}


// static QLineF QLineF::fromPolar(double length, double angle)


static void _init_f_fromPolar_2034 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("length");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("angle");
  decl->add_arg<double > (argspec_1);
  decl->set_return<QLineF > ();
}

static void _call_f_fromPolar_2034 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QLineF > ((QLineF)QLineF::fromPolar (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QLineF () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLineF::QLineF()\nThis method creates an object of class QLineF.", &_init_ctor_QLineF_0, &_call_ctor_QLineF_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLineF::QLineF(const QPointF &pt1, const QPointF &pt2)\nThis method creates an object of class QLineF.", &_init_ctor_QLineF_3864, &_call_ctor_QLineF_3864);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLineF::QLineF(double x1, double y1, double x2, double y2)\nThis method creates an object of class QLineF.", &_init_ctor_QLineF_3960, &_call_ctor_QLineF_3960);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLineF::QLineF(const QLine &line)\nThis method creates an object of class QLineF.", &_init_ctor_QLineF_1786, &_call_ctor_QLineF_1786);
  methods += new qt_gsi::GenericMethod (":angle", "@brief Method double QLineF::angle()\n", true, &_init_f_angle_c0, &_call_f_angle_c0);
  methods += new qt_gsi::GenericMethod ("angleTo", "@brief Method double QLineF::angleTo(const QLineF &l)\n", true, &_init_f_angleTo_c1856, &_call_f_angleTo_c1856);
  methods += new qt_gsi::GenericMethod ("center", "@brief Method QPointF QLineF::center()\n", true, &_init_f_center_c0, &_call_f_center_c0);
  methods += new qt_gsi::GenericMethod ("dx", "@brief Method double QLineF::dx()\n", true, &_init_f_dx_c0, &_call_f_dx_c0);
  methods += new qt_gsi::GenericMethod ("dy", "@brief Method double QLineF::dy()\n", true, &_init_f_dy_c0, &_call_f_dy_c0);
  methods += new qt_gsi::GenericMethod ("intersects", "@brief Method QLineF::IntersectionType QLineF::intersects(const QLineF &l, QPointF *intersectionPoint)\n", true, &_init_f_intersects_c3043, &_call_f_intersects_c3043);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QLineF::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod (":length", "@brief Method double QLineF::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("normalVector", "@brief Method QLineF QLineF::normalVector()\n", true, &_init_f_normalVector_c0, &_call_f_normalVector_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QLineF::operator!=(const QLineF &d)\n", true, &_init_f_operator_excl__eq__c1856, &_call_f_operator_excl__eq__c1856);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QLineF::operator==(const QLineF &d)\n", true, &_init_f_operator_eq__eq__c1856, &_call_f_operator_eq__eq__c1856);
  methods += new qt_gsi::GenericMethod (":p1", "@brief Method QPointF QLineF::p1()\n", true, &_init_f_p1_c0, &_call_f_p1_c0);
  methods += new qt_gsi::GenericMethod (":p2", "@brief Method QPointF QLineF::p2()\n", true, &_init_f_p2_c0, &_call_f_p2_c0);
  methods += new qt_gsi::GenericMethod ("pointAt", "@brief Method QPointF QLineF::pointAt(double t)\n", true, &_init_f_pointAt_c1071, &_call_f_pointAt_c1071);
  methods += new qt_gsi::GenericMethod ("setAngle|angle=", "@brief Method void QLineF::setAngle(double angle)\n", false, &_init_f_setAngle_1071, &_call_f_setAngle_1071);
  methods += new qt_gsi::GenericMethod ("setLength|length=", "@brief Method void QLineF::setLength(double len)\n", false, &_init_f_setLength_1071, &_call_f_setLength_1071);
  methods += new qt_gsi::GenericMethod ("setLine", "@brief Method void QLineF::setLine(double x1, double y1, double x2, double y2)\n", false, &_init_f_setLine_3960, &_call_f_setLine_3960);
  methods += new qt_gsi::GenericMethod ("setP1|p1=", "@brief Method void QLineF::setP1(const QPointF &p1)\n", false, &_init_f_setP1_1986, &_call_f_setP1_1986);
  methods += new qt_gsi::GenericMethod ("setP2|p2=", "@brief Method void QLineF::setP2(const QPointF &p2)\n", false, &_init_f_setP2_1986, &_call_f_setP2_1986);
  methods += new qt_gsi::GenericMethod ("setPoints", "@brief Method void QLineF::setPoints(const QPointF &p1, const QPointF &p2)\n", false, &_init_f_setPoints_3864, &_call_f_setPoints_3864);
  methods += new qt_gsi::GenericMethod ("toLine", "@brief Method QLine QLineF::toLine()\n", true, &_init_f_toLine_c0, &_call_f_toLine_c0);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QLineF::translate(const QPointF &p)\n", false, &_init_f_translate_1986, &_call_f_translate_1986);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QLineF::translate(double dx, double dy)\n", false, &_init_f_translate_2034, &_call_f_translate_2034);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QLineF QLineF::translated(const QPointF &p)\n", true, &_init_f_translated_c1986, &_call_f_translated_c1986);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QLineF QLineF::translated(double dx, double dy)\n", true, &_init_f_translated_c2034, &_call_f_translated_c2034);
  methods += new qt_gsi::GenericMethod ("unitVector", "@brief Method QLineF QLineF::unitVector()\n", true, &_init_f_unitVector_c0, &_call_f_unitVector_c0);
  methods += new qt_gsi::GenericMethod ("x1", "@brief Method double QLineF::x1()\n", true, &_init_f_x1_c0, &_call_f_x1_c0);
  methods += new qt_gsi::GenericMethod ("x2", "@brief Method double QLineF::x2()\n", true, &_init_f_x2_c0, &_call_f_x2_c0);
  methods += new qt_gsi::GenericMethod ("y1", "@brief Method double QLineF::y1()\n", true, &_init_f_y1_c0, &_call_f_y1_c0);
  methods += new qt_gsi::GenericMethod ("y2", "@brief Method double QLineF::y2()\n", true, &_init_f_y2_c0, &_call_f_y2_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromPolar", "@brief Static method QLineF QLineF::fromPolar(double length, double angle)\nThis method is static and can be called without an instance.", &_init_f_fromPolar_2034, &_call_f_fromPolar_2034);
  return methods;
}

gsi::Class<QLineF> decl_QLineF ("QtCore", "QLineF",
  methods_QLineF (),
  "@qt\n@brief Binding of QLineF");


GSI_QTCORE_PUBLIC gsi::Class<QLineF> &qtdecl_QLineF () { return decl_QLineF; }

}


//  Implementation of the enum wrapper class for QLineF::IntersectionType
namespace qt_gsi
{

static gsi::Enum<QLineF::IntersectionType> decl_QLineF_IntersectionType_Enum ("QtCore", "QLineF_IntersectionType",
    gsi::enum_const ("NoIntersection", QLineF::NoIntersection, "@brief Enum constant QLineF::NoIntersection") +
    gsi::enum_const ("BoundedIntersection", QLineF::BoundedIntersection, "@brief Enum constant QLineF::BoundedIntersection") +
    gsi::enum_const ("UnboundedIntersection", QLineF::UnboundedIntersection, "@brief Enum constant QLineF::UnboundedIntersection"),
  "@qt\n@brief This class represents the QLineF::IntersectionType enum");

static gsi::QFlagsClass<QLineF::IntersectionType > decl_QLineF_IntersectionType_Enums ("QtCore", "QLineF_QFlags_IntersectionType",
  "@qt\n@brief This class represents the QFlags<QLineF::IntersectionType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QLineF> inject_QLineF_IntersectionType_Enum_in_parent (decl_QLineF_IntersectionType_Enum.defs ());
static gsi::ClassExt<QLineF> decl_QLineF_IntersectionType_Enum_as_child (decl_QLineF_IntersectionType_Enum, "IntersectionType");
static gsi::ClassExt<QLineF> decl_QLineF_IntersectionType_Enums_as_child (decl_QLineF_IntersectionType_Enums, "QFlags_IntersectionType");

}

