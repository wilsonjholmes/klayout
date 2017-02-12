
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
*  @file gsiDeclQMapDataBase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMapDataBase>
#include <QMapNodeBase>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMapDataBase

//  Constructor QMapDataBase::QMapDataBase()


static void _init_ctor_QMapDataBase_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMapDataBase> ();
}

static void _call_ctor_QMapDataBase_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMapDataBase *> (new QMapDataBase ());
}


// QMapNodeBase *QMapDataBase::createNode(int size, int alignment, QMapNodeBase *parent, bool left)


static void _init_f_createNode_3832 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("alignment");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parent");
  decl->add_arg<QMapNodeBase * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("left");
  decl->add_arg<bool > (argspec_3);
  decl->set_return<QMapNodeBase * > ();
}

static void _call_f_createNode_3832 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  QMapNodeBase *arg3 = args.read<QMapNodeBase * > (heap);
  bool arg4 = args.read<bool > (heap);
  ret.write<QMapNodeBase * > ((QMapNodeBase *)((QMapDataBase *)cls)->createNode (arg1, arg2, arg3, arg4));
}


// void QMapDataBase::freeNodeAndRebalance(QMapNodeBase *z)


static void _init_f_freeNodeAndRebalance_1758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("z");
  decl->add_arg<QMapNodeBase * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_freeNodeAndRebalance_1758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMapNodeBase *arg1 = args.read<QMapNodeBase * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapDataBase *)cls)->freeNodeAndRebalance (arg1);
}


// void QMapDataBase::freeTree(QMapNodeBase *root, int alignment)


static void _init_f_freeTree_2417 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("root");
  decl->add_arg<QMapNodeBase * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("alignment");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_freeTree_2417 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMapNodeBase *arg1 = args.read<QMapNodeBase * > (heap);
  int arg2 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapDataBase *)cls)->freeTree (arg1, arg2);
}


// void QMapDataBase::rebalance(QMapNodeBase *x)


static void _init_f_rebalance_1758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<QMapNodeBase * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_rebalance_1758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMapNodeBase *arg1 = args.read<QMapNodeBase * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapDataBase *)cls)->rebalance (arg1);
}


// void QMapDataBase::recalcMostLeftNode()


static void _init_f_recalcMostLeftNode_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_recalcMostLeftNode_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapDataBase *)cls)->recalcMostLeftNode ();
}


// void QMapDataBase::rotateLeft(QMapNodeBase *x)


static void _init_f_rotateLeft_1758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<QMapNodeBase * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_rotateLeft_1758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMapNodeBase *arg1 = args.read<QMapNodeBase * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapDataBase *)cls)->rotateLeft (arg1);
}


// void QMapDataBase::rotateRight(QMapNodeBase *x)


static void _init_f_rotateRight_1758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<QMapNodeBase * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_rotateRight_1758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMapNodeBase *arg1 = args.read<QMapNodeBase * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMapDataBase *)cls)->rotateRight (arg1);
}


// static QMapDataBase *QMapDataBase::createData()


static void _init_f_createData_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QMapDataBase * > ();
}

static void _call_f_createData_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMapDataBase * > ((QMapDataBase *)QMapDataBase::createData ());
}


// static void QMapDataBase::freeData(QMapDataBase *d)


static void _init_f_freeData_1746 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<QMapDataBase * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_freeData_1746 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMapDataBase *arg1 = args.read<QMapDataBase * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QMapDataBase::freeData (arg1);
}



namespace gsi
{

static gsi::Methods methods_QMapDataBase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMapDataBase::QMapDataBase()\nThis method creates an object of class QMapDataBase.", &_init_ctor_QMapDataBase_0, &_call_ctor_QMapDataBase_0);
  methods += new qt_gsi::GenericMethod ("createNode", "@brief Method QMapNodeBase *QMapDataBase::createNode(int size, int alignment, QMapNodeBase *parent, bool left)\n", false, &_init_f_createNode_3832, &_call_f_createNode_3832);
  methods += new qt_gsi::GenericMethod ("freeNodeAndRebalance", "@brief Method void QMapDataBase::freeNodeAndRebalance(QMapNodeBase *z)\n", false, &_init_f_freeNodeAndRebalance_1758, &_call_f_freeNodeAndRebalance_1758);
  methods += new qt_gsi::GenericMethod ("freeTree", "@brief Method void QMapDataBase::freeTree(QMapNodeBase *root, int alignment)\n", false, &_init_f_freeTree_2417, &_call_f_freeTree_2417);
  methods += new qt_gsi::GenericMethod ("rebalance", "@brief Method void QMapDataBase::rebalance(QMapNodeBase *x)\n", false, &_init_f_rebalance_1758, &_call_f_rebalance_1758);
  methods += new qt_gsi::GenericMethod ("recalcMostLeftNode", "@brief Method void QMapDataBase::recalcMostLeftNode()\n", false, &_init_f_recalcMostLeftNode_0, &_call_f_recalcMostLeftNode_0);
  methods += new qt_gsi::GenericMethod ("rotateLeft", "@brief Method void QMapDataBase::rotateLeft(QMapNodeBase *x)\n", false, &_init_f_rotateLeft_1758, &_call_f_rotateLeft_1758);
  methods += new qt_gsi::GenericMethod ("rotateRight", "@brief Method void QMapDataBase::rotateRight(QMapNodeBase *x)\n", false, &_init_f_rotateRight_1758, &_call_f_rotateRight_1758);
  methods += new qt_gsi::GenericStaticMethod ("createData", "@brief Static method QMapDataBase *QMapDataBase::createData()\nThis method is static and can be called without an instance.", &_init_f_createData_0, &_call_f_createData_0);
  methods += new qt_gsi::GenericStaticMethod ("freeData", "@brief Static method void QMapDataBase::freeData(QMapDataBase *d)\nThis method is static and can be called without an instance.", &_init_f_freeData_1746, &_call_f_freeData_1746);
  return methods;
}

gsi::Class<QMapDataBase> decl_QMapDataBase ("QMapDataBase",
  methods_QMapDataBase (),
  "@qt\n@brief Binding of QMapDataBase");


GSIQT_PUBLIC gsi::Class<QMapDataBase> &qtdecl_QMapDataBase () { return decl_QMapDataBase; }

}

