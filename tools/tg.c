/*
    This is the start of a clone of Tailgunner.  It's early days...

    We use OpenGL here but only to draw low-level vectors.  All other
    graphics is done by this code.  It should be easily portable to any
    other system, including, hopefully, the Vectrex, and Zonn Moore's Zektor.

    However I am giving serious though to rewriting it to use 3D models and let
    OpenGL handle the rotations, perspective etc.  This would allow it to be
    used with stereoscopic 3D displays...

    The original version of this code used the internal coord system of
    the TG rom.  This code is now being modified so that it uses a coord
    system with 0,0 at the center of the screen, so that translating
    to device coords is a simple scaling operation plus a translation.
    The only drawback of this is that we need to be careful with signs,
    especially for our fixed point arithetic.
 */


#define FPS 60
#define LINEWIDTH 3.0 /* 3d lenticular screen messes up on thin lines. Normally this is 1.0 or omitted */
#define ZDEPTH 1024
#define NSHIPS 3 // number on-screen at once, *not* number of ship designs.
                 // On the cruddy old Dell Optiplex 755 I'm testing on at the moment,
                 // with the new FPS code (no longer wasting time by 'usleep'ing)
                 // you can have about 10000 ships without a noticable performance overhead!

//#define PORTABILITY_HACK1 // If you get some really weird vectors being drawn first time you compile, try setting this.

//#define GTCHARS // If set, use a couple of alternative (improved?) glyphs in the vector font.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifndef FALSE
#define FALSE (0!=0)
#define TRUE (0==0)
#endif


//----------------------------------------------------------- OPENGL
#ifdef OPENGL
//#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

 
void timer(int value)
{
  // timer code from http://www.opengl.org/discussion_boards/showthread.php/168204-OpenGL-Setting-FPS/page2http://www.opengl.org/discussion_boards/showthread.php/168204-OpenGL-Setting-FPS/page2

  static GLint Frames = 0;         // frames averaged over 1000mS
  static GLuint Clock;             // [milliSeconds]
  static GLuint PreviousClock = 0; // [milliSeconds]
  static GLuint NextClock = 0;     // [milliSeconds]
 
  glutTimerFunc(1000/FPS, timer, ++value);

  ++Frames;
  Clock = glutGet(GLUT_ELAPSED_TIME); //has limited resolution, so average over 1000mS
  if ( Clock >= NextClock ) {
    PreviousClock = Clock;
    NextClock = Clock+1000; // 1000mS=1S in the future
    Frames=0; 
  }
  glutPostRedisplay();
} 

#define COLORS 16
GLubyte colors[COLORS][3] = { // grey scale - only used for fading stars into the distance
    0,0,0,
    1,1,1,
    3,3,3,
    7,7,7,
    15,15,15,
    31,31,31,
    63,63,63,
    127,127,127,
    0+128,0+128,0+128,
    1+128,1+128,1+128,
    3+128,3+128,3+128,
    7+128,7+128,7+128,
    15+128,15+128,15+128,
    31+128,31+128,31+128,
    63+128,63+128,63+128,
    127+128,127+128,127+128,
};
#endif
//------------------------------------------------------- END OPENGL

// These are more like world coordinates than screen coordinates - they can be scaled to the display
// Currently the code uses the positioning from the Cinematronics version, but this all needs to be
// rewritten so that it scales with whatever the display size and aspect ratio may be, which should
// be found from an OpenGL call.

#define SCREEN_H 800
#define SCREEN_W 1023

void CinemaVectorData (int FromX, int FromY, int ToX, int ToY, int vgColour);
void cineExecuteFrame(void);

static int mouse_x = 350, mouse_y = 180, mouse_b = 0; // have not yet added mouse support!
// The static binary translated version of the Cinematronic does actually handle the mouse correctly
// so I should be able to copy that part of the code almost verbatim

//-------------------------------------------- TRIG

int direction(int shipno, int ix, int iy) {
    // In the first phase of a ship appearing, it flies in two dimensions on a plane parallel to the screen,
    // as far back as we allow.  The ships follow a path composed of one or more bezier segments.  This code
    // determines the direction the ship is facing at any point as it traverses that path.  The bezier code
    // gives us an x/z vector (ix, iy), and this turns it into an angle.

    static int oldtheta[NSHIPS];

    const unsigned char xatan[128] = { // index is Y height for X=128
       0,     0,     1,     1,     1,     2,     2 ,    2,     3,     3,     3,     3,     4,     4,     4,     5,
       5,     5,     6,     6,     6,     7,     7,     7,     8,     8,     8,     8,     9,     9,     9,    10,
      10,    10,    11,    11,    11,    11,    12,    12,    12,    13,    13,    13,    13,    14,    14,    14,
      15,    15,    15,    15,    16,    16,    16,    17,    17,    17,    17,    18,    18,    18,    18,    19,
      19,    19,    19,    20,    20,    20,    20,    21,    21,    21,    21,    22,    22,    22,    22,    23,
      23,    23,    23,    23,    24,    24,    24,    24,    25,    25,    25,    25,    25,    26,    26,    26,
      26,    26,    27,    27,    27,    27,    27,    28,    28,    28,    28,    28,    29,    29,    29,    29,
      29,    29,    30,    30,    30,    30,    30,    31,    31,    31,    31,    31,    31,    32,    32,    32
    };

    const int remap[8] = { 0, 7, 3, 4, 1, 6, 2, 5  }; // 3 separate bits of parameter in, a single 3-bit quadrant no out.

    int octant, theta;

    // x and y are an arbitrary ship vector (actually they're a chord almost parallel to the ship vector - see the bezier code...),
    // result is the direction ship is pointing, in our scale of angles where 0 is north, and a full circle is 256 units clockwise
    // This code took about 3 hours to work out using a lot of pencil and paper geometry!
    // It's as lightweight as I can make a function using arctangents...

    if (ix == 0 && iy == 0) return oldtheta[shipno]; // ship is still.  Avoid divide by 0.  Will this ever happen?
    octant = ((ix>>31)&1) | ((iy>>30)&2);
    ix = abs(ix); iy = abs(iy); octant = remap[octant | (((iy-ix)>>29)&4)]; /* size comparison */
    if (octant&4) /* ix was < iy */ { int temp=iy; iy=ix; ix=temp; }
    if (ix < 8) /* if (ix == 0) */ return oldtheta[shipno]; // too much rounding error (close to dividing by 0)
    // We rescale the vector to a right-angled triangle with the longest side (ix) set to 128, and get arctan(iy/ix) for the angle
    iy = (iy << 7) / ix; // note that this is for integer vectors - fp14 data needs a tweak here.
    if (iy>127) iy=127; // probably can't happen but I'd rather leave an unnecessary hack in, than risk a crash
    return(oldtheta[shipno] = (octant&1) ? ((((octant>>1)+1)<<6)-1) - xatan[iy] : xatan[iy] + ((octant>>1)<<6)-1); /* Sweet! */
}

//-------------------------------------------- FIXED POINT GRAPHICS PACKAGE

//
// fp14 code written by: Robert C. Pendleton
// 
// Copyright 1993 by Robert C. Pendleton, all right reserved
//
// Non-commercial use by individuals is permitted.
//
//

//----------------------------------------------
//
// Integer math
//

//----------------------------------------------
//
// fixed point math
//

typedef long fp14; // There are some architecture dependencies in this code (long vs long long, signed shifts etc)

//----------------------------------------------
//
// Add and subtract fixed point numbers. :-)
//

#define fpAdd(a1, a2) ((a1) + (a2))
#define fpSub(s1, s2) ((s1) - (s2))

//----------------------------------------------
//
// Convert an integer to n N.14 fixed point 
// number and back.
//

#define int2fp(x) ((x) << 14)
#define fp2int(x) ((x) >> 14)

//----------------------------------------------
//
// Get the fractional part of an N.14 fixed point
// number.

#define fpFract(x) ((x) & 0x3fff)

//----------------------------------------------
//
// Convert a N.14 fixed point number to a
// double and back. Handy for printing and for 
// those times when you really do want to work
// with floating point values.
//

#ifdef PORTABILITY_HACK1
#define fp2float(x) ( (double) (((double)(x)) / (double)(1 << 14))  )
#define float2fp(x) ((fp14) ((double)(x) * (double)(1 << 14)))
#endif

//----------------------------------------------
//
// Table based fixed point sine and cosine 
// functions.
//

#define fpSin(x) (sine[(x) & 0xff])
#define fpCos(x) (sine[((x)+64) & 0xff])

//----------------------------------------------
//
// 18.14 fixed point sine and cosine tables.
//
// These table assume that there are 256 angles
// in a circle.
//

fp14 sine[256] =
{
     0,    402,    803,   1205,   1605,   2005,   2404,   2801, 
  3196,   3589,   3980,   4369,   4756,   5139,   5519,   5896, 
  6269,   6639,   7005,   7366,   7723,   8075,   8423,   8765, 
  9102,   9434,   9759,  10079,  10393,  10701,  11002,  11297, 
 11585,  11866,  12139,  12406,  12665,  12916,  13159,  13395, 
 13622,  13842,  14053,  14255,  14449,  14634,  14810,  14978, 
 15136,  15286,  15426,  15557,  15678,  15790,  15892,  15985, 
 16069,  16142,  16206,  16260,  16305,  16339,  16364,  16379, 
 16384,  16379,  16364,  16339,  16305,  16260,  16206,  16142, 
 16069,  15985,  15892,  15790,  15678,  15557,  15426,  15286, 
 15136,  14978,  14810,  14634,  14449,  14255,  14053,  13842, 
 13622,  13395,  13159,  12916,  12665,  12406,  12139,  11866, 
 11585,  11297,  11002,  10701,  10393,  10079,   9759,   9434, 
  9102,   8765,   8423,   8075,   7723,   7366,   7005,   6639, 
  6269,   5896,   5519,   5139,   4756,   4369,   3980,   3589, 
  3196,   2801,   2404,   2005,   1605,   1205,    803,    402, 
     0,   -402,   -803,  -1205,  -1605,  -2005,  -2404,  -2801, 
 -3196,  -3589,  -3980,  -4369,  -4756,  -5139,  -5519,  -5896, 
 -6269,  -6639,  -7005,  -7366,  -7723,  -8075,  -8423,  -8765, 
 -9102,  -9434,  -9759, -10079, -10393, -10701, -11002, -11297, 
-11585, -11866, -12139, -12406, -12665, -12916, -13159, -13395, 
-13622, -13842, -14053, -14255, -14449, -14634, -14810, -14978, 
-15136, -15286, -15426, -15557, -15678, -15790, -15892, -15985, 
-16069, -16142, -16206, -16260, -16305, -16339, -16364, -16379, 
-16384, -16379, -16364, -16339, -16305, -16260, -16206, -16142, 
-16069, -15985, -15892, -15790, -15678, -15557, -15426, -15286, 
-15136, -14978, -14810, -14634, -14449, -14255, -14053, -13842, 
-13622, -13395, -13159, -12916, -12665, -12406, -12139, -11866, 
-11585, -11297, -11002, -10701, -10393, -10079,  -9759,  -9434, 
 -9102,  -8765,  -8423,  -8075,  -7723,  -7366,  -7005,  -6639, 
 -6269,  -5896,  -5519,  -5139,  -4756,  -4369,  -3980,  -3589, 
 -3196,  -2801,  -2404,  -2005,  -1605,  -1205,   -803,   -402, 
};


fp14
fpDiv(fp14 d1, fp14 d2)
{
#ifdef PORTABILITY_HACK1
  return float2fp(fp2float(d1)/fp2float(d2)); // alternative portable version
#else
  // tested on LCC on windows and GCC on 64 bit linux, but still may not be portable.  Signedness is an issue.
  return ((fp14)((((long long)d1<<14LL) / (long long)d2)<<14LL));
#endif
}

fp14
fpMul(fp14 m1, fp14 m2)
{
#ifdef PORTABILITY_HACK1
  return float2fp(fp2float(m1)*fp2float(m2)); // alternative portable version
#else
  // see above
  return ((fp14)(((long long)m1 * (long long)m2)>>14LL));
#endif
}

typedef struct VPoint
{
        int x,y,z;
} VPoint;

// for convenience and shorter code on Vectrex - need to do more of this...
// in GCC many of these short functions could be 'static inline' ...
int mult_sin(int coord, int angle)
{
  return fp2int(fpMul(int2fp(coord), fpSin(angle)));
}

int mult_cos(int coord, int angle)
{
  return fp2int(fpMul(int2fp(coord), fpCos(angle)));
}

// x,y,z - 'real' world (1024x1024x1024)
// xangle,yangle,zangle - rotate object around its own axis (note: need quaternions to avoid gimbal lock)
// screenx, screeny, screenz - 'virtual pixel' offset in screen coords (1280x1024)

void DrawShip(int ship, int x, int y, int z, int xangle, int yangle, int zangle, int screenx, int screeny)
{
int i;
// Ships hand-coded by Peter Hirschberger.  Great work, Peter!
// Original data was given to me as doubles (eg lines of 1.5 length) but I've scaled everything to ints
#define nNumVectors0 20
	VPoint vectors0[nNumVectors0*2] = 
	{
            { 0, 0, -100 },
            { 40, 0, -60 },
            { 40, 0, -60 },
            { 0, 0, -20 },
            { 0, 0, -20 },
            { -40, 0, -60 },
            { -40, 0, -60 },
            { 0, 0, -100 },
            { 0, 0, -100 },
            { 0, 40, -60 },
            { 0, 40, -60 },
            { 0, 0, -20 },
            { 0, 0, -20 },
            { 0, -40, -60 },
            { 0, -40, -60 },
            { 0, 0, -100 },
            { 0, 0, -20 },
            { 30, 0, 120 },
            { 0, 0, -20 },
            { 20, 20, 120 },
            { 0, 0, -20 },
            { -20, 20, 120 },
            { 0, 0, -20 },
            { -30, 0, 120 },
            { 30, 0, 120 },
            { 20, 20, 120 },
            { 20, 20, 120 },
            { -20, 20, 120 },
            { -20, 20, 120 },
            { -30, 0, 120 },
            { -30, 0, 120 },
            { 30, 0, 120 },
            { 30, 0, 120 },
            { 100, -40, 80 },
            { 100, -40, 80 },
            { 0, 0, -20 },
            { -30, 0, 120 },
            { -100, -40, 80 },
            { -100, -40, 80 },
            { 0, 0, -20 },
	};
#define nNumVectors1 21
	VPoint vectors1[nNumVectors1*2] = 
	{
            { 0, 0, -90 },
            { 45, 0, -60 },
            { 45, 0, -60 },
            { 45, 0, 60 },
            { 45, 0, 60 },
            { 0, 0, 90 },
            { 0, 0, 90 },
            { -45, 0, 60 },
            { -45, 0, 60 },
            { -45, 0, -60 },
            { -45, 0, -60 },
            { 0, 0, -90 },
            { 45, 0, 60 },
            { 60, 24, 60 },
            { 60, 24, 60 },
            { 60, 24, 150 },
            { 60, 24, 150 },
            { 45, 0, 150 },
            { 45, 0, 150 },
            { 45, 0, 60 },
            { -45, 0, 60 },
            { -60, 24, 60 },
            { -60, 24, 60 },
            { -60, 24, 150 },
            { -60, 24, 150 },
            { -45, 0, 150 },
            { -45, 0, 150 },
            { -45, 0, 60 },
            { -45, 0, 60 },
            { -60, -27, -90 },
            { -60, -27, -90 },
            { 0, -34, -129 },
            { 0, -34, -129 },
            { 60, -27, -90 },
            { 60, -27, -90 },
            { 45, 0, 60 },
            { 0, 0, -90 },
            { 0, -34, -129 },
            { 45, 0, -60 },
            { 60, -27, -90 },
            { -45, 0, -60 },
            { -60, -27, -90 },
	};
#define nNumVectors2 17
	VPoint vectors2[nNumVectors2*2] = 
	{
            { 0, 0, -100 },
            { 60, 0, -40 },
            { 60, 0, -40 },
            { 0, 0, 20 },
            { 0, 0, 20 },
            { -60, 0, -40 },
            { -60, 0, -40 },
            { 0, 0, -100 },
            { 0, 0, -100 },
            { 0, 40, -40 },
            { 0, 40, -40 },
            { 0, 0, 20 },
            { 60, 0, -40 },
            { 0, 40, -40 },
            { 0, 40, -40 },
            { -60, 0, -40 },
            { 0, 0, 20 },
            { 0, 80, 100 },
            { 0, 80, 100 },
            { 0, 40, 100 },
            { 0, 40, 100 },
            { 0, 0, 20 },
            { 0, 0, 20 },
            { 100, -40, 100 },
            { 100, -40, 100 },
            { 40, -20, 100 },
            { 40, -20, 100 },
            { 0, 0, 20 },
            { 0, 0, 20 },
            { -100, -40, 100 },
            { -100, -40, 100 },
            { -40, -20, 100 },
            { -40, -20, 100 },
            { 0, 0, 20 },
	};
#define nNumVectors3 23
	VPoint vectors3[nNumVectors3*2] = 
	{
            { 0, 2, -92 },
            { 30, 2, -70 },
            { 30, 2, -70 },
            { 0, 10, -20 },
            { 0, 10, -20 },
            { -30, 2, -70 },
            { -30, 2, -70 },
            { 0, 2, -92 },
            { 0, 2, -92 },
            { 0, -25, -45 },
            { 0, -25, -45 },
            { 0, 10, -20 },
            { 30, 2, -70 },
            { 22, 15, -60 },
            { -30, 2, -70 },
            { -22, 15, -60 },
            { 30, 2, -70 },
            { 0, -25, -45 },
            { -30, 2, -70 },
            { 0, -25, -45 },
            { 22, 15, -60 },
            { -22, 15, -60 },
            { 22, 15, -60 },
            { 0, 10, -20 },
            { -22, 15, -60 },
            { 0, 10, -20 },
            { 30, 2, -70 },
            { -30, 2, -70 },
            { 0, 10, -20 },
            { -20, -10, 110 },
            { 0, 10, -20 },
            { 20, -10, 110 },
            { -20, -10, 110 },
            { 20, -10, 110 },
            { 0, -25, -45 },
            { -20, -10, 110 },
            { 0, -25, -45 },
            { 20, -10, 110 },
            { 0, 10, -20 },
            { -90, 20, 90 },
            { -90, 20, 90 },
            { -20, -10, 110 },
            { 0, 10, -20 },
            { 90, 20, 90 },
            { 90, 20, 90 },
            { 20, -10, 110 },
	};
        
int     nvec[4] = {nNumVectors0,nNumVectors1,nNumVectors2,nNumVectors3}; 
        // The pvec array initialisation below caused LCC to crash:
        // so rather than have 'ifdef's for one compiler, I rewrote it as an explicit initialisation.
VPoint *pvec[4];// = {vectors0, vectors1, vectors2, vectors3};
int     nNumVectors = nvec[ship];

        pvec[0] = vectors0;
        pvec[1] = vectors1;
        pvec[2] = vectors2;
        pvec[3] = vectors3;
 
    int px = 0, py = 0;
	for (i=0; i<nNumVectors*2; i+=2)
	{
          int x0, y0, z0, x1, y1, z1, tx0, ty0, tz0, tx1, ty1, tz1, xa, ya, xb, yb;
          x0 = pvec[ship][i].x*2/3; // last minute rescaling as the ships looked a little
          y0 = pvec[ship][i].y*2/3; // too large when entering space on the back plane.
          z0 = pvec[ship][i].z*2/3; // remove this later... rescale the data or fix it when we move to OpenGL matrices

          x1 = pvec[ship][i+1].x*2/3;
          y1 = pvec[ship][i+1].y*2/3;
          z1 = pvec[ship][i+1].z*2/3;

          /*
             The matrix code below is not ideal for plotting
             a pausible flight path (the 'Gimbal lock' problem).
             It would be much better to handle pitch/yaw/roll
             using quaternions.  I'm hacking it by restricting
             the degrees of freedom when a ship switches from
             a 2D path on the rear face to a 3D path approaching
             the viewport.

             THIS IS VERY HACKY CODE.  best solution would be to punt to OpenGL in a more major rewrite...

           */

          // rotate around z
          tx0 = mult_cos(x0, zangle)-mult_sin(y0, zangle);
          ty0 = mult_sin(x0, zangle)+mult_cos(y0, zangle);
          tz0 = z0;

          tx1 = mult_cos(x1, zangle)-mult_sin(y1, zangle);
          ty1 = mult_sin(x1, zangle)+mult_cos(y1, zangle);
          tz1 = z1;
          x0=tx0;y0=ty0;z0=tz0; x1=tx1;y1=ty1;z1=tz1;

          // rotate around y
          tz0 = mult_cos(z0, yangle)-mult_sin(x0, yangle);
          tx0 = mult_sin(z0, yangle)+mult_cos(x0, yangle);
          ty0 = y0;

          tz1 = mult_cos(z1, yangle)-mult_sin(x1, yangle);
          tx1 = mult_sin(z1, yangle)+mult_cos(x1, yangle);
          ty1 = y1;
          x0=tx0;y0=ty0;z0=tz0; x1=tx1;y1=ty1;z1=tz1;

          // rotate around x
          ty0 = mult_cos(y0, xangle)-mult_sin(z0, xangle);
          tz0 = mult_sin(y0, xangle)+mult_cos(z0, xangle);
          tx0 = x0;

          ty1 = mult_cos(y1, xangle)-mult_sin(z1, xangle);
          tz1 = mult_sin(y1, xangle)+mult_cos(z1, xangle);
          tx1 = x1;
          tx0 = tx0+x; ty0 = ty0+y; tx1 = tx1+x; ty1 = ty1+y;

          // treat 512,340^H^H^H400 as 0,0 for perspective purposes.  ANOTHER HACKY ALGORITHM!
	  // Good old 8-bit micro style coding...
#define TWEAK 2048 /* was 1024 */
          xa = ((TWEAK*tx0) / (TWEAK+tz0));
          ya = ((TWEAK*ty0) / (TWEAK+tz0));
          xb = ((TWEAK*tx1) / (TWEAK+tz1));
          yb = ((TWEAK*ty1) / (TWEAK+tz1));
//#undef TWEAK

          // scale by depth  ">>10" is short for "/ZDEPTH"
          xa = (xa*(z+200))>>10; ya=(ya*(z+200))>>10; xb=(xb*(z+200))>>10; yb=(yb*(z+200))>>10;

#ifdef PRINT
          if (px != xa || py != ya)
              printf("\t 0,\t%d*SCALE,\t%d*SCALE,\n", ya - py, xa - px);
		  printf("\t-1,\t%d*SCALE,\t%d*SCALE,\n", yb - ya, xb - xa);
		  px = xb;
		  py = yb;

#else
          // then re-correct back to center of screen at 512,400
          CinemaVectorData(xa+512+screenx,ya+400+screeny,xb+512+screenx,yb+400+screeny, 7);
#endif
	}
	printf("\t 1\n");
#undef nNumVectors0
#undef nNumVectors1
#undef nNumVectors2
#undef nNumVectors3
}

int irand(int max) {
  // returns int 0..max-1
  int r = random(); if (r < 0) r = -r;
  r = r % max; // probably not very random, but this is a video game, not crypto
  if (!((r >= 0) && (r < max))) {
    fprintf(stderr, "ERROR: posrand(%d) = %d\n", max, r);
    return 0;
  }
  return r;
}

// Simgle-dimensional component of a bezier between two points.  Call separately for each
// dimension, call repeatedly for multiple segments.  Path starts along vector AB and
// ends along vector CD.  This is point 't' in a Path of 2^logmaxslots.
// Delta is filled in with a vector roughly tangential to the path at this point,
// which is used along with function 'direction' to point the ship in the direction
// of travel, since the vector from point [t-1] to [t+1] is likely very short and
// therefore the angle will suffer badly from rounding error.

// See http://stackoverflow.com/questions/5443653/opengl-coordinates-from-bezier-curves
// for the diagram explaining AB/CD.
int d1bezier(int A,  // Start value
             int B,  // First control value
             int C,  // Second control value
             int D,  // Ending value
             int t,  // Time slice, 0..t..511
             int logmaxslots, // 9 for 512
             int *delta) // X or Y component of tangent to point
{
  int s = ((1<<logmaxslots)-1) - t;
  int AB = (A*s + B*t)>>logmaxslots;
  int BC = (B*s + C*t)>>logmaxslots;
  int CD = (C*s + D*t)>>logmaxslots;
  int ABC = (AB*s + CD*t)>>logmaxslots;
  int BCD = (BC*s + CD*t)>>logmaxslots;
  *delta = ABC - BCD;
  return (ABC*s + BCD*t)>>logmaxslots;
}

static int MinX = 1000, MinY = 1000, MaxX = 0, MaxY = 0;

// static int debounce_oneshots = 0, debounce_shields = 0;

// This is the low-level vector (line) drawing routine.  It uses
// the original ROM version coordinate space and maps to the local
// hardware.  Clipping is crude but doesn't appear to hurt in
// this application.  Ideally this code should be trivially short
// and fast.

void CinemaVectorData (int FromX, int FromY, int ToX, int ToY, int vgColour) {
  /* TWEAK THESE TO MAKE THEM FIT... */
  ToX = ToX << 16;  // sign extend short to long. PROBABLY MACHINE DEPENDENT!
  ToX = ToX >> 16;
  FromX = FromX << 16;
  FromX = FromX >> 16;

// global adjustments
  FromX -= 32; ToX -= 32;

  if (FromX < MinX)
    MinX = FromX;
  if (ToX < MinX)
    MinX = ToX;
  if (FromY < MinY)
    MinY = FromY;
  if (ToY < MinY)
    MinY = ToY;
  if (FromX > MaxX)
    MaxX = FromX;
  if (ToX > MaxX)
    MaxX = ToX;
  if (FromY > MaxY)
    MaxY = FromY;
  if (ToY > MaxY)
    MaxY = ToY;

#ifdef OPENGL
//fprintf (stdout, "Line: %d %d -> %d %d (%d)\n", FromX, FromY, ToX, ToY, vgColour);
  glColor3ubv(colors[vgColour % COLORS]);
  glVertex2i(FromX, FromY);
  glVertex2i(ToX, ToY);
#endif

}


/* main program loop body */
static int PENDING_KEY = -1;

#ifdef OPENGL
// This code based on:
/* 
    qix.c
    Nate Robins, 1997

    An example of a 'qix'-like line demo, but without the traditional
    erase lines, and with anti-aliased lines.

 */


void
reshape(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, 0, height, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE/*GL_ONE_MINUS_SRC_ALPHA*/);
}

void
display(void)
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);    
    glBegin(GL_LINES);
    cineExecuteFrame ();
    glEnd();
    glutSwapBuffers();
}

/* This handles the unix/cygwin-style OpenGL main loop */
void
idle(void)
{
    glutPostRedisplay();
}

void
keyboard(unsigned char key, int x, int y)
{
    static int old_x = 50;
    static int old_y = 50;
    static int old_width = SCREEN_W;
    static int old_height = SCREEN_H;

    if (key == 27) {
        exit(0);
    } else if (key == 'w') {
        glutPositionWindow(old_x, old_y);
        glutReshapeWindow(old_width, old_height);
    } else if (key == 'f') {
	if (glutGet(GLUT_WINDOW_WIDTH) != glutGet(GLUT_SCREEN_WIDTH)) {
	    old_x = glutGet(GLUT_WINDOW_X);
	    old_y = glutGet(GLUT_WINDOW_Y);
	    old_width = glutGet(GLUT_WINDOW_WIDTH);
	    old_height = glutGet(GLUT_WINDOW_HEIGHT);
	    glutFullScreen();
	}
    } else {
      PENDING_KEY = key;
    }
}
#endif

unsigned char charvec[] = {
 /* Need to add two codes for '+' and '-' for debugging coord values! */
 '0', 4, 0xae, 0xe4, 0x40, 0x0a,
 '1', 1, 0x2c,
 '2', 5, 0xae, 0xe9, 0x95, 0x50, 0x04,
 '3', 4, 0x04, 0x79, 0x4e, 0xea,
#ifdef GTCHARS
 '4', 3, 0xa5, 0x59, 0x72, /* mine */
#else
 '4', 3, 0x5a, 0x59, 0x4e, /* orig */
#endif
 '5', 5, 0x04, 0x49, 0x95, 0x5a, 0xae,
 '6', 4, 0x59, 0x94, 0x40, 0x0a,
 '7', 2, 0x2e, 0xea,
 '8', 5, 0x04, 0xae, 0x59, 0xe4, 0xa0,
 '9', 4, 0xea, 0xa5, 0x59, 0xe4,
 'A', 4, 0x4e, 0xae, 0x59, 0xa0,
 'B', 5, 0x69, 0x04, 0x4e, 0xea, 0xb1,
 'C', 3, 0xae, 0x40, 0x0a,
#ifdef GTCHARS
 'D', 5, 0xad, 0xd9, 0x93, 0x30, 0x0a,
#else
 'D', 4, 0xae, 0xe4, 0x40, 0x1b,
#endif
 'E', 4, 0x40, 0x0a, 0x57, 0xae,
 'F', 3, 0x0a, 0x57, 0xae,
 'G', 5, 0x79, 0x94, 0x40, 0x0a, 0xae,
 'H', 3, 0x0a, 0x59, 0x4e,
 'I', 1, 0x2c,
 'J', 4, 0x50, 0x03, 0x3d, 0xbe,
 'K', 3, 0x0a, 0xe5, 0x54,
 'L', 2, 0x0a, 0x04,
 'M', 4, 0x0a, 0xa7, 0x7e, 0xe4,
 'N', 3, 0x0a, 0xa4, 0x4e,
 'O', 4, 0xae, 0xe4, 0x40, 0x0a,
 'P', 4, 0x0a, 0xae, 0xe9, 0x95,
 'Q', 5, 0x0a, 0xae, 0xe4, 0x40, 0x48,
 'R', 5, 0x48, 0x59, 0x9e, 0xea, 0xa0,
 'S', 5, 0x04, 0x49, 0x95, 0x5a, 0xae,
 'T', 2, 0xae, 0xc2,
 'U', 3, 0x0a, 0x04, 0x4e,
 'V', 2, 0xa2, 0x2e,
 'W', 4, 0xa1, 0x17, 0x73, 0x3e,
 'X', 2, 0x0e, 0xa4,
 'Y', 3, 0x27, 0x7a, 0x7e,
 'Z', 3, 0xae, 0xe0, 0x04,
 '\0'
};

unsigned char *nibbles[256];

void initchars(void)
{
  int i;
  unsigned char *s = charvec;
  for (i = 0; i < 256; i++) nibbles[i] = NULL;
  for (;;) {
    if (*s == '\0') break;
    nibbles[*s] = s+1;
    s = s+1;
    s = s + (*s) + 1;
  }
};

int lookupx[16] = {
  0x00, 0x04, 0x08, 0x0c, 0x10,
  0x00, 0x04, 0x08, 0x0c, 0x10,
  0x00, 0x04, 0x08, 0x0c, 0x10,
  0
};

int lookupy[16] = {
  0x00, 0x00, 0x00, 0x00, 0x00,
  0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
  0x18, 0x18, 0x18, 0x18, 0x18,
  0
};

int curx = 0, cury = 0, curcol = 15;;

void vecmoveto(int x, int y)
{
  curx = x; cury = y; /* currently internal but on vectrex this may be a 'move abs' */
}

void veccol(int col)
/* Original tailgunner levels: 7=>medium 15=>bright - we don't use any others */
{
  curcol = col;
}

void printchar(int c) /* updating curx, cury */
{
  char *nibblep = nibbles[c&255];
  int i, nibble, from, to, len;

  if (nibblep == NULL) {
    curx += 0x18; /* space */
    return;
  }

  len = *nibblep++;
  for (i = 0; i < len; i++) {
    nibble = *nibblep++;
    to = nibble&15; from = (nibble>>4)&15;

    CinemaVectorData(curx+lookupx[from], cury+lookupy[from],
                     curx+lookupx[to],   cury+lookupy[to],
                     curcol);
  }
  curx += 0x18;
  /* at current x y and do implicit move */
}

void printstring(char *s)
{
  while (*s != '\0') printchar(*s++);
}

unsigned char rectangle_lookup_x[8] = {
 0x47, 0xb9, 0xb9, 0x47, 0x3f, 0xc1, 0xc1, 0x3f
};

unsigned char rectangle_lookup_y[8] = {
 0x9b, 0x9b, 0x65, 0x65, 0xa3, 0xa3, 0x5d, 0x5d
};

unsigned char rectangle_lookup_z[8] = {
 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
};

unsigned char rectangles[] = {
  0x01, 0x12, 0x23, 0x30, 0x45, 0x56, 0x67, 0x74, 0xff
};

void print_rectangles_seg(int c)
{
  unsigned char *coords = rectangles;
  int fromx, fromy, fromz, tox, toy, toz;
  int nib1 = c >> 4, nib2 = c&7;
  fromx = rectangle_lookup_x[nib1];
  fromy = rectangle_lookup_y[nib1];
  fromz = rectangle_lookup_z[nib1];
  tox = rectangle_lookup_x[nib2];
  toy = rectangle_lookup_y[nib2];
  toz = rectangle_lookup_z[nib2];

  CinemaVectorData(curx+fromx, cury+fromy,
                   curx+tox,   cury+toy,
                   15);
}

void print_rectangles(void)
{
  /* Intro screen */
  char *s = rectangles;
  unsigned char ch = *s;
  while (ch != 0xff) {
    print_rectangles_seg(ch);
    s += 1;
    ch = *s;
  }
}

unsigned char tg1_lookup_x[16] = {
 0x5d, 0x6d, 0x65, 0x65, 0x71, 0x77, 0x7d, 0x74, 0x7a, 0x89, 0x89, 0x95, 0x95, 0xa1, 0xa7, 0xa7
};

unsigned char tg1_lookup_y[16] = {
 0x95, 0x95, 0x95, 0x83, 0x83, 0x95, 0x83, 0x8c, 0x8c, 0x83, 0x95, 0x95, 0x83, 0x83, 0x7d, 0x6b
};

unsigned char tg1_lookup_z[16] = {
 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
};

unsigned char tg1[] = {
  0x01, 0x23, 0x45, 0x56, 0x78, 0x9a, 0xbc, 0xcd, 0xef, 0xff
};

unsigned char tg2_lookup_x[16] = {
 0xa7, 0xb3, 0xb3, 0xb0, 0xb3, 0xa7, 0xa1, 0x95, 0x95, 0xa1, 0x9b, 0x95, 0x8f, 0x8f, 0x83, 0x83
};

unsigned char tg2_lookup_y[16] = {
 0x7d, 0x7d, 0x74, 0x74, 0x6b, 0x74, 0x6b, 0x6b, 0x7d, 0x7d, 0x74, 0x74, 0x7d, 0x6b, 0x7d, 0x6b
};

unsigned char tg2_lookup_z[16] = {
 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
};

unsigned char tg2[] = {
  0x01, 0x12, 0x34, 0x25, 0x67, 0x78, 0x89, 0xab, 0xcd, 0xde, 0xef, 0xff
};

unsigned char tg3_lookup_x[16] = {
 0x7d, 0x7d, 0x71, 0x71, 0x6b, 0x6b, 0x5f, 0x5f, 0x5c, 0x56, 0x59, 0x59, 0x4d, 0x4d, 0x59
};

unsigned char tg3_lookup_y[16] = {
 0x7d, 0x6b, 0x7d, 0x6b, 0x7d, 0x6b, 0x6b, 0x7d, 0x72, 0x72, 0x72, 0x6b, 0x6b, 0x7d, 0x7d
};

unsigned char tg3_lookup_z[16] = {
 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
};

unsigned char tg3[] = {
  0x01, 0x12, 0x23, 0x45, 0x56, 0x67, 0x89, 0xab, 0xbc, 0xcd, 0xde, 0xff
};

void print_tg_seg(char c, unsigned char *tg_lookup_x, unsigned char *tg_lookup_y, unsigned char *tg_lookup_z) {
  char *coords = rectangles;
  int fromx, fromy, fromz, tox, toy, toz;
  int nib1 = (c >> 4)&15, nib2 = c&15;
  fromx = tg_lookup_x[nib1];
  fromy = tg_lookup_y[nib1];
  fromz = tg_lookup_z[nib1];
  tox = tg_lookup_x[nib2];
  toy = tg_lookup_y[nib2];
  toz = tg_lookup_z[nib2];

  // quick hack while testing - change distance but don't roll

  CinemaVectorData(curx+fromx, cury+fromy,
                   curx+tox,   cury+toy,
                   15);
}

void print_tg_word(unsigned char *tg, unsigned char *tg_lookup_x, unsigned char *tg_lookup_y, unsigned char *tg_lookup_z)
{
  /* The text inside the intro screen rotating box */
  char *s = tg;
  unsigned char ch = *s;
  while (ch != 0xff) {
    print_tg_seg(ch, tg_lookup_x, tg_lookup_y, tg_lookup_z);
    s += 1;
    ch = *s;
  }
}

void print_tg(void)
{
   print_tg_word(tg1, tg1_lookup_x, tg1_lookup_y, tg1_lookup_z);
   print_tg_word(tg2, tg2_lookup_x, tg2_lookup_y, tg2_lookup_z);
   print_tg_word(tg3, tg3_lookup_x, tg3_lookup_y, tg3_lookup_z);
}

void starplot(int x, int y)
{
  /* Replace with a point call on other hardware */
  /* One-pixel line == one point */
  CinemaVectorData(x, y,
                   x+1, y+1,
                   /* 7 is too faint */ 15);
}


/* The screen is divided up into 8 sectors:

          \ | /
           \|/
          --+--
           /|\
          / | \

   We want 16 stars on screen at all times.

   At any time, each sector must have 2 stars active in it.

   To provide variety, we will have 4 tracks through each sector, and
   cycle them as each star finishes its journey.

 */

int star_x1[32] = {
  0, 0, 0, 0,
  25, 125, 225, 325,
  425, 525, 625, 725,
  1000, 1000, 1000, 1000,
  0, 0, 0, 0,
  25, 125, 225, 325,
  425, 525, 625, 725,
  1000, 1000, 1000, 1000,
};

int star_y1[32] = {
  25, 125, 225, 325,
  0,0,0,0,
  0,0,0,0,
  35, 135, 235, 335,
  425,525,62,725,
  800,800,800,800,
  800,800,800,800,
  425,525,62,725,
};

int clipoff(int x, int y)
{
  /* Stars never reach center of screen */
  return ((0x1b0 < x && x <= 0x250) && (0x140 <= y && y <= 0x1c0));
}

/**************************************************************************
 *  line_fast                                                             *
 *    draws a line using Bresenham's line-drawing algorithm, which uses   *
 *    no multiplication or division.                                      *
 **************************************************************************/

#define sgn(x) ((x<0)?-1:((x>0)?1:0)) /* macro to return the sign of a number */
#define abs(x) (((x)>=0)?(x):-(x))

void plot_star(int starno)
{
  static int i[16],dx[16],dy[16],x[16],y[16],px[16],py[16],dxabs[16],dyabs[16],sdx[16],sdy[16];
  static int state[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
  static int flip[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
  static int maxspeed[16], ticks[16];
  int speed, done=FALSE;
  int x1 = star_x1[(starno<<1)+flip[starno]], y1 = star_y1[(starno<<1)+flip[starno]],
      x2 = 0x200, y2 = 0x180;

  if (state[starno] == 0) { /* initialise */
    dx[starno]=x2-x1;      /* the horizontal distance of the line */
    dy[starno]=y2-y1;      /* the vertical distance of the line */
    dxabs[starno]=abs(dx[starno]);
    dyabs[starno]=abs(dy[starno]);
    sdx[starno]=sgn(dx[starno]);
    sdy[starno]=sgn(dy[starno]);
    x[starno]=dyabs[starno]>>1;
    y[starno]=dxabs[starno]>>1;
    px[starno]=x1;
    py[starno]=y1;
    state[starno] = 1; maxspeed[starno] = 9 /* critical, depends on vector length */;
    ticks[starno] = 0;
    /* and draw first pixel */
    starplot(px[starno],py[starno]);
    i[starno] = 0; /* initialise 'loop' counter */
    return;
  }

  if (dxabs[starno]>=dyabs[starno]) { /* the line is more horizontal than vertical */
    for (speed = 0; speed < maxspeed[starno]; speed++) {
      y[starno]+=dyabs[starno];
      if (y[starno]>=dxabs[starno])
      {
        y[starno]-=dxabs[starno];
        py[starno]+=sdy[starno];
      }
      px[starno]+=sdx[starno];
      i[starno] += 1;
      if (done = (i[starno] >= dxabs[starno])) {
        break;
      }
    }
  } else {  /* the line is more vertical than horizontal */
    for (speed = 0; speed < maxspeed[starno]; speed++) {
      x[starno]+=dxabs[starno];
      if (x[starno]>=dyabs[starno])
      {
        x[starno]-=dyabs[starno];
        px[starno]+=sdx[starno];
      }
      py[starno]+=sdy[starno];
      i[starno] += 1;
      if (done = (i[starno] >= dyabs[starno])) {
        break;
      }
    }
  }
  if (done) {
    state[starno] = 0; /* Done! */
    flip[starno] = 1-flip[starno];
  }
  ticks[starno] += 1;
  if (ticks[starno] == 12) {
    ticks[starno] = 0;
    maxspeed[starno] -= 1;
  }
  if (maxspeed[starno] <= 0) maxspeed[starno] = 1;
  if (clipoff(px[starno], py[starno])) {
    state[starno] = 0;
    flip[starno] = 1-flip[starno];
  } else {
    starplot(px[starno],py[starno]);
    /* for moving stars we just do one of these each time increment */
    /* this is in effect a very slow line draw */
  }
}

void stars(int speed)
{
  static int started = 0;
  int star;
  if (started == 0) {
    int laststar;
    for (laststar = 1; laststar <= 16; laststar++) { /* skew */
      int i;
      for (i = 0; i < 20; i++) { /* gap between skew */
        for (star = 0; star < laststar; star++) plot_star(star);
      }
    }
    started = 1;
  } else {
    int i;
    for (i = 0; i < speed; i++) {
      for (star = 0; star < 16; star++) plot_star(star);
    }
  }
}

static int firex[2];
static int firey[2];

/* MISTAKE HERE - we need a line drawing algorithm which increments in one
   Y unit each call, *NOT* one X unit. */

/* returns true if drawn to end of vector, false if should call again (co-routine hack) */

// TO DO: when left and right beams meet, this is the point where we check
// to see if we have hit a ship.  So need to store the XY location and light
// up a flag.  The ships themselves can check to see if they've been hit,
// if the point intersects a line *or* is contained within a face.

// Note we are fudging the Z depth of the shots.  Means a stereo-3D port
// of the code will not be possible unless we rewrite.

int plot_fire(int lr, int x1, int y1, int x2, int y2)
{
  int i,dx,dy,sdx,sdy,dxabs,dyabs,x,y,px,py;
  dx=x2-x1;      /* the horizontal distance of the line */
  dy=y2-y1;      /* the vertical distance of the line */
  dxabs=abs(dx);
  dyabs=abs(dy);
  sdx=sgn(dx);
  sdy=sgn(dy);
  x=dyabs>>1;
  y=dxabs>>1;
  px=x1;
  py=y1;

  CinemaVectorData(px, py, px+1, py+1, 15);

  if (dxabs>=dyabs) /* the line is more horizontal than vertical */
  {
    for(i=0;i<dxabs;i++)
    {
      y+=dyabs;
      if (y>=dxabs)
      {
        y-=dxabs;
        py+=sdy;
      }
      px+=sdx;
      if (i <= 25) {
        CinemaVectorData(px, py, px+1, py+1, 15);
        firex[lr] = px; firey[lr] = py;
      }
      if (i == 50) {firex[lr] = px; firey[lr] = py;}  /* draw next line 100 pixels in from this one */
    }
  }
  else /* the line is more vertical than horizontal */
  {
    for(i=0;i<dyabs;i++)
    {
      x+=dxabs;
      if (x>=dyabs)
      {
        x-=dyabs;
        px+=sdx;
      }
      py+=sdy;
      if (i <= 25) {
        CinemaVectorData(px, py, px+1, py+1, 15);
        firex[lr] = px; firey[lr] = py;
      }
      if (i == 50) {firex[lr] = px; firey[lr] = py;}
    }
  }
  return(i <= 30);
}

static unsigned char crosshair[40] = {
 0x63, 0x80, 0x9e, 0x80,
 0x94, 0x76, 0x94, 0x8a,
 0x8a, 0x94, 0x76, 0x94,
 0x80, 0x9e, 0x80, 0x62,
 0x8a, 0x6c, 0x76, 0x6c,
 0x6c, 0x76, 0x6c, 0x8a,
 0x7b, 0x8a, 0x85, 0x8a,
 0x8a, 0x85, 0x8a, 0x7b,
 0x85, 0x76, 0x7b, 0x76,
 0x76, 0x7b, 0x76, 0x85,
};

static unsigned char shieldvec[26] = {
 0xc0, 0xa0,
 0xe0, 0x80,
 0x80, 0x20,
 0x20, 0x80,
 0x40, 0xa0,
 0x80, 0x60,
 0xc0, 0x20,
 0xe0, 0x40,
 0x80, 0xa0,
 0x20, 0x40,
 0x40, 0x20,
 0x80, 0x60,
 0xc0, 0xa0,
};

void draw_shields(void)
{
  /* add rotation and scaling to simulate approach.  Should recode shields as X/Y/Z for simpler manipulation. */
  int i;
  for (i = 0; i < 12; i++) {
    CinemaVectorData((shieldvec[i*2]<<2)+0x20, shieldvec[i*2+1]<<2,
                     (shieldvec[i*2+2]<<2)+0x20, shieldvec[i*2+3]<<2,
                     curcol);
  }
}

void draw_crosshair(int x, int y)
{
  int i;
  for (i = 0; i < 10; i++) {
      CinemaVectorData(x + (crosshair[i*4]) - 0x80,   y + crosshair[i*4+1] - 0x80,
                       x + (crosshair[i*4+2]) - 0x80, y + crosshair[i*4+3] - 0x80,
                     curcol);
  }
}

int
main(int argc, char** argv)
{
    
#ifdef OPENGL
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(SCREEN_W, SCREEN_H);
    glutInit(&argc, argv);

    glutCreateWindow("Tailgunner");
    glutTimerFunc(0,timer,0);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
#endif

    initchars();

#ifdef OPENGL

#ifdef LINEWIDTH
    glLineWidth(LINEWIDTH);
#endif

    //    glutIdleFunc(idle); - replaced with timer function instead, to ensure accurate FPS timing.
    glutMainLoop();
#endif

#ifdef PRINT
    int ship_id = atoi(argv[1]);
    int angle_x = atoi(argv[2]);
	int angle_y = atoi(argv[3]);
	int angle_z = atoi(argv[4]);
    DrawShip(ship_id, 0, 0, 0, angle_x, angle_y, angle_z, 0, 0);
#endif

    exit(0);
    return 0;
}

#define PREGAME 1
#define COINED 2
#define PLAYING 3

static int tgstate = PREGAME;


static int credits = '0';
static int passed = '0';
static char shields[3] = { '8', '0', '\0'};


void cineExecuteFrame(void) {
//int main(int argc, char **argv) {
int k = 0;
static int start = 0;
static int shieldtick = 0;
static int firing = FALSE;
static int reloaded = TRUE;
static int firedone1, firedone2;

//  for (;;) {
    switch (tgstate) {

    case PREGAME:

      //vecmoveto(0x190, 210); for (i = '0'; i <= '9'; i++) printchar(i);
      //vecmoveto(200, 270); for (i = 'A'; i <= 'Z'; i++) printchar(i);

      vecmoveto(0x96, 0x28a); printstring("SCORE");
      vecmoveto(0xb8, 0x258); printstring(" 00");

      vecmoveto(0x2bc, 0x28a); printstring("HIGH[SCORE");
      vecmoveto(0x2f8, 0x258); printstring(" 00");

      /* Display 'tailgunner' rectangle.
         Rotate it one increment.
         If it is facing away, discard the text, just keep the rectangles
       */

      /* do a cycle of : */

      /*
          In the real game, the attract screen tumbles towards the player from the back,
          with the text disappearing when the placard is facing away from the player;
          This should be done with the same matrix mechanism as we're using for the ships,
          but currently it is static.
       */

      vecmoveto(0x180, 0x100);  /* This will also need to be changed when applying scaling */
      print_rectangles();       /* needs rotation applied */
      print_tg();               /* identical matrix needed */

      /* when rectangle at maximum size, stop it and flash intensity */

      /* followed by a cycle of: move and show ships (quit when all 3 pass the screen) */

      /* move existing stars in by a time unit, remove old stars that
         hit internal rectangle, replace with new stars on outer border.
         This is independent of game state */

      stars(1);

      break;

    case COINED:

      /*vecmoveto(0x190, 210); for (i = '0'; i <= '9'; i++) printchar(i);
      //vecmoveto(200, 270); for (i = 'A'; i <= 'Z'; i++) printchar(i);*/

      vecmoveto(0x96, 0x28a); printstring("SCORE");
      vecmoveto(0xb8, 0x258); printstring(" 00");

      vecmoveto(0x2bc, 0x28a); printstring("HIGH SCORE");
      vecmoveto(0x2f8, 0x258); printstring(" 00");

      start = (start + 1) & 31;
      veccol(start >= 16 ? 15 : 7);
      vecmoveto(0x190, 0x190);
      printstring("PUSH START");
      veccol(15);

      vecmoveto(0x190, 0x32); printstring("CREDITS");
      vecmoveto(0x258, 0x32); printstring("  "); printchar(credits > '9' ? '9' : credits);

      /* move existing stars in by a time unit, remove old stars that
         hit internal rectangle, replace with new stars on outer border.
         This is independent of game state */

      stars(1);
      break;

    case PLAYING:
      vecmoveto(0xb8, 0x258); printstring(" 00"); /* score */
      vecmoveto(0x2f8+0x18, 0x258); printchar(passed); /* ships passed */
      vecmoveto(0x1cc, 0x28a); printstring(shields);  /* shields value */

      /* PLAY ONE FRAME OF GAME HERE */

      /* move existing stars in by a time unit, remove old stars that
         hit internal rectangle, replace with new stars on outer border.
         This is independent of game state */

#ifdef NEVER
      {
        // when a ship gets by us, there's a 'whoosh' noise and the passing stars speed up.
        static int passing = 0;
        passing = passing + 1;
        if (passing >= 500) {
          if (passing == 500) {
            passed += 3;
            if (passed > '9') {
              passed = '0'; credits -= 1;
              if (credits == '0') tgstate = PREGAME; else tgstate = COINED;
              firing = FALSE;
            }
          }
          stars(2);
        } else stars(1);
        if (passing == 540) passing = 0;
      }
#else
      stars(1);
#endif
      /* move and show ships */

//      vecmoveto((mouse_x*5)/4+0x30, 640-((mouse_y*10)/8)); draw_crosshair(curx, cury);

      // when we hook the mouse up, it ought to be possible to tweak the coordinates returned
      // so that they are directly usable with the soft crosshair cursor
      vecmoveto(mouse_x, mouse_y); draw_crosshair(curx=mouse_x, cury=mouse_y);

      if (mouse_b & 1) {
        if (!firing && reloaded) {
          /* initiate fire */;
          firing = TRUE; reloaded = FALSE;
          firedone1 = plot_fire(0, 40,40, mouse_x, mouse_y);
          firedone2 = plot_fire(1, 1000,40, mouse_x, mouse_y);
          //          firedone1 = plot_fire(0, 40,40, (mouse_x*5)/4+0x70, 640-((mouse_y*10)/8));
          //          firedone2 = plot_fire(1, 1000,40, (mouse_x*5)/4+0x70, 640-((mouse_y*10)/8));
        } else {
          if (!firedone1) {
              //            firedone1 = plot_fire(0, firex[0], firey[0], (mouse_x*5)/4+0x70, 640-((mouse_y*10)/8));
            firedone1 = plot_fire(0, firex[0], firey[0], mouse_x, mouse_y);
          }
          if (!firedone2) {
              //            firedone2 = plot_fire(1, firex[1], firey[1], (mouse_x*5)/4+0x70, 640-((mouse_y*10)/8));
            firedone2 = plot_fire(1, firex[1], firey[1], mouse_x, mouse_y);
          }
          firing = (!firedone1 || !firedone2);
        }
      } else {
        if (firing) { /* Finish off the last shot */
          if (!firedone1) {
              //            firedone1 = plot_fire(0, firex[0], firey[0], (mouse_x*5)/4+0x70, 640-((mouse_y*10)/8));
            firedone1 = plot_fire(0, firex[0], firey[0], mouse_x, mouse_y);
          }
          if (!firedone2) {
              //            firedone2 = plot_fire(1, firex[1], firey[1], (mouse_x*5)/4+0x70, 640-((mouse_y*10)/8));
            firedone2 = plot_fire(1, firex[1], firey[1], mouse_x, mouse_y);
          }
          firing = !(firedone1 && firedone2);
        } else reloaded = TRUE;
      }

      /* we might need a debouncing algorithm here to match the behaviour of the real game */
      if ((mouse_b & 2) && (shields[0] != '0' || shields[1] != '0')) {
        draw_shields();
        if (shieldtick == 0) { // note that shield reserves should go down less quickly than 1 unit per frame
          shields[1] -= 1;
          if (shields[1] < '0') {
            shields[1] = '9'; shields[0] -= 1;
            if (shields[0] < '0') {
                shields[0] = shields[1] = '0';
            }
          }
          shieldtick = 8;
        } else shieldtick -= 1;
      } else shieldtick = 0;

      mouse_b = 0; // while testing keyboard - THIS MAY BE WHY SHIELDS ARE NOT WORKING ON THE KEYBOARD

      break;
    }

    { // Enemy ships:
        static int n,
                   x, y, z,
                   rx, ry, rz,
                   sx[NSHIPS], sy[NSHIPS],
                   ax[NSHIPS], ay[NSHIPS], az[NSHIPS],
                   bx[NSHIPS], by[NSHIPS], bz[NSHIPS],
                   cx[NSHIPS], cy[NSHIPS], cz[NSHIPS],
                   dx[NSHIPS], dy[NSHIPS], dz[NSHIPS],
                   deltax, deltay, deltaz;
	static int t = -1, t2 = 0, ship = 0;

        t += 1;

        // THIS WHOLE AREA OF DETERMINING THE FLIGHT PATHS AND SHIP ORIENTATIONS ETC IS A HACK AND A W.I.P.
        // I'm experimenting here, and it shows.  This messy code will be completely replaced one I have a 
        // better idea of what I want to do.

        // back plane phase.  z=0, xy vary, Final path should be pointing downwards to ensure a smooth transition
        // from one place to another, but currently there's a jarring discontinuity as the ships change direction...
        if (t == 0) for (n = 0; n<NSHIPS; n++) { // initialise
            if (n == 0) ship = (ship+1)&3;

            bx[n] = irand(1024); by[n] = irand(1024); // random path once on screen
   
            switch (irand(3)) {                                                                 // Approach from:
                case 0: ax[n] = 0;          ay[n] = -irand(400); dx[n] = 400-irand(300); break; // left hand edge of screen
                case 1: ax[n] = irand(800); ay[n] = 799;         dx[n] = 700-irand(300); break; // top of screen
                case 2: ax[n] = 1023;       ay[n] = irand(400);  dx[n] =1000-irand(300); break; // right-hand edge of screen
            }

            //dy[n] = 300+irand(200); // always terminate near the center 512, 400!
            dy[n] = 200+irand(500); // always terminate near the center 512, 400!
            cx[n] = dx[n]; cy[n] = dy[n]+irand(200); // cx==dx ensures that when we switch from a 2D curve on
            rx=192; ry=0;
        }

        if (t < 512) for (n = 0; n<NSHIPS; n++) {
            sx[n] = d1bezier(ax[n],bx[n], cx[n],dx[n], t,9, &deltax); // use screen coordinates when on backplane - easier!
            sy[n] = d1bezier(ay[n],by[n], cy[n],dy[n], t,9, &deltay);
            ry = direction(n, deltax, deltay);
            DrawShip(ship, 0,0,0, rx,ry,0, sx[n]-512, sy[n]-400);// ry=192 faces right  ry=64 faces left  ry=0 up   ry=128 down
        } // loop over each simultaneous on-screen ship

        // initialise next phase
        // calculate a spline for y and z (use x for z below)
        // (we really need more than this one line segment for cool flightpaths...)
        if (t == 512) for (n = 0; n<NSHIPS; n++) { // initialise
            ry = 0;
            x = (sx[n]-512)*1400/256; // convert back from screen coords to 3D.  Calculation is a guess that fitted OK.  Unchecked.
            y = (sy[n]-400)*1400/256; // I was afraid this hack might break when I changed TWEAK from 1024 to 2048, but apparently not...
            z = 0;
            ax[n] = x; ay[n] = y; az[n] = z;
            bx[n] = /*ax[n]+irand(128)*/0; by[n] = y-100; bz[n] = z; // z vector pointing towards viewport
            cx[n] = 0; cy[n] = irand(1024); cz[n] = 2900;
            dx[n] = 256; if (irand(2)) dx[n] = -dx[n];
            //if (irand(2)) dx[n] = -dx[n];
            dy[n] = irand(16); if (irand(2)) dy[n] = -dy[n];
            dz[n] = 3000;
        }  // loop over n ships

        if ((512 <= t) && (t <= 512+2048)) for (n = 0; n<NSHIPS; n++) { // turn and face viewport
            //x = (sx[n]-512)*1400/256; // x is now fixed for this ship
            x = d1bezier(ax[n],bx[n], cx[n],dx[n], t-512,11, &deltax);
            y = d1bezier(ay[n],by[n], cy[n],dy[n], t-512,11, &deltay);
            z = d1bezier(az[n],bz[n], cz[n],dz[n], t-512,11, &deltaz);
            //                y = (sy[n]-400)*1400/256;
            //                z++;
            if (rx && ((t&15) == 0)) rx = (rx+1)&255;
            DrawShip(ship, x, y, z, rx,ry,0,  0,0);
        }  // loop over n ships

        if (++t >= 512+2048) t = -1; // next wave
        
    } // end of ship generation block - effectively the main loop.
    
    if (/*keypressed()*/PENDING_KEY != -1) {
      k = /*readkey()*/ PENDING_KEY & 0x7f; PENDING_KEY = -1;
//      fprintf(stdout, "K: %d\n", k);
    }
    if (k == 27) {
        exit(0);
    } else if (k == '3') { // same as MAME
        tgstate = COINED; credits += 1;
    } else if (k == '1') {
        if (tgstate == COINED) tgstate = PLAYING;
    } else if (k == 13) {
        mouse_b |= 1; // fire
    } else if (k == 'z') { // keys as used on BBC Micro "snapper" etc.
        mouse_x -= 4; // zx/'
    } else if (k == 'x') {
        mouse_x += 4; // zx/'
    } else if (k == '/') {
        mouse_y -= 4; // zx/'
    } else if (k == '\'') {
        mouse_y += 4; // zx/'
    } else if (k == 9) {
        mouse_b |= 2; // shields (needs special handling if done by keyboard)  THIS DOES NOT CURRENTLY WORK.
                      // Probably mouse_b is being reset after 1 frame and not being auto-repeated by keyboard
                      // so we'll need some sort of soft autorepeat on a timer...
    } else if (k == ' ') {
        if (tgstate == PLAYING) {
          credits -= 1;
          if (credits == '0') tgstate = PREGAME; else tgstate = COINED;
        }
    }
}
