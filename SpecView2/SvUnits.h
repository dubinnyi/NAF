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

#if !defined(AFX_UNITS_H__8F98CFC4_9D87_11D5_8DB0_00D00918E99C__INCLUDED_)
#define AFX_UNITS_H__8F98CFC4_9D87_11D5_8DB0_00D00918E99C__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include <Root/ActionHandler.h>
#include <Lexi2/LxAllocation.h>
#include <Lexi2/LxRequisition.h>
#include <Lexi2/LxCanvas.h>
#include <Spec/Units.h>
#include <math.h>

namespace Spec2
{
	using namespace Spec;

	using Lexi2::Coord;
	using Lexi2::Allocation;
	using Lexi2::Requisition;
	using Lexi2::Canvas;
	using Root::Float;

	typedef Float TwipPerPpm;
	//. Gibt an, wie breit ein Ppm auf dem Schirm sein soll.
	typedef Float TwipPerSample;

	class ViewAreaMdl;
}	

#endif // !defined(AFX_UNITS_H__8F98CFC4_9D87_11D5_8DB0_00D00918E99C__INCLUDED_)
