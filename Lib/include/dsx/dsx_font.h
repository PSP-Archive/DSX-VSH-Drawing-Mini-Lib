/******************************************************
 *                     dsx_font.h                     *
 *                        DSX                         *
 *                   Julius Parishy                   *
 *                  a.k.a. PSPJunkie_                 *
 *                  Copyrighted 2007                  *
 ******************************************************/

#ifndef DSX_FONT_H_GUARD
#define DSX_FONT_H_GUARD


/*******************************
 * Fuction: dsxDrawFontDefault()
 * Purpose: Prints text
 * Notes: Taken from sdk sample,
 *        but added stdarg.h 
 *        to handle string 
 *        replacements.
 *******************************/
void dsxDrawFontDefault(int x, int y, unsigned int color, char* string, ...);


#endif /* DSX_FONT_H_GUARD */
