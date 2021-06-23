/******************************************************
 *                    dsx_gfx.h                       *
 *                        DSX                         *
 *                   Julius Parishy                   *
 *                  a.k.a. PSPJunkie_                 *
 *                  Copyrighted 2007                  *
 ******************************************************/
 
#include <pspkernel.h>
#include "dsx_gfx.h"


typedef struct
{
	Color color;
	float x, y, z;
} DSX2DVERTEX;

void dsxDrawRectangle(float x, float y, float w, float h, Color color)
{
	sceKernelDcacheWritebackInvalidateAll();

	DSX2DVERTEX* src = (DSX2DVERTEX*) sceGuGetMemory(sizeof(DSX2DVERTEX) * 2);

	src[0].x = x;
	src[0].y = y;
	src[0].z = 1;
	src[0].color = color;

	src[1].x = x + w;
	src[1].y = y + h;
	src[1].z = 1;
	src[1].color = color;

	sceGuDisable(GU_TEXTURE_2D);
	sceGuEnable(GU_BLEND);
	sceGuDisable(GU_DEPTH_TEST);
	sceGuBlendFunc(GU_ADD, GU_SRC_ALPHA, GU_ONE_MINUS_SRC_ALPHA, 0, 0);

	sceGuDrawArray(GU_SPRITES, GU_COLOR_8888 | GU_VERTEX_32BITF | GU_TRANSFORM_2D, 2, 0, src);

	sceGuEnable(GU_TEXTURE_2D);
}
