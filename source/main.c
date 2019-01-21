#include <vectrex.h>  // I think this is Chris's version.  Planning to switch to Peer's C library
#include "ayfxPlayer.h"
#include "missile_snd.h"

#define debugstr(s) /* ignore */

#define signed16 long
#define unsigned16 unsigned long
#define signed8 signed char
#define unsigned8 unsigned char
#define boolean int

// Under GCC, using default header file/library.

static inline void intensity(unsigned8 brightness) {Intensity_a(brightness);}
static inline void dot(signed8 y, signed8 x) {Dot_d((int)y, (int)x);}
static inline void move(signed8 y, signed8 x) {Moveto_d((int)y, (int)x);}
static inline void reset_beam(void) {Reset0Ref();}
static inline void set_scale(unsigned8 scale) {/*VIA_t1_cnt_lo*/ *(volatile unsigned char *)0xD004 = scale;}
static inline void line(signed8 y, signed8 x) {*(volatile unsigned char *)0xC823 = 0; Draw_Line_d((int)y, (int)x);}
static inline void dots(unsigned8 size, const signed8 *array) { *(volatile char *)0xC823 = size-1; Dot_List((void *)array); }
static inline void displaylist(const signed8 *list) { Draw_VLp((signed8 *)list); }
static inline void wait_retrace(void) {Wait_Recal();}

static inline void rotate_vl(unsigned8 angle, unsigned8 points, const void *original, void *rotated)
{
  *(volatile unsigned int *)0xC836 = angle;
  *(volatile unsigned int *)0xC823 = points-1;
  Rot_VL((int *)original, rotated);
}

#define joybit Joy_Digital
#define tstat (*((volatile unsigned8 *) 0xc856))

#define pot0 (*((volatile signed8 *) 0xc81b))
#define pot1 (*((volatile signed8 *) 0xc81c))
#define pot2 (*((volatile signed8 *) 0xc81d))
#define pot3 (*((volatile signed8 *) 0xc81e))

#define epot0 (*((volatile unsigned8 *) 0xc81f))
#define epot1 (*((volatile unsigned8 *) 0xc820))
#define epot2 (*((volatile unsigned8 *) 0xc821))
#define epot3 (*((volatile unsigned8 *) 0xc822))

#define t1lolc (*((volatile unsigned8 *) 0xd004))

#define read_ram(x) (*((volatile signed8 *) x))

#define joystick1_button1 (signed8)(read_ram(0xC80F) & 1U) /* A */
#define joystick1_button2 (signed8)(read_ram(0xC80F) & 2U) /* S */
#define joystick1_button3 (signed8)(read_ram(0xC80F) & 4U) /* D */
#define joystick1_button4 (signed8)(read_ram(0xC80F) & 8U) /* F */

static signed8 XJoy, YJoy, button1, button2, button3, button4;

static void poll_joystick(void)
{
  joybit();
  if (pot0 < -10) {
    // Left
    XJoy = -1;
  } else if (pot0 > 10) {
	// Right
	XJoy = 1;
  } else {
    XJoy = 0;
  }
  if (pot1 < -10) {
	// Down
	YJoy = -1;
  } else if (pot1 > 10) {
    // Up
	YJoy = 1;
  } else {
    YJoy = 0;
  }
  asm("pshs x,y,u,dp");
  asm("lda  #0");
  asm("jsr  0HF1B4 ; read_btns_mask":::"a","b","d");
  asm("puls dp,u,y,x");
  button1 = joystick1_button1;
  button2 = joystick1_button2;
  button3 = joystick1_button3;
  button4 = joystick1_button4;
}

static void init_hardware(void)
{
	// setup joystick read function to read only joystick 1
	epot0 = 1;
	epot1 = 3;
	epot2 = 0;
	epot3 = 0;
}

#define signed16 long
#define unsigned16 unsigned long
#define signed8 signed char
#define unsigned8 unsigned char
#define boolean int

#define MAX_BRIGHTNESS (0x7f)

static signed16 Debug;

#define IN_ROM __attribute__ ((section(".text")))

/* Shields get a special proc because they're one continuous line */
static const signed8 shieldvec[] IN_ROM = {
   0,  -72,24,
  -1,  24,24,
  -1,  96,-96,
  -1,  24,24,
  -1,  -72,72,
  -1,  -72,-72,
  -1,  24,-24,
  -1,  96,96,
  -1,  24,-24,
  -1,  -72,-72,
  -1,  -72,72,
   1
};

static const signed8 crosshair[] IN_ROM = { 
  0, 17, 40, // trying to move it to the center
  -1, -30, 0,
  0, 15, 20,
  -1, 0, -115,
  0, -15, 20,
  -1, 30, 0,
  0, -10, 20,
  -1, -10, 0,
  0, -10, 10,
  -1, 0, 10,
  0, -15, 10,
  -1, 0, -30,
  0, -20, 15,
  -1, 105, 0,
  0, -20, 15,
  -1, 0, -30,
  0, -20, 10,
  -1, 0, 10,
  0, -10, 10,
  -1, -10, 0,
  1
};


#define DEFINE(name) static const signed8 name[] IN_ROM = {
#define move_rel_xy(x,y) 0 /*MOVE*/, ((signed8)y), ((signed8)x)
#define line_rel_xy(x,y) (signed8)-1 /*LINE*/, ((signed8)y), ((signed8)x)
#define ENDDEF(name) 1 /*STOP*/ }; static void SHOW_##name(void) { displaylist(name); }

#include "font.h"

static const signed8 *digitlist[10] = {
  N0, N1, N2, N3, N4, N5, N6, N7, N8, N9
};

// 16 bit maths, no floats.

static signed16 rseed;
static inline signed16 urandom16(void)
{
  // VECTREX HAS A BUILT-IN RANDOM THAT WE CAN USE!
  // (though it doesn't seem very good - this may be better and faster)
  return (rseed = (rseed * 2053) + 13849);
}

static inline unsigned16 irand(signed16 max) {
  // returns int 0..max-1
  return (unsigned16)(urandom16() % max); // probably not very random, but this is a video game, not crypto
}

static inline signed16 pickrandom(signed16 low, signed16 high)
{
  // We'll just assume that high > low...
  return (signed16)irand(high-low+1)+low;  // pick a random integer between low and high inclusive.
}

static signed8 stardots[8]; // fill with randoms ONCE - could move this into ROM...

static signed8 rotated3[8]; // rotate stardots into place
static signed8 rotated2[8];
static signed8 rotated1[8];
static signed8 rotated0[8];

static signed8 *rotated[4] = {
  rotated0,
  rotated1,
  rotated2,
  rotated3
};

static unsigned8 starfield_scale;

static inline void init_stars(void)
{
  starfield_scale = (unsigned8)0xFF;

  // origin at 0,0
  stardots[0] = -60;                           stardots[1] = (signed8)pickrandom(-45,45);  // LEFT
  stardots[2] = 60;                            stardots[3] = (signed8)pickrandom(-45,45);  // RIGHT
  stardots[4] = (signed8)pickrandom(-45,45);   stardots[5] = 60;                           // TOP
  stardots[6] = (signed8)pickrandom(-45,45);   stardots[7] = -60;                          // BOT

  stardots[6] -= stardots[4]; stardots[7] -= stardots[5]; // abs to rel
  stardots[4] -= stardots[2]; stardots[5] -= stardots[3];
  stardots[2] -= stardots[0]; stardots[3] -= stardots[1];

  rotate_vl((unsigned int)(pickrandom(0,15)), 4U, stardots, rotated0);
  rotate_vl((unsigned int)(pickrandom(16,31)), 4U, stardots, rotated1);
  rotate_vl((unsigned int)(pickrandom(32,47)), 4U, stardots, rotated2);
  rotate_vl((unsigned int)(pickrandom(48,63)), 4U, stardots, rotated3);
}

static void stars(unsigned8 speed) // speed must be a power of 2
{
  unsigned8 shifted_scale;
  signed8 i;

  debugstr("stars");
  // New fast algorithm, does approximate fading with distance.

  shifted_scale = starfield_scale-(unsigned8)0xBF;
  for (i = 0; i < 4; i++) {
    if ((unsigned8)shifted_scale > (unsigned8)0x20) { // disappear here
      reset_beam();
      intensity((shifted_scale>>1)-0x10);
      set_scale(shifted_scale);
      dots(4, rotated[i]);
    } else {
      if (((unsigned8)shifted_scale & (unsigned8)0x3F) == 0U) {
        // pull in new ring of stars
        rotate_vl((unsigned int)(pickrandom(0,63)), 4U, stardots, rotated[i]);
      }
    }
    shifted_scale += 0x40;
  }
  starfield_scale -= speed; // must be power of 2
}


static void position_and_scale(signed8 absx, signed8 absy, signed16 scale)
{
  reset_beam();
  set_scale(0x7f);
  move(absy, absx);
  set_scale((unsigned8)scale);
}

static inline void position_and_scale_and_intensity(signed8 absx, signed8 absy, signed16 scale, unsigned8 bright)
{
  position_and_scale(absx, absy, scale);
  intensity(bright);
}

/* Shields on the vectrex are sideways wrt the 'real' tailgunner */
static void draw_shields(unsigned8 scale)
{
  debugstr("draw_shields");

  position_and_scale(0, 0, scale);
  displaylist(shieldvec);
}

static inline void Draw_crosshair(signed8 absx, signed8 absy)
{
  debugstr("Draw_crosshair");

  position_and_scale(absx, absy, 0x18);
  displaylist(crosshair);
}

/* 3d rendering */

static unsigned8 Credits;

static signed16 frame_number;
static unsigned8 global_flashing_intensity;

static signed16 HighScore;
static signed16 LastScore;
static signed16 Score;

#ifdef NOTYET
static signed16 UsingShields;
static signed16 Shields;
static signed16 shieldsegment;
static signed16 shieldsubticksleft;
#endif

static inline void show_digit(signed8 digit)
{
  displaylist(digitlist[(int)digit]);
}

static void SHOW_NUM(signed16 num, signed8 absx, signed8 absy, unsigned16 scale) { // left-aligned
  signed8 digit, zeroes;

  // If scale is 0, this draws a number starting at the current position, which is at the origin
  // of the previous number offset by the number width.

  if (scale) position_and_scale(absx, absy, 0x20);

  // This replaces code that used divide by 10 and modulo 10.  Much faster.

  // handles full 16 bit range of -32768:32767  -  Uses negative numbers to avoid the issue of negating -32768

  if (num >= 0) num = -num; else SHOW_MINUS();   // TO DO: add a font character for '-'.
  digit = 0;
  zeroes = 1; // CLRing is shorter
  // max 11 add/subtracts...
  if (num <= -20000) { num += 20000; digit += 2; zeroes = 0; }
  if (num <= -10000) { num += 10000; digit += 1; zeroes = 0; }
  if (!zeroes) show_digit(digit);
  digit = 0;
  if (num <= -8000) { num += 8000; digit += 8; zeroes = 0; } else if (num <= -4000) { num += 4000; digit += 4; zeroes = 0; }
  if (num <= -2000) { num += 2000; digit += 2; zeroes = 0; }
  if (num <= -1000) { num += 1000; digit += 1; zeroes = 0; }
  if (!zeroes) show_digit(digit);
  digit = 0;
  if (num <= -800) { num += 800; digit += 8; zeroes = 0; } else if (num <= -400) { num += 400; digit += 4; zeroes = 0; }
  if (num <= -200) { num += 200; digit += 2; zeroes = 0; }
  if (num <= -100) { num += 100; digit += 1; zeroes = 0; }
  if (!zeroes) show_digit(digit);
  digit = 0;
  if (num <= -80) { num += 80; digit += 8; zeroes = 0; } else if (num <= -40) { num += 40; digit += 4; zeroes = 0; }
  if (num <= -20) { num += 20; digit += 2; zeroes = 0; }
  if (num <= -10) { num += 10; digit += 1; zeroes = 0; }
  if (!zeroes) show_digit(digit);
  show_digit((signed8)-num);
}

static void Draw_lastscore(void)
{
  debugstr("Draw_lastscore");
  position_and_scale(-100,127,32);
  SHOW_SCORE();
  SHOW_NUM(LastScore, -98,113, 256);
}

static void Draw_highscore(void)
{
  debugstr("Draw_highscore");
  position_and_scale(40,127,32);
  SHOW_HIGH_SCORE();
  SHOW_NUM(HighScore, 52,113, 256);
}

static void Draw_insertcoin(void) // Not yet used
{
  debugstr("Draw_insertcoin");
  position_and_scale_and_intensity(-36,-80,32, global_flashing_intensity<<1);
  SHOW_INSERT_COIN();
}

static void Draw_start(void)
{
  debugstr("Draw_start");
  position_and_scale_and_intensity(-34,-80,32, global_flashing_intensity<<1);
  SHOW_PRESS_START();
}

static void Draw_credits(void)
{
  debugstr("Draw_credits");
  position_and_scale_and_intensity(-39,-30,48,0x5F);
  SHOW_CREDITS();
  if (Credits > 9U) {
    SHOW_NUM(9, 0,0,0); // display any more than 9 as 9. (This is what many arcade machines did in real life)
  } else {
    SHOW_NUM(Credits, 0,0,0);
  }
}

static void Draw_ships_remaining(void)
{
  SHOW_NUM(10, 90,120, 64);
}

static void Draw_shields_remaining(void)
{
  SHOW_NUM(80, -5,127, 128);
}

static void Draw_score(void)
{
  SHOW_NUM(Score, -100,120, 64);
}

static signed8 crosshair_x, crosshair_y;

void follow_crosshair()
{
XJoy+=XJoy;XJoy+=XJoy;YJoy+=YJoy;YJoy+=YJoy;
  // constrain joysticks but carefully avoid integer overflow
  if ((crosshair_x >= 0) && (XJoy > 0) && (crosshair_x >= 127-XJoy)) /* ignore */;
  else if ((crosshair_x < 0) && (XJoy < 0) && (crosshair_x < -127-XJoy)) /* ignore */;
  else crosshair_x += XJoy;

  if ((crosshair_y >= 0) && (YJoy > 0) && (crosshair_y >= 127-YJoy)) /* ignore */;
  else if ((crosshair_y < 0) && (YJoy < 0) && (crosshair_y < -127-YJoy)) /* ignore */;
  else crosshair_y += YJoy;

  Draw_crosshair(crosshair_x, crosshair_y);
}

static signed8 last_button1;
static void next_frame(void)
{
  // do things here that must be done on every frame, eg polling buttons/joystick
  debugstr("next_frame");
  wait_retrace();
  if (Vec_Music_Flag || sfx_status_1 == 1) {
    Do_Sound();
  }

  poll_joystick();
  if (button1 && !last_button1) { // 'A' for A Coin ;-)
    Credits += 1;
  }
  last_button1 = button1;
  if ((frame_number & 16) == 0) {
    global_flashing_intensity += 4; // 16 frames of getting brighter
  } else {
    global_flashing_intensity -= 4; // then 16 frames of getting darker
  }
  frame_number++; // wraps.
  //if (Debug) SHOW_NUM(Debug, -100,-100, 128);
}

static boolean firing;
static unsigned16 missile_scale;
static signed8 missile_x, missile_y;

static const signed8 paired_missiles[] IN_ROM = {
  0,   0,-127,
  -1,  -5,-5,                 // left to right pointing
  -1,  5,30, -1,  5,-30,
  -1,  -5,5,
  0,   0,127,    0, 0,127, // (large move in two parts)
  -1,  5,5,
  -1,  -5,-30, -1,  -5,30,   // right to left pointing
  -1,  5,-5,
  1
};

void Draw_missiles(void)
{
  position_and_scale_and_intensity(missile_x,missile_y, (unsigned8)missile_scale, MAX_BRIGHTNESS);
  displaylist(paired_missiles);

// This hack to draw both left and right missiles in one call doesn't
// look as nice as I hoped it would on the screen.  I think I am going
// to have to go back to individual left and right missiles, and
// also orient them toward the crosshair using trig, then rotate
// them using the built-in bios procedure.
}

#if 0
#include "placard.h"
static unsigned8 intro_rot;
// The revolving intro placard...

static void drawtgintro(unsigned8 scale, unsigned8 bright) {
  position_and_scale_and_intensity(0,0, (unsigned8)((signed16)scale*(signed16)2/(signed16)5), bright);
  displaylist((signed8 *)placard[((unsigned8)intro_rot+128)&255]);
}
static int ship_scale = 1;
static int speed_toggle = 0;
static int *waveptr;
void SHIPWAVE(void)
{
  int x,y;
  if (ship_scale == 1) {
    waveptr = (int *)Ship0Wave0;  // ( scale x y (drawing commands)* 1 )* 1
  }
  ship_scale = *waveptr++;
  x = *waveptr++; y = (int)((*waveptr++ + 128) * 2 - 128); // deliberately exaggerate ship motion in Y

  position_and_scale_and_intensity(x, y-60, (unsigned char)((long)ship_scale*3L/8L), MAX_BRIGHTNESS); // should a y offset be stored in the structure?
 
  displaylist((signed8 *)waveptr);

  if (speed_toggle == 0) {
    waveptr -= 3;
  } else {
    do { waveptr += 3; } while (*waveptr != 1); // step over display list
    waveptr += 1; // step over 'end of list'
    // scale, or 1 for end of wave
    if (*waveptr == 1) ship_scale = 1; // end of a sequence of frames
  }
  speed_toggle = 1-speed_toggle;
}
#endif
#include "wave.h"
#define MAX_SHIPS	3
struct ship ships[MAX_SHIPS];
struct wave_tracker wave_tracker;
unsigned int ship_passed = 0;
unsigned int ship_passed_counter = 0;
#define SHIP_PASSED_TRESHOLD 64
int main(void) { // cmoc doesn't allow argc, argv
#define STAR_SPEED 4
  signed8 Shots_fired;

  // I think all the static data could safely be initialised to 0 in a block
  // by the startup code.  (Possibly excepting the two arrays containing pointers
  // to const arrays).  I don't believe I have any statics that require initialisation
  // to any non-0 values.

  missile_scale = 
    (unsigned16)(Debug = Score = HighScore = LastScore = rseed = frame_number =
      (signed16)(last_button1 = crosshair_x = crosshair_y = XJoy = YJoy =
        (signed8)(Credits = global_flashing_intensity = 0)));

  init_hardware();
  init_stars();
  init_wave_tracker(&wave_tracker);

  Score = 72; HighScore = 2047; LastScore = 132; // only for demo.
//ship_scale = 1;
//speed_toggle = 0;
//Debug = sizeof(Ship0Wave0);

  // Attract mode

  for (;;) {
    Shots_fired = button1 = button2 = button3 = button4 = firing = 0;
//Debug=Credits;
    debugstr("main loop");
    // approaching banner:

    if (Credits == 0) {
#if 0
    signed16 frames;
    unsigned8 placard_scale, placard_brightness;
    placard_scale = (unsigned8)((signed16)(0xFF-160));
    placard_brightness = (unsigned8)((signed16)(((signed16)MAX_BRIGHTNESS+(signed16)MAX_BRIGHTNESS-160)));
    intro_rot = 128;

    // start at 128 step by -2  end at 64 after one full revolution (128 + 32 steps)
    for (frames = 0; frames < 160; frames++) {
      next_frame();
      drawtgintro(placard_scale, placard_brightness>>1);
      placard_scale++; placard_brightness++;
      stars(STAR_SPEED);
      intro_rot -= 2;
      if (button1) break;
    }

    if (!button1) {signed16 i;
      // pulse the placard a few times...
      for (i = 0; i < 2; i++) {
        placard_brightness = MAX_BRIGHTNESS&0xF8;
        while (placard_brightness != 0) {
          next_frame();
          drawtgintro(placard_scale, placard_brightness);
          stars(STAR_SPEED);
          placard_brightness -= 8;
          if (button1) break;
        }
        if (!button1) while (placard_brightness != (MAX_BRIGHTNESS&0xF8)) {
          placard_brightness += 8;
          next_frame();
          drawtgintro(placard_scale, placard_brightness);
          stars(STAR_SPEED);
          if (button1) break;
        }
      }
    }

    // now fade it out
    if (!button1) {
      placard_brightness = MAX_BRIGHTNESS&0xF8;
      while (placard_brightness != 0) {
        next_frame();
        drawtgintro(placard_scale, placard_brightness);
        stars(STAR_SPEED);
        placard_brightness -= 8;
        if (button1) break;
      }
    }
#endif
    }

    debugstr("wait for coins...");
    global_flashing_intensity = 0; frame_number = 0; // start flashing from off position
    //for (frames = 0; ; frames++) {
    while (1) {
      next_frame();
      stars(STAR_SPEED);
      if (Credits == 0) Draw_insertcoin(); else {Draw_start(); Draw_credits(); /* -- TOO SLOW*/}
      intensity(MAX_BRIGHTNESS);
      Draw_lastscore();
      Draw_highscore();
      if (button2 && (Credits > 0)) break;  // 'S' for Start
    }
    Credits -= 1;

    // shields and crosshair - simulated play...
//  for (frames = 0; Shots_fired < 10 || firing; frames++) {
//    for (frames = 0; (long)frames < 126L*2L; frames++) {
    while (1) {
      next_frame();

      if (ship_list == 0) {
        move_wave(&wave_tracker, MAX_SHIPS, ships);
      }

      if (move_ships()) {
          ship_passed = 1;
          ship_passed_counter = 0;
      }

      if (ship_passed) {
        if (++ship_passed_counter >= SHIP_PASSED_TRESHOLD) {
          ship_passed_counter = 0;
          ship_passed = 0;
        }
        stars(STAR_SPEED<<1);
        intensity((unsigned8)(64-ship_passed_counter)*2); // fade out
      }
      else {
        stars(STAR_SPEED);
        intensity(MAX_BRIGHTNESS);
      }
      Draw_ships_remaining();
      Draw_shields_remaining();
      Draw_score();
      draw_ships();

      //SHIPWAVE(); // need to implement passing now

      /*if (!firing) */follow_crosshair();
      if (button3) {  // 'D' for Defend
        if (pickrandom(0,31)) draw_shields(0xF0);
      }
      if (button4 && !firing && !button3) {  // 'F' for Fire. One at a time and not when shields up.
        firing = 1;    // firing position is higher than on original game for a reason :-)
        Shots_fired += 1;
        missile_x = 0; missile_y = 0;  // we treat the missile as being in the center of the ship
                                         // but *draw* missiles to the left and right of the center...
        missile_scale = 0x7f; // start from left and right edges

        // Initiate missile sound
        sfx_pointer_1 = (long unsigned int) (&missile_snd_data);
        sfx_status_1 = 1;
      }
      if (firing) {
        missile_scale -= 1U;
        if (missile_scale <= 4U) {
           firing = 0;
        } else {
          signed16 m, mx,my, delta_y;

          mx = (signed16)crosshair_x - (signed16)missile_x ;  // re-center on the missile.
          // not sure why it converges on Y so fast.  Ought to start at foot of screem
          my = (signed16)crosshair_y - (signed16)missile_y ;  // offsets may now be outside -128:127 range

          delta_y = (((my) << 5L) - my)>>5L;
          // if (delta_y > 8L) delta_y = 8L; else if (delta_y < -8L) delta_y = -8L;

          missile_x = (signed8)(((((mx) << 5L) - mx)>>5L) + (signed16)missile_x);  // move 15/16ths of the distance to crosshair
          missile_y = (signed8)((signed16)delta_y + (signed16)missile_y);  // add original offset back in

          m = (signed16)missile_scale<<3L;   // 7/8ths
          m -= (signed16)missile_scale;
          missile_scale = (unsigned8)((signed16)m>>3L);
        }
        // stop RHS from going off-screen - these would not be needed if we used individual missiles
        if (((signed16)missile_x + (signed16)missile_scale) > 127L) missile_x = (signed8)(127L-(signed16)missile_scale);
        // stop LHS from going off-screen
        if (((signed16)missile_x - (signed16)missile_scale) < -127L) missile_x = (signed8)(-127L+(signed16)missile_scale);
        Draw_missiles();

        // Continue to play missible sound
        if (sfx_status_1 == 1) {
          ayfx_sound1();
        }
      }
    }

#if 0
    // 'whoosh' when a ship got by us.
    debugstr("whoosh...");
    for (frames = 0; frames < 64; frames++) {
      next_frame();
      stars(STAR_SPEED<<1);
      intensity((unsigned8)(64-frames)*2); // fade out
      Draw_ships_remaining();
      Draw_shields_remaining();
      Draw_score();
    }
#endif
  }

  return 0;
  SHOW_N0();
  SHOW_N1();
  SHOW_N2();
  SHOW_N3();
  SHOW_N4();
  SHOW_N5();
  SHOW_N6();
  SHOW_N7();
  SHOW_N8();
  SHOW_N9();
}
