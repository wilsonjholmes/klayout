
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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

#if !defined(HAVE_QT)

#include "gsiDecl.h"
#include "gsiSignals.h"
#include "layLayoutView.h"
#include "laybasicCommon.h"

namespace gsi
{

static lay::LayoutView *new_view2 (bool editable, db::Manager *manager, unsigned int options)
{
  return new lay::LayoutView (manager, editable, 0 /*plugin parent*/, options);
}

extern LAYBASIC_PUBLIC Class<lay::LayoutViewBase> decl_LayoutViewBase;

Class<lay::LayoutView> decl_LayoutView (decl_LayoutViewBase, "lay", "LayoutView",
  gsi::constructor ("new", &new_view2, gsi::arg ("editable", false), gsi::arg ("manager", (db::Manager *) 0, "nil"), gsi::arg ("options", (unsigned int) 0),
    "@brief Creates a standalone view\n"
    "\n"
    "This constructor is for special purposes only. To create a view in the context of a main window, "
    "use \\MainWindow#create_view and related methods.\n"
    "\n"
    "@param editable True to make the view editable\n"
    "@param manager The \\Manager object to enable undo/redo\n"
    "@param options A combination of the values in the LV_... constants\n"
    "\n"
    "This constructor has been introduced in version 0.25.\n"
    "It has been enhanced with the arguments in version 0.27.\n"
  ) +
  gsi::event ("on_image_updated_event", static_cast<tl::Event (lay::LayoutView::*)> (&lay::LayoutView::image_updated_event),
    "@brief An event indicating that the image (\"screenshot\") was updated\n"
    "\n"
    "This event is triggered when calling \\timer."
    "\n"
    "This event has been introduced in version 0.28."
  ) +
  gsi::event ("on_drawing_finished_event", static_cast<tl::Event (lay::LayoutView::*)> (&lay::LayoutView::drawing_finished_event),
    "@brief An event indicating that the image is fully drawn\n"
    "\n"
    "This event is triggered when calling \\timer. "
    "Before this event is issue, a final \\on_image_updated_event may be issued.\n"
    "\n"
    "This event has been introduced in version 0.28."
  ) +
  gsi::method ("current", &lay::LayoutView::current,
    "@brief Returns the current view\n"
    "The current view is the one that is made current by using \\current=.\n"
    "\n"
    "This variation has been introduced for the non-Qt case in version 0.28."
  ) +
  gsi::method ("current=", &lay::LayoutView::set_current, gsi::arg ("view"),
    "@brief Sets the current view\n"
    "See \\current for details.\n"
    "\n"
    "This method has been introduced for the non-Qt case in version 0.28."
  ) +
  gsi::method ("timer", static_cast<void (lay::LayoutView::*) ()> (&lay::LayoutView::timer),
    "@brief A callback required to be called regularily in the non-Qt case.\n"
    "\n"
    "This callback eventually implements the event loop in the non-Qt case. The main task "
    "is to indicate new versions of the layout image while it is drawn. "
    "When a new image has arrived, this method will issue an \\on_image_updated_event. "
    "In the implementation of the latter, \"screenshot\" may be called to retrieve the current image.\n"
    "When drawing has finished, the \\on_drawing_finished_event will be triggered.\n"
    "\n"
    "This method has been introduced in version 0.28."
  ),
  "@brief The view object presenting one or more layout objects\n"
  "\n"
  "The visual part of the view is the tab panel in the main window. The non-visual part "
  "are the redraw thread, the layout handles, cell lists, layer view lists etc. "
  "This object controls these aspects of the view and controls the appearance of the data. "
);

static lay::CellViewRef get_active_cellview_ref ()
{
  lay::LayoutView *view = 0; // @@@ lay::LayoutView::current ();
  if (! view) {
    return lay::CellViewRef ();
  }
  if (view->active_cellview_index () >= 0) {
    return view->active_cellview_ref ();
  } else {
    return lay::CellViewRef ();
  }
}

static lay::LayoutView *get_view (lay::CellViewRef *cv)
{
  return cv->view ()->ui ();
}

static ClassExt<lay::CellViewRef> extdecl_CellView (
  method ("active", &get_active_cellview_ref,
    "@brief Gets the active CellView\n"
    "The active CellView is the one that is selected in the current layout view. This method is "
    "equivalent to\n"
    "@code\n"
    "RBA::LayoutView::current.active_cellview\n"
    "@/code\n"
    "If no CellView is active, this method returns nil.\n"
    "\n"
    "This method has been introduced in version 0.23."
  ) +
  method_ext ("view", &get_view,
    "@brief Gets the view the cellview resides in\n"
    "This reference will be nil if the cellview is not a valid one.\n"
    "This method has been added in version 0.25.\n"
  )
);

static lay::LayoutView *get_view_from_lp (lay::LayerPropertiesNode *node)
{
  return node->view ()->ui ();
}

static ClassExt<lay::LayerPropertiesNode> extdecl_LayerPropertiesNode (
  method_ext ("view", &get_view_from_lp,
    "@brief Gets the view this node lives in\n"
    "\n"
    "This reference can be nil if the node is a orphan node that lives outside a view."
  )
);

}

#endif

