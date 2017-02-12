
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
*  @file gsiDeclQCursor.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCursor>
#include <QScreen>
#include <QBitmap>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCursor

//  Constructor QCursor::QCursor()


static void _init_ctor_QCursor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCursor> ();
}

static void _call_ctor_QCursor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCursor *> (new QCursor ());
}


//  Constructor QCursor::QCursor(Qt::CursorShape shape)


static void _init_ctor_QCursor_1884 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("shape");
  decl->add_arg<const qt_gsi::Converter<Qt::CursorShape>::target_type & > (argspec_0);
  decl->set_return_new<QCursor> ();
}

static void _call_ctor_QCursor_1884 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::CursorShape>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::CursorShape>::target_type & > (heap);
  ret.write<QCursor *> (new QCursor (qt_gsi::QtToCppAdaptor<Qt::CursorShape>(arg1).cref()));
}


//  Constructor QCursor::QCursor(const QBitmap &bitmap, const QBitmap &mask, int hotX, int hotY)


static void _init_ctor_QCursor_5208 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bitmap");
  decl->add_arg<const QBitmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mask");
  decl->add_arg<const QBitmap & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("hotX", true, "-1");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("hotY", true, "-1");
  decl->add_arg<int > (argspec_3);
  decl->set_return_new<QCursor> ();
}

static void _call_ctor_QCursor_5208 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBitmap &arg1 = args.read<const QBitmap & > (heap);
  const QBitmap &arg2 = args.read<const QBitmap & > (heap);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  int arg4 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QCursor *> (new QCursor (arg1, arg2, arg3, arg4));
}


//  Constructor QCursor::QCursor(const QPixmap &pixmap, int hotX, int hotY)


static void _init_ctor_QCursor_3335 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("hotX", true, "-1");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("hotY", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return_new<QCursor> ();
}

static void _call_ctor_QCursor_3335 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = args.read<const QPixmap & > (heap);
  int arg2 = args ? args.read<int > (heap) : (int)(-1);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QCursor *> (new QCursor (arg1, arg2, arg3));
}


//  Constructor QCursor::QCursor(const QCursor &cursor)


static void _init_ctor_QCursor_2032 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursor");
  decl->add_arg<const QCursor & > (argspec_0);
  decl->set_return_new<QCursor> ();
}

static void _call_ctor_QCursor_2032 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCursor &arg1 = args.read<const QCursor & > (heap);
  ret.write<QCursor *> (new QCursor (arg1));
}


// const QBitmap *QCursor::bitmap()


static void _init_f_bitmap_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QBitmap * > ();
}

static void _call_f_bitmap_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QBitmap * > ((const QBitmap *)((QCursor *)cls)->bitmap ());
}


// QPoint QCursor::hotSpot()


static void _init_f_hotSpot_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_hotSpot_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QCursor *)cls)->hotSpot ());
}


// const QBitmap *QCursor::mask()


static void _init_f_mask_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QBitmap * > ();
}

static void _call_f_mask_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QBitmap * > ((const QBitmap *)((QCursor *)cls)->mask ());
}


// QCursor &QCursor::operator=(const QCursor &cursor)


static void _init_f_operator_eq__2032 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursor");
  decl->add_arg<const QCursor & > (argspec_0);
  decl->set_return<QCursor & > ();
}

static void _call_f_operator_eq__2032 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCursor &arg1 = args.read<const QCursor & > (heap);
  ret.write<QCursor & > ((QCursor &)((QCursor *)cls)->operator= (arg1));
}


// QPixmap QCursor::pixmap()


static void _init_f_pixmap_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPixmap > ();
}

static void _call_f_pixmap_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPixmap > ((QPixmap)((QCursor *)cls)->pixmap ());
}


// void QCursor::setShape(Qt::CursorShape newShape)


static void _init_f_setShape_1884 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newShape");
  decl->add_arg<const qt_gsi::Converter<Qt::CursorShape>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setShape_1884 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::CursorShape>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::CursorShape>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCursor *)cls)->setShape (qt_gsi::QtToCppAdaptor<Qt::CursorShape>(arg1).cref());
}


// Qt::CursorShape QCursor::shape()


static void _init_f_shape_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::CursorShape>::target_type > ();
}

static void _call_f_shape_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::CursorShape>::target_type > ((qt_gsi::Converter<Qt::CursorShape>::target_type)qt_gsi::CppToQtAdaptor<Qt::CursorShape>(((QCursor *)cls)->shape ()));
}


// static QPoint QCursor::pos()


static void _init_f_pos_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pos_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)QCursor::pos ());
}


// static QPoint QCursor::pos(const QScreen *screen)


static void _init_f_pos_2006 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen");
  decl->add_arg<const QScreen * > (argspec_0);
  decl->set_return<QPoint > ();
}

static void _call_f_pos_2006 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QScreen *arg1 = args.read<const QScreen * > (heap);
  ret.write<QPoint > ((QPoint)QCursor::pos (arg1));
}


// static void QCursor::setPos(int x, int y)


static void _init_f_setPos_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPos_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QCursor::setPos (arg1, arg2);
}


// static void QCursor::setPos(QScreen *screen, int x, int y)


static void _init_f_setPos_2629 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen");
  decl->add_arg<QScreen * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("x");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("y");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setPos_2629 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QScreen *arg1 = args.read<QScreen * > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QCursor::setPos (arg1, arg2, arg3);
}


// static void QCursor::setPos(const QPoint &p)


static void _init_f_setPos_1916 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPos_1916 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = args.read<const QPoint & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QCursor::setPos (arg1);
}


// static void QCursor::setPos(QScreen *screen, const QPoint &p)


static void _init_f_setPos_3119 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen");
  decl->add_arg<QScreen * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("p");
  decl->add_arg<const QPoint & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPos_3119 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QScreen *arg1 = args.read<QScreen * > (heap);
  const QPoint &arg2 = args.read<const QPoint & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QCursor::setPos (arg1, arg2);
}



namespace gsi
{

static gsi::Methods methods_QCursor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCursor::QCursor()\nThis method creates an object of class QCursor.", &_init_ctor_QCursor_0, &_call_ctor_QCursor_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCursor::QCursor(Qt::CursorShape shape)\nThis method creates an object of class QCursor.", &_init_ctor_QCursor_1884, &_call_ctor_QCursor_1884);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCursor::QCursor(const QBitmap &bitmap, const QBitmap &mask, int hotX, int hotY)\nThis method creates an object of class QCursor.", &_init_ctor_QCursor_5208, &_call_ctor_QCursor_5208);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCursor::QCursor(const QPixmap &pixmap, int hotX, int hotY)\nThis method creates an object of class QCursor.", &_init_ctor_QCursor_3335, &_call_ctor_QCursor_3335);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCursor::QCursor(const QCursor &cursor)\nThis method creates an object of class QCursor.", &_init_ctor_QCursor_2032, &_call_ctor_QCursor_2032);
  methods += new qt_gsi::GenericMethod ("bitmap", "@brief Method const QBitmap *QCursor::bitmap()\n", true, &_init_f_bitmap_c0, &_call_f_bitmap_c0);
  methods += new qt_gsi::GenericMethod ("hotSpot", "@brief Method QPoint QCursor::hotSpot()\n", true, &_init_f_hotSpot_c0, &_call_f_hotSpot_c0);
  methods += new qt_gsi::GenericMethod ("mask", "@brief Method const QBitmap *QCursor::mask()\n", true, &_init_f_mask_c0, &_call_f_mask_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCursor &QCursor::operator=(const QCursor &cursor)\n", false, &_init_f_operator_eq__2032, &_call_f_operator_eq__2032);
  methods += new qt_gsi::GenericMethod ("pixmap", "@brief Method QPixmap QCursor::pixmap()\n", true, &_init_f_pixmap_c0, &_call_f_pixmap_c0);
  methods += new qt_gsi::GenericMethod ("setShape|shape=", "@brief Method void QCursor::setShape(Qt::CursorShape newShape)\n", false, &_init_f_setShape_1884, &_call_f_setShape_1884);
  methods += new qt_gsi::GenericMethod (":shape", "@brief Method Qt::CursorShape QCursor::shape()\n", true, &_init_f_shape_c0, &_call_f_shape_c0);
  methods += new qt_gsi::GenericStaticMethod (":pos", "@brief Static method QPoint QCursor::pos()\nThis method is static and can be called without an instance.", &_init_f_pos_0, &_call_f_pos_0);
  methods += new qt_gsi::GenericStaticMethod ("pos", "@brief Static method QPoint QCursor::pos(const QScreen *screen)\nThis method is static and can be called without an instance.", &_init_f_pos_2006, &_call_f_pos_2006);
  methods += new qt_gsi::GenericStaticMethod ("setPos", "@brief Static method void QCursor::setPos(int x, int y)\nThis method is static and can be called without an instance.", &_init_f_setPos_1426, &_call_f_setPos_1426);
  methods += new qt_gsi::GenericStaticMethod ("setPos", "@brief Static method void QCursor::setPos(QScreen *screen, int x, int y)\nThis method is static and can be called without an instance.", &_init_f_setPos_2629, &_call_f_setPos_2629);
  methods += new qt_gsi::GenericStaticMethod ("setPos|pos=", "@brief Static method void QCursor::setPos(const QPoint &p)\nThis method is static and can be called without an instance.", &_init_f_setPos_1916, &_call_f_setPos_1916);
  methods += new qt_gsi::GenericStaticMethod ("setPos", "@brief Static method void QCursor::setPos(QScreen *screen, const QPoint &p)\nThis method is static and can be called without an instance.", &_init_f_setPos_3119, &_call_f_setPos_3119);
  return methods;
}

gsi::Class<QCursor> decl_QCursor ("QCursor",
  methods_QCursor (),
  "@qt\n@brief Binding of QCursor");


GSIQT_PUBLIC gsi::Class<QCursor> &qtdecl_QCursor () { return decl_QCursor; }

}

