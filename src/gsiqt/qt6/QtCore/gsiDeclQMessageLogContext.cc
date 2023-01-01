
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
*  @file gsiDeclQMessageLogContext.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMessageLogContext>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMessageLogContext

//  Constructor QMessageLogContext::QMessageLogContext()


static void _init_ctor_QMessageLogContext_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMessageLogContext> ();
}

static void _call_ctor_QMessageLogContext_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMessageLogContext *> (new QMessageLogContext ());
}


//  Constructor QMessageLogContext::QMessageLogContext(const char *fileName, int lineNumber, const char *functionName, const char *categoryName)


static void _init_ctor_QMessageLogContext_5636 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("lineNumber");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("functionName");
  decl->add_arg<const char * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("categoryName");
  decl->add_arg<const char * > (argspec_3);
  decl->set_return_new<QMessageLogContext> ();
}

static void _call_ctor_QMessageLogContext_5636 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const char *arg3 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg4 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QMessageLogContext *> (new QMessageLogContext (arg1, arg2, arg3, arg4));
}



namespace gsi
{

static gsi::Methods methods_QMessageLogContext () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMessageLogContext::QMessageLogContext()\nThis method creates an object of class QMessageLogContext.", &_init_ctor_QMessageLogContext_0, &_call_ctor_QMessageLogContext_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMessageLogContext::QMessageLogContext(const char *fileName, int lineNumber, const char *functionName, const char *categoryName)\nThis method creates an object of class QMessageLogContext.", &_init_ctor_QMessageLogContext_5636, &_call_ctor_QMessageLogContext_5636);
  return methods;
}

gsi::Class<QMessageLogContext> decl_QMessageLogContext ("QtCore", "QMessageLogContext",
  methods_QMessageLogContext (),
  "@qt\n@brief Binding of QMessageLogContext");


GSI_QTCORE_PUBLIC gsi::Class<QMessageLogContext> &qtdecl_QMessageLogContext () { return decl_QMessageLogContext; }

}

