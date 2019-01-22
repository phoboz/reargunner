// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "ship.h"

// ---------------------------------------------------------------------------

#ifdef INCLUDE_SHIP3

#define BLOW_UP 6

const signed char ship3_top_left_rotation_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, +14*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +14*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, +14*BLOW_UP, // sync and move to y, x
	(signed char) +0, -7*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -8*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, -2*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +13*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, -13*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +8*BLOW_UP, +12*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, -15*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +18*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, -13*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -10*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +11*BLOW_UP, +10*BLOW_UP, // sync and move to y, x
	(signed char) +0, -16*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, +18*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, -18*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, -14*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +18*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +13*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) +0, -19*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -20*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +19*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +14*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -20*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -20*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +14*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -20*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +19*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, -19*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_8[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -10*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, -14*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +14*BLOW_UP, -4*BLOW_UP, // sync and move to y, x
	(signed char) +0, -19*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, +19*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -14*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +19*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_9[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -8*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, -2*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +12*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) +0, -16*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, -14*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +18*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_10[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, -2*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, +10*BLOW_UP, -11*BLOW_UP, // sync and move to y, x
	(signed char) +0, -13*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +18*BLOW_UP, // mode, y, x
	(signed char) -1, +13*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, +14*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +18*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_11[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, +7*BLOW_UP, -13*BLOW_UP, // sync and move to y, x
	(signed char) +0, -9*BLOW_UP, +19*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, -19*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_12[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, -14*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_13[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -14*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, -19*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, +19*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_14[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, +14*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +1, -4*BLOW_UP, -14*BLOW_UP, // sync and move to y, x
	(signed char) +0, +7*BLOW_UP, +19*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, +12*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -19*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, +14*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -19*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_15[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +8*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, +13*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +1, -8*BLOW_UP, -12*BLOW_UP, // sync and move to y, x
	(signed char) +0, +12*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, -15*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, +15*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, +14*BLOW_UP, // mode, y, x
	(signed char) -1, -18*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +13*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_16[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +10*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, -11*BLOW_UP, -10*BLOW_UP, // sync and move to y, x
	(signed char) +0, +16*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, -18*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +18*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, +14*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, -18*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_17[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +12*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, -13*BLOW_UP, -7*BLOW_UP, // sync and move to y, x
	(signed char) +0, +19*BLOW_UP, +9*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +20*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -19*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_18[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +12*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, -14*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +20*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +20*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_19[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +12*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, -14*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +20*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -19*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +19*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_20[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +10*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, +14*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, -14*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) +0, +19*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -19*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +14*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, -19*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_21[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +8*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +1, -12*BLOW_UP, +8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +16*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) +0, +12*BLOW_UP, -15*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, +14*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, -18*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_22[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -10*BLOW_UP, +11*BLOW_UP, // sync and move to y, x
	(signed char) +0, +13*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, -18*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +12*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -18*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_rotation_23[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, -7*BLOW_UP, +13*BLOW_UP, // sync and move to y, x
	(signed char) +0, +9*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -15*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +14*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +13*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +13*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, +12*BLOW_UP, // sync and move to y, x
	(signed char) +0, -8*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -15*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, +11*BLOW_UP, // sync and move to y, x
	(signed char) +0, -10*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +13*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, -13*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, +9*BLOW_UP, // sync and move to y, x
	(signed char) +0, -10*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -11*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +3*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) +0, -8*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -9*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_left_turn_front_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +9*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -11*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +11*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +12*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -15*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +13*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +14*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_left_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) +1, +1*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +9*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -9*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +9*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -11*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +18*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -13*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +18*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) +1, +1*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +19*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -19*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_right_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) +1, +1*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -4*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -7*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +11*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -9*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +9*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +11*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +11*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +8*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +13*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -11*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +12*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +12*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +13*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +13*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +9*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -15*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +15*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -15*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -13*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +16*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +15*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +15*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +11*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -16*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -14*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +18*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -18*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +18*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -18*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +16*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +11*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -15*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +20*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +20*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_up_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +11*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -17*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -15*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +20*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +20*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -20*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -10*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -7*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +6*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -9*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -9*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +8*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -15*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -15*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -9*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -9*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -10*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +10*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -17*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -12*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -11*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -2*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -14*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +12*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -19*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +19*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -19*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +19*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -14*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +13*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -14*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +13*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +16*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +13*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -20*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -20*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -16*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_down_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +17*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +14*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -20*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -20*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +20*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, -17*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -4*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -6*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -7*BLOW_UP, +9*BLOW_UP, // sync and move to y, x
	(signed char) +0, +7*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, -11*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +0, +12*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +13*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -7*BLOW_UP, +11*BLOW_UP, // sync and move to y, x
	(signed char) +0, +7*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, -13*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +12*BLOW_UP, -9*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, -10*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +15*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -6*BLOW_UP, +12*BLOW_UP, // sync and move to y, x
	(signed char) +0, +7*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, -15*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, -4*BLOW_UP, +13*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, -14*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +18*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +14*BLOW_UP, // sync and move to y, x
	(signed char) +0, +1*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +19*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -19*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -16*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, +16*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_left_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -12*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +17*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +14*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -20*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +20*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -17*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, +14*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -4*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -7*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, -8*BLOW_UP, -6*BLOW_UP, // sync and move to y, x
	(signed char) +0, +8*BLOW_UP, +9*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -10*BLOW_UP, -9*BLOW_UP, // sync and move to y, x
	(signed char) +0, +10*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, +12*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, +9*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -9*BLOW_UP, -11*BLOW_UP, // sync and move to y, x
	(signed char) +0, +10*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +18*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, +10*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -9*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, -8*BLOW_UP, -13*BLOW_UP, // sync and move to y, x
	(signed char) +0, +8*BLOW_UP, +18*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) +0, +9*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -14*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, -6*BLOW_UP, -14*BLOW_UP, // sync and move to y, x
	(signed char) +0, +6*BLOW_UP, +19*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -19*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -13*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_front_turn_bottom_right_7[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +1, -3*BLOW_UP, -15*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, -12*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_right_turn_front_0[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, -14*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, +19*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -19*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_right_turn_front_1[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -17*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +1, +6*BLOW_UP, -13*BLOW_UP, // sync and move to y, x
	(signed char) +0, -10*BLOW_UP, +18*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -20*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +20*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +17*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_right_turn_front_2[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, +9*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +7*BLOW_UP, -11*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +18*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -15*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +12*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +15*BLOW_UP, // mode, y, x
	(signed char) -1, +15*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_right_turn_front_3[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -7*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, +7*BLOW_UP, -9*BLOW_UP, // sync and move to y, x
	(signed char) +0, -13*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, +16*BLOW_UP, // mode, y, x
	(signed char) -1, +13*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +14*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_right_turn_front_4[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +6*BLOW_UP, -6*BLOW_UP, // sync and move to y, x
	(signed char) +0, -12*BLOW_UP, +9*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, -13*BLOW_UP, // draw, y, x
	(signed char) +0, -10*BLOW_UP, +13*BLOW_UP, // mode, y, x
	(signed char) -1, +12*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -18*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +11*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_right_turn_front_5[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -5*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) +0, -9*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +10*BLOW_UP, // mode, y, x
	(signed char) -1, +9*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -16*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ship3_top_right_turn_front_6[]=
{	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -14*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char* const ship3[]=
{	 ship3_top_left_rotation_0, // list of all single vectorlists in this
	 ship3_top_left_rotation_1,
	 ship3_top_left_rotation_2,
	 ship3_top_left_rotation_3,
	 ship3_top_left_rotation_4,
	 ship3_top_left_rotation_5,
	 ship3_top_left_rotation_6,
	 ship3_top_left_rotation_7,
	 ship3_top_left_rotation_8,
	 ship3_top_left_rotation_9,
	 ship3_top_left_rotation_10,
	 ship3_top_left_rotation_11,
	 ship3_top_left_rotation_12,
	 ship3_top_left_rotation_13,
	 ship3_top_left_rotation_14,
	 ship3_top_left_rotation_15,
	 ship3_top_left_rotation_16,
	 ship3_top_left_rotation_17,
	 ship3_top_left_rotation_18,
	 ship3_top_left_rotation_19,
	 ship3_top_left_rotation_20,
	 ship3_top_left_rotation_21,
	 ship3_top_left_rotation_22,
	 ship3_top_left_rotation_23,
	 ship3_top_left_turn_front_0, // list of all single vectorlists in this
	 ship3_top_left_turn_front_1,
	 ship3_top_left_turn_front_2,
	 ship3_top_left_turn_front_3,
	 ship3_top_left_turn_front_4,
	 ship3_top_left_turn_front_5,
	 ship3_top_left_turn_front_6,
	 ship3_top_left_turn_front_7,
	 ship3_front_turn_left_0, // list of all single vectorlists in this
	 ship3_front_turn_left_1,
	 ship3_front_turn_left_2,
	 ship3_front_turn_left_3,
	 ship3_front_turn_left_4,
	 ship3_front_turn_left_5,
	 ship3_front_turn_left_6,
	 ship3_front_turn_left_7,
	 ship3_front_turn_right_0, // list of all single vectorlists in this
	 ship3_front_turn_right_1,
	 ship3_front_turn_right_2,
	 ship3_front_turn_right_3,
	 ship3_front_turn_right_4,
	 ship3_front_turn_right_5,
	 ship3_front_turn_right_6,
	 ship3_front_turn_right_7,
	 ship3_front_turn_up_0, // list of all single vectorlists in this
	 ship3_front_turn_up_1,
	 ship3_front_turn_up_2,
	 ship3_front_turn_up_3,
	 ship3_front_turn_up_4,
	 ship3_front_turn_up_5,
	 ship3_front_turn_up_6,
	 ship3_front_turn_up_7,
	 ship3_front_turn_down_0, // list of all single vectorlists in this
	 ship3_front_turn_down_1,
	 ship3_front_turn_down_2,
	 ship3_front_turn_down_3,
	 ship3_front_turn_down_4,
	 ship3_front_turn_down_5,
	 ship3_front_turn_down_6,
	 ship3_front_turn_down_7,
	 ship3_front_turn_bottom_left_0, // list of all single vectorlists in this
	 ship3_front_turn_bottom_left_1,
	 ship3_front_turn_bottom_left_2,
	 ship3_front_turn_bottom_left_3,
	 ship3_front_turn_bottom_left_4,
	 ship3_front_turn_bottom_left_5,
	 ship3_front_turn_bottom_left_6,
	 ship3_front_turn_bottom_left_7,
	 ship3_front_turn_bottom_right_0, // list of all single vectorlists in this
	 ship3_front_turn_bottom_right_1,
	 ship3_front_turn_bottom_right_2,
	 ship3_front_turn_bottom_right_3,
	 ship3_front_turn_bottom_right_4,
	 ship3_front_turn_bottom_right_5,
	 ship3_front_turn_bottom_right_6,
	 ship3_front_turn_bottom_right_7,
	 ship3_top_right_turn_front_0, // list of all single vectorlists in this
	 ship3_top_right_turn_front_1,
	 ship3_top_right_turn_front_2,
	 ship3_top_right_turn_front_3,
	 ship3_top_right_turn_front_4,
	 ship3_top_right_turn_front_5,
	 ship3_top_right_turn_front_6
};

#endif
// ***************************************************************************
// end of file
// ***************************************************************************
