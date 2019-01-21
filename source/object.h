#ifndef _OBJECT_H
#define _OBJECT_H

struct object
{
	unsigned int active;
	signed int y, x;
	signed int h, w;
	signed int h_2, w_2;
	signed int scale;
	struct object *prev, *next;
};


void init_object(
	struct object *obj,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	signed int scale,
	struct object **head
	);

void deinit_object(
	struct object *obj,
	struct object **head
	);

#endif
