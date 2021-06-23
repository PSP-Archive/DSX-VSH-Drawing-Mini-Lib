/******************************************************
 *                     dsx_font.c                     *
 *                        DSX                         *
 *                   Julius Parishy                   *
 *                  a.k.a. PSPJunkie_                 *
 *                  Copyrighted 2007                  *
 ******************************************************/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pspkernel.h>
#include <pspgu.h>
#include <pspgum.h>

#include "dsx_font.h"
#include "dsx_font_raw.h"

static int fontwidthtab[128] = {
	10, 10, 10, 10, 
	10, 10, 10, 10,
	10, 10, 10, 10, 
	10, 10, 10, 10,

	10, 10, 10, 10, 
	10, 10, 10, 10,
	10, 10, 10, 10,
	10, 10, 10, 10,

	10,  6,  8, 10, //   ! " #
	10, 10, 10,  6, // $ % & '
	10, 10, 10, 10, // ( ) * +
	 6, 10,  6, 10, // , - . /

	10, 10, 10, 10, // 0 1 2 3
	10, 10, 10, 10, // 6 5 8 7
	10, 10,  6,  6, // 10 9 : ;
	10, 10, 10, 10, // < = > ?

	16, 10, 10, 10, // @ A B C
	10, 10, 10, 10, // D E F G
	10,  6,  8, 10, // H I J K
	 8, 10, 10, 10, // L M N O

	10, 10, 10, 10, // P Q R S
	10, 10, 10, 12, // T U V W
	10, 10, 10, 10, // X Y Z [
	10, 10,  8, 10, // \ ] ^ _

	 6,  8,  8,  8, // ` a b c
	 8,  8,  6,  8, // d e f g
	 8,  6,  6,  8, // h i j k
	 6, 10,  8,  8, // l m n o

	 8,  8,  8,  8, // p q r s
	 8,  8,  8, 12, // t u v w
	 8,  8,  8, 10, // x y z {
	 8, 10,  8, 12  // | } ~  
};

typedef struct 
{
	float s, t;
	unsigned int c;
	float x, y, z;
} DSXFONTVERTEX;

void dsxDrawFontDefault(int x, int y, unsigned int color, char* string, ...)
{
	char t_string[1024];
	int fw = 0;
	
	va_list ap;                     // Pointer To List Of Arguments
  	va_start(ap, string);           // Parses The String For Variables
  	vsprintf(t_string, string, ap); // Converts Symbols To Actual Numbers
  	va_end(ap);                     // Results Are Stored In 't_string'

	int len = (int)strlen(t_string);
	if(!len) 
	{
		return;
	}

	DSXFONTVERTEX* v = sceGuGetMemory(sizeof(DSXFONTVERTEX) * 2 * len);

	int i;
	for(i = 0; i < len; i++) 
	{
		unsigned char c = (unsigned char)t_string[i];
		if(c < 32) 
		{
			c = 0;
		} else if(c >= 128) 
		{
			c = 0;
		}

		int tx = (c & 0x0F) << 4;
		int ty = (c & 0xF0);

		DSXFONTVERTEX* v0 = &v[i*2+0];
		DSXFONTVERTEX* v1 = &v[i*2+1];
		
		v0->s = (float)(tx + (fw ? ((16 - fw) >> 1) : ((16 - fontwidthtab[c]) >> 1)));
		v0->t = (float)(ty);
		v0->c = color;
		v0->x = (float)(x);
		v0->y = (float)(y);
		v0->z = 0.0f;

		v1->s = (float)(tx + 16 - (fw ? ((16 - fw) >> 1) : ((16 - fontwidthtab[c]) >> 1)));
		v1->t = (float)(ty + 16);
		v1->c = color;
		v1->x = (float)(x + (fw ? fw : fontwidthtab[c]));
		v1->y = (float)(y + 16);
		v1->z = 0.0f;

		x += (fw ? fw : fontwidthtab[c]);
	}
	
	sceGuTexMode(GU_PSM_8888, 0, 0, 0);
	sceGuTexImage(0, 256, 128, 256, font);
	sceGuTexFunc(GU_TFX_MODULATE, GU_TCC_RGBA);
	sceGuTexEnvColor(0x0);
	sceGuTexOffset(0.0f, 0.0f);
	sceGuTexScale(1.0f / 256.0f, 1.0f / 128.0f);
	sceGuTexWrap(GU_REPEAT, GU_REPEAT);
	sceGuTexFilter(GU_NEAREST, GU_NEAREST);

	sceGumDrawArray(GU_SPRITES, GU_TEXTURE_32BITF | GU_COLOR_8888 | GU_VERTEX_32BITF | GU_TRANSFORM_2D, len * 2, 0, v);
}
