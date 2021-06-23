/******************************************************
 *                       dsx.c                        *
 *                        DSX                         *
 *                   Julius Parishy                   *
 *                  a.k.a. PSPJunkie_                 *
 *                  Copyrighted 2007                  *
 ******************************************************/

#include <pspkernel.h>
#include <pspdisplay.h>
#include <pspgu.h>
#include <malloc.h>

#include "dsx.h"

static unsigned int __attribute__((aligned(16))) displayList[32768];

void dsxSystemInit()
{
	sceKernelDelayThread(500 * 1000);
}

void dsxDrawingStart()
{
	sceGuStart(GU_DIRECT, displayList);
}

void dsxDrawingEnd()
{
	sceGuFinish();
	sceGuSync(0, 0);
	
	sceDisplayWaitVblankStart();
}
