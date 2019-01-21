#ifndef _DIRECTION_H
#define _DIRECTION_H

struct fp_coord
{
	signed long int y;
	signed long int x;
	signed long int scale;
};

void init_fp_coord(
	struct fp_coord *coord,
	signed int y,
	signed int x,
	signed int scale
	);

void get_fp_coord(
	struct fp_coord *coord,
	signed int *y,
	signed int *x,
	signed int *scale
	);

void move_in_direction(
	struct fp_coord *coord,
	unsigned int dir
	);

#endif
