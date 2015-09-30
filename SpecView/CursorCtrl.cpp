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

#include "CursorCtrl.h"
#include <SpecView/ViewAreaMdl.h>
using namespace Spec;
using namespace Lexi;

CursorCtrl::CursorCtrl(CursorView* v, bool swallow, bool doX, bool doY ):
	d_view( v ), d_swallow( swallow )
{
	assert( v );
	d_do[ DimX ] = doX;
	d_do[ DimY ] = doY;
}

CursorCtrl::~CursorCtrl()
{

}

bool CursorCtrl::handleMousePress( Viewport& v, const Allocation& a, const MouseEvent& e ) 
{ 
    if( ( e.isLeft() && ( e.isNoKey() || e.isAlt() ) ) || ( e.isRight() && e.isShift() ) )
	{
		ViewAreaMdl* area = d_view->getViewArea();
		if( d_do[ DimX ] && d_do[ DimY ] && area->getDimCount() == 2 )
		{
			PPM x = area->toPpm( e.getX(), a.getLeft(), DimX );
			PPM y = area->toPpm( e.getY(), a.getTop(), DimY );
			d_view->getModel()->setCursor( x, y );
		}else if( d_do[ DimX ] && area->inUse( DimX ) )
		{
			PPM x = area->toPpm( e.getX(), a.getLeft(), DimX );
			d_view->getModel()->setCursor( (Dimension) DimX, x );
		}else if( d_do[ DimY ] && area->inUse( DimY ) )
		{
			PPM y = area->toPpm( e.getY(), a.getTop(), DimY );
			d_view->getModel()->setCursor( (Dimension) DimY, y );
		}
		return d_swallow;	// Der Click soll nicht immer gefressen werden.
	}else
		return false;
}

bool CursorCtrl::handleKeyPress( Viewport& v, const Allocation& a, const KeyEvent& e ) 
{
	if( e.isPlainKey() && ( e.isUp() || e.isDown() || e.isLeft() || e.isRight() ) )
	{
		stepCursor( e );
		return true;
	}else if( e.isShift() && !e.isCtrl() &&	( e.isUp() || e.isDown() || e.isLeft() || e.isRight() ) )
	{
		stepCursor( e, 200.0 );
		return true;
	}else
		return false;
}

void CursorCtrl::stepCursor(const KeyEvent & e, float step )
{
	ViewAreaMdl* area = d_view->getViewArea();
    Dimension dim = 0;
	PPM delta = 0;
	// TODO: Richtung hier noch abh�ngig ob Ppm0 > PpmN
	if( e.isUp() )
	{
		dim = DimY;
		delta = -step / area->getTwipPerPpm( dim );
	}else if( e.isDown() )
	{
		dim = DimY;
		delta = step / area->getTwipPerPpm( dim );
	}else if( e.isLeft() )
	{
		dim = DimX;
		delta = -step / area->getTwipPerPpm( dim );
	}else if( e.isRight() )
	{
		dim = DimX;
		delta = step / area->getTwipPerPpm( dim );
	}
	PPM old = d_view->getCursor( dim );
	if( old != CursorView::EMPTY && d_do[ dim ] && area->inUse( dim ) )
	{
		old += delta * area->getRange( dim ).getSign();
		d_view->getModel()->setCursor( dim, old );
	}
}

void CursorCtrl::use(Dimension d, bool on)
{
	assert( d >= DimX && d <= DimY );
	if( d_do[ d ] == on )
		return;
	d_do[ d ] = on;
}
