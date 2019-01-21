// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "direction.h"

// ---------------------------------------------------------------------------

void init_fp_coord(
	struct fp_coord *coord,
	signed int y,
	signed int x,
	signed int scale
	)
{
	coord->y = (signed long) y << 6L;
	coord->x = (signed long) x << 6L;
	coord->scale = (signed long) scale << 6L;
}

void get_fp_coord(
	struct fp_coord *coord,
	signed int *y,
	signed int *x,
	signed int *scale
	)
{
	*y = (signed int) (coord->y >> 6L);
	*x = (signed int) (coord->x >> 6L);
	*scale = (signed int) (coord->scale >> 6L);
}

struct direction
{
	signed int delta_y;
	signed int delta_x;
	signed int delta_scale;
};

static const struct direction directions[]={
	/* rotation from left, ccw */
	{	0,		-64,		0},	/* 0  */
	{	-16,		-61,		0},	/* 1  */
	{	-32,		-55,		0},	/* 2  */
	{	-45,		-45,		0},	/* 3  */
	{	-55,		-32,		0},	/* 4  */
	{	-61,		-16,		0},	/* 5  */
	{	-64,		0,		0},	/* 6  */
	{	-61,		16,		0},	/* 7  */
	{	-55,		32,		0},	/* 8  */
	{	-45,		45,		0},	/* 9  */
	{	-32,		55,		0},	/* 10 */
	{	-16,		61,		0},	/* 11 */
	{	0,		64,		0},	/* 12 */
	{	16,		61,		0},	/* 13 */
	{	32,		55,		0},	/* 14 */
	{	45,		45,		0},	/* 15 */
	{	55,		32,		0},	/* 16 */
	{	61,		16,		0},	/* 17 */
	{	64,		0,		0},	/* 18 */
	{	61,		-16,		0},	/* 19 */
	{	55,		-32,		0},	/* 20 */
	{	45,		-45,		0},	/* 21 */
	{	32,		-55,		0},	/* 22 */
	{	16,		-61,		0},	/* 23 */

	/* top left turn front */
	{	0,		-62,		12},	/* 24 */
	{	0,		-59,		24},	/* 25 */
	{	0,		-53,		35},	/* 26 */
	{	0,		-45,		45},	/* 27 */
	{	0,		-35,		53},	/* 28 */
	{	0,		-24,		59},	/* 29 */
	{	0,		-12,		62},	/* 30 */

	/* front */
	{	0,		0,		64},	/* 31 */

	/* front turn left */
	{	0,		-12,		62},	/* 32 */
	{	0,		-24,		59},	/* 33 */
	{	0,		-35,		53},	/* 34 */
	{	0,		-45,		45},	/* 35 */
	{	0,		-53,		35},	/* 36 */
	{	0,		-59,		24},	/* 37 */
	{	0,		-62,		12},	/* 38 */

	/* left */
	{	0,		-64,		0},	/* 39 */

	/* front turn right */
	{	0,		12,		62},	/* 40 */
	{	0,		24,		59},	/* 41 */
	{	0,		35,		53},	/* 42 */
	{	0,		45,		45},	/* 43 */
	{	0,		53,		35},	/* 44 */
	{	0,		59,		24},	/* 45 */
	{	0,		62,		12},	/* 46 */

	/* right */
	{	0,		64,		0},	/* 47 */

	/* front turn up */
	{	12,		0,		62},	/* 48 */
	{	24,		0,		59},	/* 49 */
	{	35,		0,		53},	/* 50 */
	{	45,		0,		45},	/* 51 */
	{	53,		0,		35},	/* 52 */
	{	59,		0,		24},	/* 53 */
	{	62,		0,		14}, /* 54 */

	/* up */
	{	64,		0,		0},	/* 55 */

	/* front turn down */
	{	-12,		0,		62},	/* 56 */
	{	-24,		0,		59},	/* 57 */
	{	-35,		0,		53},	/* 58 */
	{	-45,		0,		45},	/* 59 */
	{	-53,		0,		35},	/* 60 */
	{	-59,		0,		24},	/* 61 */
	{	-62,		0,		12},	/* 62 */

	/* down */
	{	-64,		0,		0},	/* 63 */

	/* front turn bottom left */
	{	0,		-14,		62},	/* 64 */
	{	0,		-24,		59},	/* 65 */
	{	0,		-35,		53},	/* 66 */
	{	0,		-45,		45},	/* 67 */
	{	0,		-53,		35},	/* 68 */
	{	0,		-59,		24},	/* 69 */
	{	0,		-62,		12},	/* 70 */

	/* bottom left */
	{	0,		-64,		0},	/* 71 */

	/* front turn bottom right */
	{	0,		14,		62},	/* 72 */
	{	0,		24,		59},	/* 73 */
	{	0,		35,		53},	/* 74 */
	{	0,		45,		45},	/* 75 */
	{	0,		53,		35},	/* 76 */
	{	0,		59,		24},	/* 77 */
	{	0,		62,		12},	/* 78 */

	/* bottom right */
	{	0,		64,		0},	/* 79 */

	/* top right turn front */
	{	0,		62,		12},	/* 80 */
	{	0,		59,		24},	/* 81 */
	{	0,		53,		35},	/* 82 */
	{	0,		45,		45},	/* 83 */
	{	0,		35,		53},	/* 84 */
	{	0,		24,		59},	/* 85 */
	{	0,		12,		62}	/* 86 */
};

void move_in_direction(
	struct fp_coord *coord,
	unsigned int dir
	)
{
#if 1
	unsigned int scale = (unsigned int) (coord->scale >> 6L);

	if (scale < 0x20)
	{
		coord->y		+= 2L * (signed long) directions[dir].delta_y;
		coord->x		+= 2L * (signed long) directions[dir].delta_x;
		coord->scale	+= (signed long) directions[dir].delta_scale;
	}
	else if (scale < 0x30)
	{
		coord->y		+= 4L * (signed long) directions[dir].delta_y;
		coord->x		+= 4L * (signed long) directions[dir].delta_x;
		coord->scale	+= 2L * (signed long) directions[dir].delta_scale;
	}
	else if (scale < 0x40)
	{
		coord->y		+= 6L * (signed long) directions[dir].delta_y;
		coord->x		+= 6L * (signed long) directions[dir].delta_x;
		coord->scale	+= 3L * (signed long) directions[dir].delta_scale;
	}
	else if (scale < 0x50)
	{
		coord->y		+= 8L * (signed long) directions[dir].delta_y;
		coord->x		+= 8L * (signed long) directions[dir].delta_x;
		coord->scale	+= 4L * (signed long) directions[dir].delta_scale;
	}
	else  if (scale < 0x60)
	{
		coord->y		+= 10L * (signed long) directions[dir].delta_y;
		coord->x		+= 10L * (signed long) directions[dir].delta_x;
		coord->scale	+= 5L * (signed long) directions[dir].delta_scale;
	}
	else  if (scale < 0x70)
	{
		coord->y		+= 12L * (signed long) directions[dir].delta_y;
		coord->x		+= 12L * (signed long) directions[dir].delta_x;
		coord->scale	+= 6L * (signed long) directions[dir].delta_scale;
	}
	else  if (scale < 0x80)
	{
		coord->y		+= 14L * (signed long) directions[dir].delta_y;
		coord->x		+= 14L * (signed long) directions[dir].delta_x;
		coord->scale	+= 7L * (signed long) directions[dir].delta_scale;
	}
	else
	{
		coord->y		+= 16L * (signed long) directions[dir].delta_y;
		coord->x		+= 16L * (signed long) directions[dir].delta_x;
		coord->scale	+= 8L * (signed long) directions[dir].delta_scale;
	}
#else
	coord->y	+= (signed long) directions[dir].delta_y;
	coord->x	+= (signed long) directions[dir].delta_x;
	coord->scale += (signed long) directions[dir].delta_scale;
#endif
}

// ***************************************************************************
// end of file
// ***************************************************************************
