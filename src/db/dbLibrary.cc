
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


#include "dbLibrary.h"
#include "dbLibraryProxy.h"
#include "dbPCellDeclaration.h"
#include "dbPCellVariant.h"

namespace db
{

Library::Library()
  : m_id (0), m_layout (true)
{
  // .. nothing yet ..
}

Library::Library(const Library &d)
  : gsi::ObjectBase (), m_name (d.m_name), m_description (d.m_description), m_id (0), m_layout (d.m_layout)
{
  // .. nothing yet ..
}

Library::~Library ()
{
  // .. nothing yet ..
}

void 
Library::register_proxy (db::LibraryProxy *lib_proxy, db::Layout *ly)
{
  m_referrers.insert (std::make_pair (ly, 0)).first->second += 1;
  m_refcount.insert (std::make_pair (lib_proxy->library_cell_index (), 0)).first->second += 1;
}

void 
Library::unregister_proxy (db::LibraryProxy *lib_proxy, db::Layout *ly)
{
  std::map<db::Layout *, int>::iterator r = m_referrers.find (ly);
  if (r != m_referrers.end ()) {
    if (! --r->second) {
      m_referrers.erase (r);
    }
  }

  std::map<db::cell_index_type, int>::iterator c = m_refcount.find (lib_proxy->library_cell_index ());
  if (c != m_refcount.end ()) {
    if (! --c->second) {
      db::cell_index_type ci = c->first;
      m_refcount.erase (c);
      //  remove cells which are itself proxies and are no longer used
      if (layout ().cell (ci).is_proxy () && layout ().cell (ci).parent_cells () == 0) {
        layout ().delete_cell (ci);
      }
    }
  }
}

void 
Library::remap_to (db::Library *other)
{
  //  Hint: in the loop over the referrers we might unregister (delete from m_referrers) a referrer because no more cells refer to us.
  //  Hence we must not directly iterate of m_referrers.
  std::vector<std::pair<db::Layout *, int> > referrers;
  for (std::map<db::Layout *, int>::const_iterator r = m_referrers.begin (); r != m_referrers.end (); ++r) {
    referrers.push_back (*r);
  }

  //  Remember the layouts that will finally need a cleanup
  std::set<db::Layout *> needs_cleanup;

  for (std::vector<std::pair<db::Layout *, int> >::const_iterator r = referrers.begin (); r != referrers.end (); ++r) {

    std::vector<std::pair<db::LibraryProxy *, db::PCellVariant *> > pcells_to_map;
    std::vector<db::LibraryProxy *> lib_cells_to_map;

    for (db::Layout::iterator c = r->first->begin (); c != r->first->end (); ++c) {

      db::LibraryProxy *lib_proxy = dynamic_cast<db::LibraryProxy *> (&*c);
      if (lib_proxy && lib_proxy->lib_id () == get_id ()) {

        db::Cell *lib_cell = &layout ().cell (lib_proxy->library_cell_index ());
        db::PCellVariant *lib_pcell = dynamic_cast <db::PCellVariant *> (lib_cell);
        if (lib_pcell) {
          pcells_to_map.push_back (std::make_pair (lib_proxy, lib_pcell));
        } else {
          lib_cells_to_map.push_back (lib_proxy);
        }

        needs_cleanup.insert (r->first);

      }

    }

    //  We do PCell resolution before the library proxy resolution. The reason is that 
    //  PCell's may generate library proxies in their instantiation. Hence we must instantiate
    //  the PCells before we can resolve them.
    for (std::vector<std::pair<db::LibraryProxy *, db::PCellVariant *> >::const_iterator lp = pcells_to_map.begin (); lp != pcells_to_map.end (); ++lp) {

      db::cell_index_type ci = lp->first->Cell::cell_index ();
      db::PCellVariant *lib_pcell = lp->second;

      std::pair<bool, pcell_id_type> pn (false, 0);
      if (other) {
        pn = other->layout ().pcell_by_name (lp->first->get_basic_name ().c_str ());
      }

      if (! pn.first) {

        std::string name = r->first->cell_name (ci);
        db::Cell *old_cell = r->first->take_cell (ci);
        r->first->insert_cell (ci, name, new db::Cell (*old_cell));
        delete old_cell;

      } else {

        const db::PCellDeclaration *old_pcell_decl = layout ().pcell_declaration (lib_pcell->pcell_id ());
        const db::PCellDeclaration *new_pcell_decl = other->layout ().pcell_declaration (pn.second);
        if (! old_pcell_decl || ! new_pcell_decl) {

          std::string name = r->first->cell_name (ci);
          db::Cell *old_cell = r->first->take_cell (ci);
          r->first->insert_cell (ci, name, new db::Cell (*old_cell));
          delete old_cell;

        } else {

          //  map pcell parameters by name
          std::map<std::string, tl::Variant> param_by_name = lib_pcell->parameters_by_name ();
          lp->first->remap (other->get_id (), other->layout ().get_pcell_variant (pn.second, new_pcell_decl->map_parameters (param_by_name)));

        }

      }

    }

    for (std::vector<db::LibraryProxy *>::const_iterator lp = lib_cells_to_map.begin (); lp != lib_cells_to_map.end (); ++lp) {

      db::cell_index_type ci = (*lp)->Cell::cell_index ();

      std::pair<bool, cell_index_type> cn (false, 0);
      if (other) {
        cn = other->layout ().cell_by_name ((*lp)->get_basic_name ().c_str ());
      }

      if (! cn.first) {

        //  unlink this proxy
        std::string name = r->first->cell_name (ci);
        db::Cell *old_cell = r->first->take_cell (ci);
        r->first->insert_cell (ci, name, new db::Cell (*old_cell));
        delete old_cell;

      } else {

        (*lp)->remap (other->get_id (), cn.second);

      }

    }

  }

  //  Do a cleanup later since the referrers now might have invalid proxy instances
  for (std::set<db::Layout *>::const_iterator c = needs_cleanup.begin (); c != needs_cleanup.end (); ++c) {
    (*c)->cleanup ();
  }
}

}

