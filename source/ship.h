#ifndef _SHIP_H
#define _SHIP_H

#include "object.h"
#include "direction.h"

#define SHIP_NO_CLIP

#define SHIP_MOVE_SCALE	0x80
#define SHIP_DRAW_SCALE	0x08

#define SHIP_MIN_Y			-120
#define SHIP_MAX_Y			120
#define SHIP_MIN_X			-120
#define SHIP_MAX_X			120

#define SHIP_NEXT_FRAME						129
#define SHIP_PREV_FRAME						130
#define SHIP_HOLD_FRAME						131
#define SHIP_MAX_FRAMES						128
#define SHIP_TOP_LEFT_FRAME						0
#define SHIP_TOP_RIGHT_FRAME					12
#define SHIP_TOP_ROTATION_START_FRAME			1
#define SHIP_TOP_ROTATION_END_FRAME				23
#define SHIP_TOP_LEFT_TURN_FRONT_START_FRAME		24
#define SHIP_TOP_LEFT_TURN_FRONT_END_FRAME		30
#define SHIP_FRONT_FRAME						31
#define SHIP_FRONT_TURN_LEFT_START_FRAME			32
#define SHIP_FRONT_TURN_LEFT_END_FRAME			38
#define SHIP_LEFT_FRAME						39
#define SHIP_FRONT_TURN_RIGHT_START_FRAME			40
#define SHIP_FRONT_TURN_RIGHT_END_FRAME			46
#define SHIP_RIGHT_FRAME						47
#define SHIP_FRONT_TURN_UP_START_FRAME			48
#define SHIP_FRONT_TURN_UP_END_FRAME				54
#define SHIP_UP_FRAME							55
#define SHIP_FRONT_TURN_DOWN_START_FRAME			56
#define SHIP_FRONT_TURN_DOWN_END_FRAME			62
#define SHIP_DOWN_FRAME						63
#define SHIP_FRONT_TURN_BOTTOM_LEFT_START_FRAME	64
#define SHIP_FRONT_TURN_BOTTOM_LEFT_END_FRAME		70
#define SHIP_BOTTOM_LEFT						71
#define SHIP_FRONT_TURN_BOTTOM_RIGHT_START_FRAME	72
#define SHIP_FRONT_TURN_BOTTOM_RIGHT_END_FRAME	78
#define SHIP_BOTTOM_RIGHT						79
#define SHIP_TOP_RIGHT_TURN_FRONT_START_FRAME		80
#define SHIP_TOP_RIGHT_TURN_FRONT_END_FRAME		86

struct path
{
	unsigned int treshold;
	unsigned int frame;
};

struct ship
{
	struct object obj;
	struct fp_coord coord;
	unsigned int path_index;
	unsigned int counter;
	const struct path *path;
	unsigned int curr_frame;
	const signed char* const *shapes;
};

extern const signed char* const ship1[];
extern const signed char* const ship3[];
extern struct object *ship_list;

void init_ship(
	struct ship *ship,
	signed int y,
	signed int x,
	signed int w,
	signed int h,
	const struct path *path,
	const signed char* const *shapes
	);

unsigned int move_ship(
	struct ship *ship
	);

unsigned int move_ships(void);
void draw_ships(void);

#endif
