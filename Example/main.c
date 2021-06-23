/*
 *  main.c
 *  dsxtest
 *
 *  Created by Julius Parishy on 6/10/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */
 
 #include <dsx.h>
 
 PSP_MODULE_INFO("dsxtest", 0, 1, 1);
 
 int main()
 {
	dsxSystemInit();
	
	while(1)
	{
		dsxDrawingStart();
		
		dsxDrawFontDefault(5, 150, GU_RGBA(255, 255, 255, 255), "Hello world");
		
		dsxDrawingEnd();
	}

	return 0;
}

