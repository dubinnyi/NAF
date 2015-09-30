/*
 * Copyright 2000-2015 Rochus Keller <mailto:rkeller@nmr.ch>
 *
 * This file is part of the CARA (Computer Aided Resonance Assignment,
 * see <http://cara.nmr.ch/>) NMR Application Framework (NAF) library.
 *
 * The following is the license that applies to this copy of the
 * library. For a license to use the library under conditions
 * other than those described here, please email to rkeller@nmr.ch.
 *
 * GNU General Public License Usage
 * This file may be used under the terms of the GNU General Public
 * License (GPL) versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in
 * the packaging of this file. Please review the following information
 * to ensure GNU General Public Licensing requirements will be met:
 * http://www.fsf.org/licensing/licenses/info/GPLv2.html and
 * http://www.gnu.org/copyleft/gpl.html.
 */

#if !defined(AFX_TILE_H__6A660543_DB29_11D4_B847_00D00918E99C__INCLUDED_)
#define AFX_TILE_H__6A660543_DB29_11D4_B847_00D00918E99C__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include <Lexi/Layout.h>
#include <Lexi/Requisition.h>

namespace Lexi
{
	//* Tile
	//. Dies ist ein Layout, das seine Komponenten entlang der gewünschten
	//. Dimension gleichmässig verteilt.

	class Tile : public Layout
	{
	public:
		Tile(Dimension);
		virtual ~Tile();

		static void computeTileRequest( Dimension d, float alignment,  
			const RequisitionVector& request, Requisition& result );
		//. Hilfsfunktion, welche von verschiedenen anderen Layouts mitverwendet wird.

		//* Overrides from Layout
		virtual void request( const RequisitionVector&, Requisition& result );
		virtual void allocate( const Allocation& given, const RequisitionVector&,
			AllocationVector& result );
	private:
		Dimension d_dim;
		Requisition d_requisition;
	};
}

#endif // !defined(AFX_TILE_H__6A660543_DB29_11D4_B847_00D00918E99C__INCLUDED_)
