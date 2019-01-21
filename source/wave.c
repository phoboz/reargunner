// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "wave.h"

// ---------------------------------------------------------------------------

const struct path path_1_1[]=
{
	{	50,		SHIP_TOP_ROTATION_START_FRAME+20		},

	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	30,		SHIP_PREV_FRAME						},

	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},

	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	20,		SHIP_TOP_LEFT_FRAME					},

	{	2,		SHIP_TOP_LEFT_TURN_FRONT_START_FRAME		},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_TOP_LEFT_TURN_FRONT_END_FRAME		},

	{	20,		SHIP_FRONT_FRAME						},

	{	3,		SHIP_FRONT_TURN_BOTTOM_LEFT_START_FRAME	},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_FRONT_TURN_BOTTOM_LEFT_END_FRAME	},

	{	255,		SHIP_HOLD_FRAME						} /* endmarker */
};

const struct path path_1_2[]=
{
	{	50,		SHIP_TOP_ROTATION_START_FRAME+20		},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	60,		SHIP_PREV_FRAME						},

	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_TOP_LEFT_FRAME					},

	{	2,		SHIP_TOP_LEFT_TURN_FRONT_START_FRAME		},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_TOP_LEFT_TURN_FRONT_END_FRAME		},

	{	40,		SHIP_FRONT_FRAME						},

	{	2,		SHIP_FRONT_TURN_UP_START_FRAME			},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},

	{	255,		SHIP_HOLD_FRAME						} /* endmarker */
};

const struct path path_1_3[]=
{
	{	50,		SHIP_TOP_ROTATION_START_FRAME+20		},

	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	30,		SHIP_PREV_FRAME						},

	{	5,		SHIP_PREV_FRAME						},
	{	5,		SHIP_PREV_FRAME						},
	{	5,		SHIP_PREV_FRAME						},
	{	5,		SHIP_PREV_FRAME						},
	{	5,		SHIP_PREV_FRAME						},

	{	3,		SHIP_TOP_RIGHT_TURN_FRONT_START_FRAME	},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_TOP_RIGHT_TURN_FRONT_END_FRAME		},

	{	20,		SHIP_FRONT_FRAME						},

	{	2,		SHIP_FRONT_TURN_BOTTOM_RIGHT_START_FRAME	},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},

	{	255,		SHIP_HOLD_FRAME						} /* endmarker */
};

const struct path path_2_1[]=
{
	{	30,		SHIP_TOP_LEFT_FRAME					},

	{	2,		SHIP_TOP_ROTATION_START_FRAME			},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},

	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_TOP_ROTATION_START_FRAME			},

	{	2,		SHIP_TOP_ROTATION_END_FRAME				},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	30,		SHIP_HOLD_FRAME						},

	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},
	{	2,		SHIP_PREV_FRAME						},

	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},

	{	10,		SHIP_TOP_LEFT_FRAME					},

	{	2,		SHIP_TOP_LEFT_TURN_FRONT_START_FRAME		},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_TOP_LEFT_TURN_FRONT_END_FRAME		},

	{	5,		SHIP_FRONT_FRAME						},

	{	2,		SHIP_FRONT_TURN_UP_START_FRAME			},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	5,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_FRONT_TURN_UP_START_FRAME			},

	{	5,		SHIP_FRONT_FRAME						},

	{	2,		SHIP_FRONT_TURN_LEFT_START_FRAME		},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	5,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_FRONT_TURN_LEFT_START_FRAME		},

	{	1,		SHIP_FRONT_TURN_BOTTOM_LEFT_START_FRAME	},
	{	1,		SHIP_NEXT_FRAME,						},
	{	1,		SHIP_NEXT_FRAME,						},
	{	1,		SHIP_NEXT_FRAME,						},
	{	1,		SHIP_NEXT_FRAME,						},
	{	1,		SHIP_NEXT_FRAME,						},
	{	1,		SHIP_FRONT_TURN_BOTTOM_LEFT_END_FRAME	},

	{	255,		SHIP_HOLD_FRAME						} /* endmarker */
};

const struct path path_2_2[]=
{
	{	20,		SHIP_TOP_RIGHT_FRAME					},

	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},

	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},

	{	10,		SHIP_HOLD_FRAME						},

	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},

	{	20,		SHIP_HOLD_FRAME						},

	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},
	{	3,		SHIP_NEXT_FRAME						},

	{	10,		SHIP_HOLD_FRAME						},

	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},
	{	3,		SHIP_PREV_FRAME						},

	{	2,		SHIP_TOP_RIGHT_TURN_FRONT_START_FRAME	},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_TOP_RIGHT_TURN_FRONT_END_FRAME		},

	{	10,		SHIP_FRONT_FRAME						},

	{	2,		SHIP_FRONT_TURN_DOWN_START_FRAME		},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_FRONT_TURN_DOWN_END_FRAME			},

	{	50,		SHIP_DOWN_FRAME						},

	{	2,		SHIP_FRONT_TURN_DOWN_END_FRAME			},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_PREV_FRAME,						},
	{	2,		SHIP_FRONT_TURN_DOWN_START_FRAME		},

	{	10,		SHIP_FRONT_FRAME						},

	{	1,		SHIP_FRONT_TURN_RIGHT_START_FRAME		},
	{	1,		SHIP_NEXT_FRAME,						},
	{	1,		SHIP_NEXT_FRAME,						},
	{	1,		SHIP_NEXT_FRAME,						},

	{	255,		SHIP_HOLD_FRAME						} /* endmarker */
};

const struct path path_2_3[]=
{
	{	80,		SHIP_TOP_LEFT_FRAME					},

	{	2,		SHIP_TOP_LEFT_TURN_FRONT_START_FRAME		},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_NEXT_FRAME						},
	{	2,		SHIP_TOP_LEFT_TURN_FRONT_END_FRAME		},

	{	20,		SHIP_FRONT_FRAME						},

	{	2,		SHIP_FRONT_TURN_RIGHT_START_FRAME		},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_NEXT_FRAME,						},
	{	2,		SHIP_FRONT_TURN_RIGHT_END_FRAME			},

	{	36,		SHIP_RIGHT_FRAME						},

	{	255,		SHIP_HOLD_FRAME						} /* endmarker */
};

const struct wave_element wave_1[]=
{
	{	-120,	80,		path_1_1,		ship1	},
	{	-120,	100,		path_1_2,		ship1	},
	{	-120,	120,		path_1_3,		ship1	},
	{	0,		120,		path_2_1,		ship3	},
	{	0,		-120,	path_2_2,		ship3	},
	{	40,		120,		path_2_3,		ship3	},
	{	0,		0,		0,			0		}	/* endmarker */
};

const struct wave_element* const waves[]=
{
	wave_1,
	0			/* endmarker */
};

void init_wave_tracker(
	struct wave_tracker *tracker
	)
{
	tracker->wave_index	= 0;
	tracker->element_index	= 0;
}

unsigned int move_wave(
	struct wave_tracker *tracker,
	unsigned int num_ships,
	struct ship *ships
	)
{
	unsigned int i;
	unsigned int wave_done = 0;

	for (i = 0; i < num_ships; i++)
	{
		init_ship(
			&ships[i],
			waves[tracker->wave_index][tracker->element_index].start_y,
			waves[tracker->wave_index][tracker->element_index].start_x,
			0,
			0,
			waves[tracker->wave_index][tracker->element_index].path,
			waves[tracker->wave_index][tracker->element_index].ship
			);

		if (waves[tracker->wave_index][++tracker->element_index].path == 0)
		{
			tracker->element_index = 0;
			if (waves[++tracker->wave_index] == 0)
			{
				tracker->wave_index = 0;
			}
			wave_done = 1;
			break;
		}
	}

	return wave_done;
}

// ***************************************************************************
// end of file
// ***************************************************************************
