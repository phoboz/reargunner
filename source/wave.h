#ifndef _WAVE_H
#define _WAVE_H

#include "ship.h"

struct wave_element
{
	signed int start_y;
	signed int start_x;
	const struct path *path;
	const signed char* const *ship;
};

struct wave_tracker
{
	unsigned int wave_index;
	unsigned int element_index;
};


extern const struct wave_element* const waves[];

void init_wave_tracker(
	struct wave_tracker *tracker
	);

unsigned int move_wave(
	struct wave_tracker *tracker,
	unsigned int num_ships,
	struct ship *ships
	);

#endif
