
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2024 Matthias Koefferlein

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


#include "gsiDecl.h"
#include "edtEditorHooks.h"
#include "layObjectInstPath.h"
#include "layLayoutView.h"

namespace gsi
{

class EditorHooksImpl
  : public edt::EditorHooks
{
public:
  EditorHooksImpl ()
    : edt::EditorHooks ()
  {
    //  .. nothing yet ..
  }

  virtual void begin_create_shapes (lay::CellViewRef &cv, const lay::LayerProperties &layer)
  {
    if (f_begin_create_shapes.can_issue ()) {
      f_begin_create_shapes.issue<edt::EditorHooks, lay::CellViewRef &, const lay::LayerProperties &> (&edt::EditorHooks::begin_create_shapes, cv, layer);
    } else {
      edt::EditorHooks::begin_create_shapes (cv, layer);
    }
  }

  virtual void begin_new_shapes ()
  {
    if (f_begin_new_shapes.can_issue ()) {
      f_begin_new_shapes.issue<edt::EditorHooks> (&edt::EditorHooks::begin_new_shapes);
    } else {
      edt::EditorHooks::begin_new_shapes ();
    }
  }

  virtual void create_shape (const db::Shape &shape, const db::CplxTrans &view_trans)
  {
    if (f_create_shape.can_issue ()) {
      f_create_shape.issue<edt::EditorHooks, const db::Shape &, const db::CplxTrans &> (&edt::EditorHooks::create_shape, shape, view_trans);
    } else {
      edt::EditorHooks::create_shape (shape, view_trans);
    }
  }

  virtual void end_new_shapes ()
  {
    if (f_end_new_shapes.can_issue ()) {
      f_end_new_shapes.issue<edt::EditorHooks> (&edt::EditorHooks::end_new_shapes);
    } else {
      edt::EditorHooks::end_new_shapes ();
    }
  }

  virtual void commit_shapes ()
  {
    if (f_commit_shapes.can_issue ()) {
      f_commit_shapes.issue<edt::EditorHooks> (&edt::EditorHooks::commit_shapes);
    } else {
      edt::EditorHooks::commit_shapes ();
    }
  }

  virtual void end_create_shapes ()
  {
    if (f_end_create_shapes.can_issue ()) {
      f_end_create_shapes.issue<edt::EditorHooks> (&edt::EditorHooks::end_create_shapes);
    } else {
      edt::EditorHooks::end_create_shapes ();
    }
  }

  virtual void begin_create_instances (lay::CellViewRef &cv)
  {
    if (f_begin_create_instances.can_issue ()) {
      f_begin_create_instances.issue<edt::EditorHooks, lay::CellViewRef &> (&edt::EditorHooks::begin_create_instances, cv);
    } else {
      edt::EditorHooks::begin_create_instances (cv);
    }
  }

  virtual void begin_new_instances ()
  {
    if (f_begin_new_instances.can_issue ()) {
      f_begin_new_instances.issue<edt::EditorHooks> (&edt::EditorHooks::begin_new_instances);
    } else {
      edt::EditorHooks::begin_new_instances ();
    }
  }

  virtual void create_instance (const db::Instance &object, const db::CplxTrans &view_trans)
  {
    if (f_create_instance.can_issue ()) {
      f_create_instance.issue<edt::EditorHooks, const db::Instance &, const db::CplxTrans &> (&edt::EditorHooks::create_instance, object, view_trans);
    } else {
      edt::EditorHooks::create_instance (object, view_trans);
    }
  }

  virtual void end_new_instances ()
  {
    if (f_end_new_instances.can_issue ()) {
      f_end_new_instances.issue<edt::EditorHooks> (&edt::EditorHooks::end_new_instances);
    } else {
      edt::EditorHooks::end_new_instances ();
    }
  }

  virtual void commit_instances ()
  {
    if (f_commit_instances.can_issue ()) {
      f_commit_instances.issue<edt::EditorHooks> (&edt::EditorHooks::commit_instances);
    } else {
      edt::EditorHooks::commit_instances ();
    }
  }

  virtual void end_create_instances ()
  {
    if (f_end_create_instances.can_issue ()) {
      f_end_create_instances.issue<edt::EditorHooks> (&edt::EditorHooks::end_create_instances);
    } else {
      edt::EditorHooks::end_create_instances ();
    }
  }

  virtual void begin_modify (lay::LayoutViewBase *view)
  {
    if (f_begin_modify.can_issue ()) {
      f_begin_modify.issue<edt::EditorHooks, lay::LayoutViewBase *> (&edt::EditorHooks::begin_modify, view);
    } else {
      edt::EditorHooks::begin_modify (view);
    }
  }

  virtual void begin_modifications ()
  {
    if (f_begin_modifications.can_issue ()) {
      f_begin_modifications.issue<edt::EditorHooks> (&edt::EditorHooks::begin_modifications);
    } else {
      edt::EditorHooks::begin_modifications ();
    }
  }

  virtual void modified (const lay::ObjectInstPath &object, const db::CplxTrans &view_trans)
  {
    if (f_modified.can_issue ()) {
      f_modified.issue<edt::EditorHooks, const lay::ObjectInstPath &, const db::CplxTrans &> (&edt::EditorHooks::modified, object, view_trans);
    } else {
      edt::EditorHooks::modified (object, view_trans);
    }
  }

  virtual void end_modifications ()
  {
    if (f_end_modifications.can_issue ()) {
      f_end_modifications.issue<edt::EditorHooks> (&edt::EditorHooks::end_modifications);
    } else {
      edt::EditorHooks::end_modifications ();
    }
  }

  virtual void commit_modify ()
  {
    if (f_commit_modify.can_issue ()) {
      f_commit_modify.issue<edt::EditorHooks> (&edt::EditorHooks::commit_modify);
    } else {
      edt::EditorHooks::commit_modify ();
    }
  }

  virtual void end_modify ()
  {
    if (f_end_modify.can_issue ()) {
      f_end_modify.issue<edt::EditorHooks> (&edt::EditorHooks::end_modify);
    } else {
      edt::EditorHooks::end_modify ();
    }
  }

  virtual void begin_edit (lay::LayoutViewBase *view)
  {
    if (f_begin_edit.can_issue ()) {
      f_begin_edit.issue<edt::EditorHooks, lay::LayoutViewBase *> (&edt::EditorHooks::begin_edit, view);
    } else {
      edt::EditorHooks::begin_edit (view);
    }
  }

  virtual void begin_edits ()
  {
    if (f_begin_edits.can_issue ()) {
      f_begin_edits.issue<edt::EditorHooks> (&edt::EditorHooks::begin_edits);
    } else {
      edt::EditorHooks::begin_edits ();
    }
  }

  virtual void transformed (const lay::ObjectInstPath &object, const db::ICplxTrans &applied_trans, const db::CplxTrans &view_trans)
  {
    if (f_transformed.can_issue ()) {
      f_transformed.issue<edt::EditorHooks, const lay::ObjectInstPath &, const db::ICplxTrans &, const db::CplxTrans &> (&edt::EditorHooks::transformed, object, applied_trans, view_trans);
    } else {
      edt::EditorHooks::transformed (object, applied_trans, view_trans);
    }
  }

  virtual void end_edits ()
  {
    if (f_end_edits.can_issue ()) {
      f_end_edits.issue<edt::EditorHooks> (&edt::EditorHooks::end_edits);
    } else {
      edt::EditorHooks::end_edits ();
    }
  }

  virtual void commit_edit ()
  {
    if (f_commit_edit.can_issue ()) {
      f_commit_edit.issue<edt::EditorHooks> (&edt::EditorHooks::commit_edit);
    } else {
      edt::EditorHooks::commit_edit ();
    }
  }

  virtual void end_edit ()
  {
    if (f_end_edit.can_issue ()) {
      f_end_edit.issue<edt::EditorHooks> (&edt::EditorHooks::end_edit);
    } else {
      edt::EditorHooks::end_edit ();
    }
  }

  gsi::Callback f_begin_create_shapes;
  gsi::Callback f_begin_new_shapes;
  gsi::Callback f_create_shape;
  gsi::Callback f_end_new_shapes;
  gsi::Callback f_commit_shapes;
  gsi::Callback f_end_create_shapes;

  gsi::Callback f_begin_create_instances;
  gsi::Callback f_begin_new_instances;
  gsi::Callback f_create_instance;
  gsi::Callback f_end_new_instances;
  gsi::Callback f_commit_instances;
  gsi::Callback f_end_create_instances;

  gsi::Callback f_begin_modify;
  gsi::Callback f_begin_modifications;
  gsi::Callback f_modified;
  gsi::Callback f_end_modifications;
  gsi::Callback f_commit_modify;
  gsi::Callback f_end_modify;

  gsi::Callback f_begin_edit;
  gsi::Callback f_begin_edits;
  gsi::Callback f_transformed;
  gsi::Callback f_end_edits;
  gsi::Callback f_commit_edit;
  gsi::Callback f_end_edit;
};

static void register_editor_hooks (EditorHooksImpl *hooks, const std::string &name)
{
  edt::EditorHooks::register_editor_hooks (hooks, name);
}

gsi::Class<EditorHooksImpl> decl_EditorHooks ("lay", "EditorHooks",
  gsi::callback ("begin_create_shapes", &EditorHooksImpl::begin_create_shapes, &EditorHooksImpl::f_begin_create_shapes, gsi::arg ("cellview"), gsi::arg ("layer"),
    "@brief Shape creation protocol - begin session\n"
    "This method is called to initiate a shape creation session. The session is ended with "
    "\\end_create_shapes. Between these calls, new objects are announced with \\begin_new_shapes, "
    "\\create_shape and \\end_new_shapes calls. These calls are repeated to indicate changes in the objects "
    "created.\n"
    "\n"
    "\\commit_shapes is called once before \\end_create_shapes to indicate that the last set of "
    "objects is committed to the database."
  ) +
  gsi::callback ("begin_new_shapes", &EditorHooksImpl::begin_new_shapes, &EditorHooksImpl::f_begin_new_shapes,
    "@brief Shape creation protocol - begin new shapes\n"
    "See \\begin_create_shapes for a description of the protocol."
  ) +
  gsi::callback ("create_shape", &EditorHooksImpl::create_shape, &EditorHooksImpl::f_create_shape, gsi::arg ("shape"), gsi::arg ("view_trans"),
    "@brief Shape creation protocol - indicate a new object\n"
    "See \\begin_create_shapes for a description of the protocol."
  ) +
  gsi::callback ("end_new_shapes", &EditorHooksImpl::end_new_shapes, &EditorHooksImpl::f_end_new_shapes,
    "@brief Shape creation protocol - finish list of new shapes\n"
    "See \\begin_create_shapes for a description of the protocol."
  ) +
  gsi::callback ("commit_shapes", &EditorHooksImpl::commit_shapes, &EditorHooksImpl::f_commit_shapes,
    "@brief Shape creation protocol - commit new objects\n"
    "See \\begin_create_shapes for a description of the protocol."
  ) +
  gsi::callback ("end_create_shapes", &EditorHooksImpl::end_create_shapes, &EditorHooksImpl::f_end_create_shapes,
    "@brief Shape creation protocol - finish session\n"
    "See \\begin_create for a description of the protocol."
  ) +
  gsi::callback ("begin_create_instances", &EditorHooksImpl::begin_create_instances, &EditorHooksImpl::f_begin_create_instances, gsi::arg ("cellview"),
    "@brief Instance creation protocol - begin session\n"
    "This method is called to initiate an instance creation session. The session is ended with "
    "\\end_create_instances. Between these calls, new objects are announced with \\begin_new_instances, "
    "\\create_instance and \\end_new_instances calls. These calls are repeated to indicate changes in the objects "
    "created.\n"
    "\n"
    "\\commit_instances is called once before \\end_create_instances to indicate that the last set of "
    "objects is committed to the database."
  ) +
  gsi::callback ("begin_new_instances", &EditorHooksImpl::begin_new_instances, &EditorHooksImpl::f_begin_new_instances,
    "@brief Instance creation protocol - begin new instances\n"
    "See \\begin_create_instances for a description of the protocol."
  ) +
  gsi::callback ("create_instance", &EditorHooksImpl::create_instance, &EditorHooksImpl::f_create_instance, gsi::arg ("instance"), gsi::arg ("view_trans"),
    "@brief Instance creation protocol - indicate a new object\n"
    "See \\begin_create_instances for a description of the protocol."
  ) +
  gsi::callback ("end_new_instances", &EditorHooksImpl::end_new_instances, &EditorHooksImpl::f_end_new_instances,
    "@brief Instance creation protocol - finish list of new instances\n"
    "See \\begin_create_instances for a description of the protocol."
  ) +
  gsi::callback ("commit_instances", &EditorHooksImpl::commit_instances, &EditorHooksImpl::f_commit_instances,
    "@brief Instance creation protocol - commit new objects\n"
    "See \\begin_create_instances for a description of the protocol."
  ) +
  gsi::callback ("end_create_instances", &EditorHooksImpl::end_create_instances, &EditorHooksImpl::f_end_create_instances,
    "@brief Instance creation protocol - finish session\n"
    "See \\begin_create for a description of the protocol."
  ) +
  gsi::callback ("begin_modify", &EditorHooksImpl::begin_modify, &EditorHooksImpl::f_begin_modify, gsi::arg ("view"),
    "@brief Modification protocol - begin session\n"
    "This method is called to initiate an object modification session. The session is ended with "
    "\\end_modify. Between these calls, modified objects are announced with \\begin_modifications, "
    "\\modified and \\end_modifications calls. These calls are repeated to indicate changes in the objects "
    "modified while moving the mouse for example.\n"
    "\n"
    "\\commit_modify is called once before \\end_modify to indicate that the last set of "
    "objects are committed to the database."
  ) +
  gsi::callback ("begin_modifications", &EditorHooksImpl::begin_modifications, &EditorHooksImpl::f_begin_modifications,
    "@brief Modification protocol - begin modifications\n"
    "See \\begin_modify for a description of the protocol."
  ) +
  gsi::callback ("modified", &EditorHooksImpl::modified, &EditorHooksImpl::f_modified, gsi::arg ("object"), gsi::arg ("view_trans"),
    "@brief Modification protocol - indicate a modified object\n"
    "See \\begin_modify for a description of the protocol."
  ) +
  gsi::callback ("end_modifications", &EditorHooksImpl::end_modifications, &EditorHooksImpl::f_end_modifications,
    "@brief Modification protocol - finish list of modifications\n"
    "See \\begin_modify for a description of the protocol."
  ) +
  gsi::callback ("commit_modify", &EditorHooksImpl::commit_modify, &EditorHooksImpl::f_commit_modify,
    "@brief Modification protocol - commit new objects\n"
    "See \\begin_modify for a description of the protocol."
  ) +
  gsi::callback ("end_modify", &EditorHooksImpl::end_modify, &EditorHooksImpl::f_end_modify,
    "@brief Modification protocol - finish session\n"
    "See \\begin_modify for a description of the protocol."
  ) +
  gsi::callback ("begin_edit", &EditorHooksImpl::begin_edit, &EditorHooksImpl::f_begin_edit, gsi::arg ("view"),
    "@brief Editing protocol - begin session\n"
    "This method is called to initiate an object editing session. The session is ended with "
    "\\end_edit. Between these calls, edits are announced with \\begin_edits, "
    "\\transformed and \\end_edits calls. These calls are repeated to indicate changes in the objects "
    "modified while moving the mouse for example.\n"
    "\n"
    "\\commit_edit is called once before \\end_edit to indicate that the last set of "
    "objects are committed to the database."
  ) +
  gsi::callback ("begin_edits", &EditorHooksImpl::begin_edits, &EditorHooksImpl::f_begin_edits,
    "@brief Editing protocol - begin edits\n"
    "See \\begin_edit for a description of the protocol."
  ) +
  gsi::callback ("transformed", &EditorHooksImpl::transformed, &EditorHooksImpl::f_transformed, gsi::arg ("object"), gsi::arg ("applied_trans"), gsi::arg ("view_trans"),
    "@brief Editing protocol - indicate an object transformation\n"
    "See \\begin_edit for a description of the protocol.\n"
    "\n"
    "@param object A path to the modified object\n"
    "@param applied_trans The DBU-space of the transformation applied to the object\n"
    "@param view_trans The combined transformation of DBU space to view space\n"
  ) +
  gsi::callback ("end_edits", &EditorHooksImpl::end_edits, &EditorHooksImpl::f_end_edits,
    "@brief Editing protocol - finish list of edits\n"
    "See \\begin_edit for a description of the protocol."
  ) +
  gsi::callback ("commit_edit", &EditorHooksImpl::commit_edit, &EditorHooksImpl::f_commit_edit,
    "@brief Editing protocol - commit new objects\n"
    "See \\begin_edit for a description of the protocol."
  ) +
  gsi::callback ("end_edit", &EditorHooksImpl::end_edit, &EditorHooksImpl::f_end_edit,
    "@brief Editing protocol - finish session\n"
    "See \\begin_edit for a description of the protocol."
  ) +
  gsi::method ("technology=", &EditorHooksImpl::set_technology, gsi::arg ("technology"),
    "@brief sets the name of the technology the hooks are associated with\n"
    "This will clear all technology associations and associate the hooks with that technology only.\n"
  ) +
  gsi::method ("clear_technologies", &EditorHooksImpl::clear_technologies,
    "@brief Clears the list of technologies the hooks are associated with.\n"
    "See also \\add_technology.\n"
  ) +
  gsi::method ("add_technology", &EditorHooksImpl::add_technology, gsi::arg ("tech"),
    "@brief Additionally associates the hooks with the given technology.\n"
    "See also \\clear_technologies.\n"
  ) +
  gsi::method ("is_for_technology", &EditorHooksImpl::is_for_technology, gsi::arg ("tech"),
    "@brief Returns a value indicating whether the hooks are associated with the given technology.\n"
  ) +
  gsi::method ("for_technologies", &EditorHooksImpl::for_technologies,
    "@brief Returns a value indicating whether the hooks are associated with any technology.\n"
    "The method is equivalent to checking whether the \\technologies list is empty.\n"
  ) +
  gsi::method ("technologies", &EditorHooksImpl::get_technologies,
    "@brief Gets the list of technologies these hooks are associated with.\n"
  ) +
  gsi::method ("name", &EditorHooksImpl::name,
    "@brief Gets the name of the hooks object.\n"
    "This is the name, the object was registered under in the system."
  ) +
  gsi::method_ext ("register", &register_editor_hooks, gsi::arg ("name"),
    "@brief Registers the hooks in the system.\n"
    "The hooks will not be active before they are registered in the system. Registration will "
    "also transfer object ownership to the system.\n"
    "\n"
    "The name is arbitary, but should be unique. Upon registration, this hooks object will "
    "replace others with the same name already registered in the system. This will simplify "
    "debugging as you can re-run the same code, without accumulating hooks.\n"
  ),
  "@brief An implementation base class for editor hooks\n"
  "\n"
  "Editor hooks allow implementing technology-specific callbacks into the editor "
  "for example to implement visual feedback about DRC rules.\n"
  "\n"
  "This class provides the basic interface. To implement callbacks, use the \\EditorHooks class. "
  "You should not need to instantiate this class.\n"
  "\n"
  // @@@
  "\n"
  "The EditorHooks class has been introduced in version 0.29."
);

}

