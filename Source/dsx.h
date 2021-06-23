/******************************************************
 *                       dsx.h                        *
 *                        DSX                         *
 *                   Julius Parishy                   *
 *                  a.k.a. PSPJunkie_                 *
 *                  Copyrighted 2007                  *
 ******************************************************/
 
#ifndef DSX_H_GUARD
#define DSX_H_GUARD

#include <pspkernel.h>
 
#include "./dsx/dsx_font.h"
#include "./dsx/dsx_gfx.h"
 
/*******************************
* Fuction: dsxSystemInit()
* Purpose: Initiates DSX
* Notes: None
*******************************/
void dsxSystemInit();

/*******************************
* Fuction: dsxDrawingStart()
* Purpose: Starts drawing
* Notes: None
*******************************/
void dsxDrawingStart();

/*******************************
* Fuction: dsxDrawingEnd()
* Purpose: Ends drawing
* Notes: None
*******************************/
void dsxDrawingEnd();

#endif /* DSX_H_GUARD */

