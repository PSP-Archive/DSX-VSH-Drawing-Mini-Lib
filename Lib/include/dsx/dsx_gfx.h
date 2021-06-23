/******************************************************
 *                    dsx_gfx.h                       *
 *                        DSX                         *
 *                   Julius Parishy                   *
 *                  a.k.a. PSPJunkie_                 *
 *                  Copyrighted 2007                  *
 ******************************************************/

#ifndef DSX_GFX_H_GUARD
#define DSX_GFX_H_GUARD

#include <pspkernel.h>
#include <pspdisplay.h>
#include <pspgu.h>
#include <pspgum.h>
#include <math.h>

typedef u32 Color;

/*** Shape Functions ***/

 /*******************************
 * Fuction: dsxDrawRectangle()
 * Purpose: Draws a rectangle
 * Notes: None
 *******************************/
void dsxDrawRectangle(float x, float y, float w, float h, Color color);

#endif /* DSX_GFX_H_GUARD */
