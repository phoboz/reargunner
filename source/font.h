
// faster drawing routines
DEFINE(MINUS)
  move_rel_xy(4,8),  // to 8,4
  line_rel_xy(14,0), // to 8,20
  move_rel_xy(4,-8), // to 0,24
ENDDEF(MINUS)

DEFINE(SCORE)
  line_rel_xy(16,0), // to 16,0
  line_rel_xy(0,12), // to 16,12
  line_rel_xy(-16,0), // to 0,12
  line_rel_xy(0,12), // to 0,24
  line_rel_xy(16,0), // to 16,24
  move_rel_xy(8,0), // to 24,24
  line_rel_xy(16,0), // to 40,24
  move_rel_xy(0,-24), // to 40,0
  line_rel_xy(-16,0), // to 24,0
  line_rel_xy(0,24), // to 24,24
  move_rel_xy(24,0), // to 48,24
  line_rel_xy(16,0), // to 64,24
  line_rel_xy(0,-24), // to 64,0
  line_rel_xy(-16,0), // to 48,0
  line_rel_xy(0,24), // to 48,24
  move_rel_xy(40,-24), // to 88,0
  line_rel_xy(-4,12), // to 84,12
  move_rel_xy(-12,0), // to 72,12
  line_rel_xy(16,0), // to 88,12
  line_rel_xy(0,12), // to 88,24
  line_rel_xy(-16,0), // to 72,24
  line_rel_xy(0,-24), // to 72,0
  move_rel_xy(40,0), // to 112,0
  line_rel_xy(-16,0), // to 96,0
  line_rel_xy(0,24), // to 96,24
  move_rel_xy(0,-12), // to 96,12
  line_rel_xy(8,0), // to 104,12
  move_rel_xy(-8,12), // to 96,24
  line_rel_xy(16,0), // to 112,24
ENDDEF(SCORE)

DEFINE(HIGH_SCORE)
  line_rel_xy(0,24), // to 0,24
  move_rel_xy(0,-12), // to 0,12
  line_rel_xy(16,0), // to 16,12
  move_rel_xy(0,-12), // to 16,0
  line_rel_xy(0,24), // to 16,24
  move_rel_xy(16,-24), // to 32,0
  line_rel_xy(0,24), // to 32,24
  move_rel_xy(24,-12), // to 56,12
  line_rel_xy(8,0), // to 64,12
  line_rel_xy(0,-12), // to 64,0
  line_rel_xy(-16,0), // to 48,0
  line_rel_xy(0,24), // to 48,24
  line_rel_xy(16,0), // to 64,24
  move_rel_xy(8,-24), // to 72,0
  line_rel_xy(0,24), // to 72,24
  move_rel_xy(0,-12), // to 72,12
  line_rel_xy(16,0), // to 88,12
  move_rel_xy(0,-12), // to 88,0
  line_rel_xy(0,24), // to 88,24
  move_rel_xy(32,-24), // to 120,0
  line_rel_xy(16,0), // to 136,0
  line_rel_xy(0,12), // to 136,12
  line_rel_xy(-16,0), // to 120,12
  line_rel_xy(0,12), // to 120,24
  line_rel_xy(16,0), // to 136,24
  move_rel_xy(8,0), // to 144,24
  line_rel_xy(16,0), // to 160,24
  move_rel_xy(0,-24), // to 160,0
  line_rel_xy(-16,0), // to 144,0
  line_rel_xy(0,24), // to 144,24
  move_rel_xy(24,0), // to 168,24
  line_rel_xy(16,0), // to 184,24
  line_rel_xy(0,-24), // to 184,0
  line_rel_xy(-16,0), // to 168,0
  line_rel_xy(0,24), // to 168,24
  move_rel_xy(40,-24), // to 208,0
  line_rel_xy(-4,12), // to 204,12
  move_rel_xy(-12,0), // to 192,12
  line_rel_xy(16,0), // to 208,12
  line_rel_xy(0,12), // to 208,24
  line_rel_xy(-16,0), // to 192,24
  line_rel_xy(0,-24), // to 192,0
  move_rel_xy(40,0), // to 232,0
  line_rel_xy(-16,0), // to 216,0
  line_rel_xy(0,24), // to 216,24
  move_rel_xy(0,-12), // to 216,12
  line_rel_xy(8,0), // to 224,12
  move_rel_xy(-8,12), // to 216,24
  line_rel_xy(16,0), // to 232,24
ENDDEF(HIGH_SCORE)

DEFINE(CREDITS)
  move_rel_xy(0,24), // to 0,24
  line_rel_xy(16,0), // to 16,24
  move_rel_xy(0,-24), // to 16,0
  line_rel_xy(-16,0), // to 0,0
  line_rel_xy(0,24), // to 0,24
  move_rel_xy(40,-24), // to 40,0
  line_rel_xy(-4,12), // to 36,12
  move_rel_xy(-12,0), // to 24,12
  line_rel_xy(16,0), // to 40,12
  line_rel_xy(0,12), // to 40,24
  line_rel_xy(-16,0), // to 24,24
  line_rel_xy(0,-24), // to 24,0
  move_rel_xy(40,0), // to 64,0
  line_rel_xy(-16,0), // to 48,0
  line_rel_xy(0,24), // to 48,24
  move_rel_xy(0,-12), // to 48,12
  line_rel_xy(8,0), // to 56,12
  move_rel_xy(-8,12), // to 48,24
  line_rel_xy(16,0), // to 64,24
  move_rel_xy(8,0), // to 72,24
  line_rel_xy(12,0), // to 84,24
  line_rel_xy(4,-12), // to 88,12
  line_rel_xy(-4,-12), // to 84,0
  line_rel_xy(-12,0), // to 72,0
  line_rel_xy(0,24), // to 72,24
  move_rel_xy(32,-24), // to 104,0
  line_rel_xy(0,24), // to 104,24
  move_rel_xy(16,0), // to 120,24
  line_rel_xy(16,0), // to 136,24
  move_rel_xy(-8,0), // to 128,24
  line_rel_xy(0,-24), // to 128,0
  move_rel_xy(16,0), // to 144,0
  line_rel_xy(16,0), // to 160,0
  line_rel_xy(0,12), // to 160,12
  line_rel_xy(-16,0), // to 144,12
  line_rel_xy(0,12), // to 144,24
  line_rel_xy(16,0), // to 160,24
  move_rel_xy(30,-24), // to 190,0
ENDDEF(CREDITS)

DEFINE(INSERT_COIN)
  move_rel_xy(8,0), // to 8,0
  line_rel_xy(0,24), // to 8,24
  move_rel_xy(16,-24), // to 24,0
  line_rel_xy(0,24), // to 24,24
  line_rel_xy(16,-24), // to 40,0
  line_rel_xy(0,24), // to 40,24
  move_rel_xy(8,-24), // to 48,0
  line_rel_xy(16,0), // to 64,0
  line_rel_xy(0,12), // to 64,12
  line_rel_xy(-16,0), // to 48,12
  line_rel_xy(0,12), // to 48,24
  line_rel_xy(16,0), // to 64,24
  move_rel_xy(24,-24), // to 88,0
  line_rel_xy(-16,0), // to 72,0
  line_rel_xy(0,24), // to 72,24
  move_rel_xy(0,-12), // to 72,12
  line_rel_xy(8,0), // to 80,12
  move_rel_xy(-8,12), // to 72,24
  line_rel_xy(16,0), // to 88,24
  move_rel_xy(24,-24), // to 112,0
  line_rel_xy(-4,12), // to 108,12
  move_rel_xy(-12,0), // to 96,12
  line_rel_xy(16,0), // to 112,12
  line_rel_xy(0,12), // to 112,24
  line_rel_xy(-16,0), // to 96,24
  line_rel_xy(0,-24), // to 96,0
  move_rel_xy(24,24), // to 120,24
  line_rel_xy(16,0), // to 136,24
  move_rel_xy(-8,0), // to 128,24
  line_rel_xy(0,-24), // to 128,0
  move_rel_xy(40,24), // to 168,24
  line_rel_xy(16,0), // to 184,24
  move_rel_xy(0,-24), // to 184,0
  line_rel_xy(-16,0), // to 168,0
  line_rel_xy(0,24), // to 168,24
  move_rel_xy(24,0), // to 192,24
  line_rel_xy(16,0), // to 208,24
  line_rel_xy(0,-24), // to 208,0
  line_rel_xy(-16,0), // to 192,0
  line_rel_xy(0,24), // to 192,24
  move_rel_xy(32,-24), // to 224,0
  line_rel_xy(0,24), // to 224,24
  move_rel_xy(16,-24), // to 240,0
  line_rel_xy(0,24), // to 240,24
  line_rel_xy(16,-24), // to 256,0
  line_rel_xy(0,24), // to 256,24
ENDDEF(INSERT_COIN)

DEFINE(PRESS_START)
  line_rel_xy(0,24), // to 0,24
  line_rel_xy(16,0), // to 16,24
  line_rel_xy(0,-12), // to 16,12
  line_rel_xy(-16,0), // to 0,12
  move_rel_xy(40,-12), // to 40,0
  line_rel_xy(-4,12), // to 36,12
  move_rel_xy(-12,0), // to 24,12
  line_rel_xy(16,0), // to 40,12
  line_rel_xy(0,12), // to 40,24
  line_rel_xy(-16,0), // to 24,24
  line_rel_xy(0,-24), // to 24,0
  move_rel_xy(40,0), // to 64,0
  line_rel_xy(-16,0), // to 48,0
  line_rel_xy(0,24), // to 48,24
  move_rel_xy(0,-12), // to 48,12
  line_rel_xy(8,0), // to 56,12
  move_rel_xy(-8,12), // to 48,24
  line_rel_xy(16,0), // to 64,24
  move_rel_xy(8,-24), // to 72,0
  line_rel_xy(16,0), // to 88,0
  line_rel_xy(0,12), // to 88,12
  line_rel_xy(-16,0), // to 72,12
  line_rel_xy(0,12), // to 72,24
  line_rel_xy(16,0), // to 88,24
  move_rel_xy(8,-24), // to 96,0
  line_rel_xy(16,0), // to 112,0
  line_rel_xy(0,12), // to 112,12
  line_rel_xy(-16,0), // to 96,12
  line_rel_xy(0,12), // to 96,24
  line_rel_xy(16,0), // to 112,24
  move_rel_xy(32,-24), // to 144,0
  line_rel_xy(16,0), // to 160,0
  line_rel_xy(0,12), // to 160,12
  line_rel_xy(-16,0), // to 144,12
  line_rel_xy(0,12), // to 144,24
  line_rel_xy(16,0), // to 160,24
  move_rel_xy(8,0), // to 168,24
  line_rel_xy(16,0), // to 184,24
  move_rel_xy(-8,0), // to 176,24
  line_rel_xy(0,-24), // to 176,0
  move_rel_xy(32,0), // to 208,0
  line_rel_xy(0,24), // to 208,24
  move_rel_xy(-16,0), // to 192,24
  line_rel_xy(16,0), // to 208,24
  move_rel_xy(-16,-12), // to 192,12
  line_rel_xy(16,0), // to 208,12
  move_rel_xy(-16,12), // to 192,24
  line_rel_xy(0,-24), // to 192,0
  move_rel_xy(40,0), // to 232,0
  line_rel_xy(-4,12), // to 228,12
  move_rel_xy(-12,0), // to 216,12
  line_rel_xy(16,0), // to 232,12
  line_rel_xy(0,12), // to 232,24
  line_rel_xy(-16,0), // to 216,24
  line_rel_xy(0,-24), // to 216,0
  move_rel_xy(24,24), // to 240,24
  line_rel_xy(16,0), // to 256,24
  move_rel_xy(-8,0), // to 248,24
  line_rel_xy(0,-24), // to 248,0
ENDDEF(PRESS_START)

DEFINE(N0)
  move_rel_xy(0,24), // to 0,24
  line_rel_xy(16,0), // to 16,24
  line_rel_xy(0,-24), // to 16,0
  line_rel_xy(-16,0), // to 0,0
  line_rel_xy(0,24), // to 0,24
  move_rel_xy(24,-24), // to 24,0
ENDDEF(N0)

DEFINE(N1)
  move_rel_xy(8,0), // to 8,0
  line_rel_xy(0,24), // to 8,24
  move_rel_xy(16,-24), // to 24,0
ENDDEF(N1)

DEFINE(N2)
  move_rel_xy(0,24), // to 0,24
  line_rel_xy(16,0), // to 16,24
  line_rel_xy(0,-12), // to 16,12
  line_rel_xy(-16,0), // to 0,12
  line_rel_xy(0,-12), // to 0,0
  line_rel_xy(16,0), // to 16,0
  move_rel_xy(8,0), // to 24,0
ENDDEF(N2)

DEFINE(N3)
  line_rel_xy(16,0), // to 16,0
  move_rel_xy(-8,12), // to 8,12
  line_rel_xy(8,0), // to 16,12
  move_rel_xy(0,-12), // to 16,0
  line_rel_xy(0,24), // to 16,24
  line_rel_xy(-16,0), // to 0,24
  move_rel_xy(24,-24), // to 24,0
ENDDEF(N3)

DEFINE(N4)
  move_rel_xy(0,24), // to 0,24
  line_rel_xy(0,-12), // to 0,12
  line_rel_xy(16,0), // to 16,12
  move_rel_xy(-8,0), // to 8,12
  line_rel_xy(0,-12), // to 8,0
  move_rel_xy(16,0), // to 24,0
ENDDEF(N4)

DEFINE(N5)
  line_rel_xy(16,0), // to 16,0
  line_rel_xy(0,12), // to 16,12
  line_rel_xy(-16,0), // to 0,12
  line_rel_xy(0,12), // to 0,24
  line_rel_xy(16,0), // to 16,24
  move_rel_xy(8,-24), // to 24,0
ENDDEF(N5)

DEFINE(N6)
  move_rel_xy(0,12), // to 0,12
  line_rel_xy(16,0), // to 16,12
  line_rel_xy(0,-12), // to 16,0
  line_rel_xy(-16,0), // to 0,0
  line_rel_xy(0,24), // to 0,24
  move_rel_xy(24,-24), // to 24,0
ENDDEF(N6)

DEFINE(N7)
  move_rel_xy(8,0), // to 8,0
  line_rel_xy(8,24), // to 16,24
  line_rel_xy(-16,0), // to 0,24
  move_rel_xy(24,-24), // to 24,0
ENDDEF(N7)

DEFINE(N8)
  line_rel_xy(16,0), // to 16,0
  move_rel_xy(-16,24), // to 0,24
  line_rel_xy(16,0), // to 16,24
  move_rel_xy(-16,-12), // to 0,12
  line_rel_xy(16,0), // to 16,12
  move_rel_xy(0,12), // to 16,24
  line_rel_xy(0,-24), // to 16,0
  move_rel_xy(-16,24), // to 0,24
  line_rel_xy(0,-24), // to 0,0
  move_rel_xy(24,0), // to 24,0
ENDDEF(N8)

DEFINE(N9)
  move_rel_xy(16,24), // to 16,24
  line_rel_xy(-16,0), // to 0,24
  line_rel_xy(0,-12), // to 0,12
  line_rel_xy(16,0), // to 16,12
  move_rel_xy(0,12), // to 16,24
  line_rel_xy(0,-24), // to 16,0
  move_rel_xy(4,0), // to 24,0
ENDDEF(N9)
