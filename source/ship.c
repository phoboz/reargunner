// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "draw.h"
#include "ship.h"

// ---------------------------------------------------------------------------

struct object *ship_list = 0;

void init_ship(
	struct ship *ship,
	signed int y,
	signed int x,
	signed int w,
	signed int h,
	const struct path *path,
	const signed char* const *shapes
	)
{
	init_fp_coord(&ship->coord, y, x, 0);
	init_object(&ship->obj, x, y, w, h, 0, &ship_list);

	ship->path_index	= 0;
	ship->counter		= 0;
	ship->path		= path;

	ship->curr_frame	= ship->path[0].frame;
	ship->shapes		= shapes;
}

void deinit_ship(
	struct ship *ship
	)
{
	deinit_object(&ship->obj, &ship_list);
}

unsigned int move_ships(void)
{
	unsigned int frame;
	unsigned int path_done = 0;
	struct ship *rem_ship = 0;
	struct ship *ship = (struct ship *) ship_list;

	while (ship != 0)
	{
		move_in_direction(&ship->coord, ship->curr_frame);
		get_fp_coord(&ship->coord, &ship->obj.y, &ship->obj.x, &ship->obj.scale);

		if (++ship->counter >= ship->path[ship->path_index].treshold)
		{
			ship->counter = 0;

			if (ship->path[++ship->path_index].treshold == 255)
			{
				ship->path_index = 0;
				path_done = 1;
				rem_ship = ship;
			}
			else
			{
				frame = ship->path[ship->path_index].frame;
				if (frame < SHIP_MAX_FRAMES)
				{
					ship->curr_frame = frame;
				}
				else if (frame == SHIP_NEXT_FRAME)
				{
					ship->curr_frame++;
				}
				else if (frame == SHIP_PREV_FRAME)
				{
					ship->curr_frame--;
				}
			}
		}

#ifndef SHIP_NO_CLIP
		if (ship->obj.y < SHIP_MIN_Y)
		{
			ship->obj.y = SHIP_MIN_Y;
			path_done = 1;
			rem_ship = ship;
		}
		else if (ship->obj.y > SHIP_MAX_Y)
		{
			ship->obj.y = SHIP_MAX_Y;
			path_done = 1;
			rem_ship = ship;
		}

		if (ship->obj.x < SHIP_MIN_X)
		{
			ship->obj.x = SHIP_MIN_X;
			path_done = 1;
			rem_ship = ship;
		}
		else if (ship->obj.x > SHIP_MAX_X)
		{
			ship->obj.x = SHIP_MAX_X;
			path_done = 1;
			rem_ship = ship;
		}
#endif

		ship = (struct ship *) ship->obj.next;

		if (rem_ship != 0)
		{
			deinit_ship(rem_ship);
		}
	}

	return path_done;
}

void draw_ships(void)
{
	struct ship *ship = (struct ship *) ship_list;

	while (ship != 0)
	{
		draw_synced_list_c(
			ship->shapes[ship->curr_frame],
			ship->obj.y,
			ship->obj.x,
			SHIP_MOVE_SCALE,
			SHIP_DRAW_SCALE + (unsigned int) ship->obj.scale
			);
		ship = (struct ship *) ship->obj.next;
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
