DSX VSH Drawing Mini-Lib
Written by PSPJunkie with help from Insert_Witty_Name

Purpose of DSX:

	As people begin to explore the new aspects of PSP programming, they stray toward the topic of the 'PRX'. Using a 	
	PRX as a OE plugin will allow you to run code over the PSPs XMB (Cross Media Bar). DSX simplifies the process of 	
	using bad ports of the infamous 'graphics.c' library to run over the XMB. This said 'port' uses VRAM manipulation 	
	to achieve what DSX does in hardware. The 'port' takes a pixel on the screen and changes the color value to see 
	something on top of the XMB. DSX uses the power of the PSPs GU (Graphics Utility) to display content over the 		
	XMB.

Who should use DSX:

	Anyone who is interested in making a PRX (or OE plugin) can use DSX. If you are already a developer, you just 		
	have to install the library and you are all set. If you are not a developer and wish to use DSX in attempt to 
	make a PRX, I would suggest you obtain basic C knowledge first. Consider the following books and links.
		
		"The C Programming Language" ~ Brian W. Kernighan and Dennis M. Ritchie. 
		"C in a Nutshell" ~ Peter Prinz and Tony Crawford
		"C++ Cookbook" ~ Ryan Stephens, Christopher Diggins, Jonathan Turkanis, and Jeff Cogswell

		http://cprogramming.com/
		http://psp-programming.com/tutorials/
		http://cplusplus.com/
	
	Otherwise, see "How to install DSX" for instruction in doing such that.

How to install DSX:
	
	I, myself, had a bit of difficulty in compiling DSX as a library. If you have any trouble with the following 		
	directions, please email me at Julius@JParishy.com for assistance.

	1.) Download the zip package. (Of course, you've already done this step)

	2.) Unzip the package using your favorite un-archiving application to a directory that you will remember. I would 	    
	    suggest your home folder.

	3.) Open Cygwin/Terminal/Konsole or whatever you use to compile your PSP applications.

	4.) 'cd' into the directory that you unzipped the DSX package (ie 'cd dsxrelease' without quotes). 

	5.) 'cd' into the source folder by doing 'cd Source'.

	6.) Next, make and install DSX by typing 'make release'. You may be asked to type in your account password.

	7.) If all goes well, you should have successfully installed DSX.

	NOTE: If you plan on uninstalling DSX and do not wish to do it manually, keep the source to DSX and do not delete 	      
	      anything inside the package. When you want to uninstall it, cd into the folders directory and type 
	      'make release_clean' and it will uninstall.

How to use DSX:
	
	Using DSX is very simple and requires very little effort. This will definitely discourage the famous quote "Z0MG, 	
	PRXs are too hard to make!!!!1!". In reality, it is as simple as defining 'BUILD_PRX = 1' in your makefile. DSX 
	just includes a little wrapper to simplify some of the work. Included in the DSX package is an example located
	at 'dsxrelease.zip/example/'. If you use that as a base and the makefile, you should be all set. 

Current functionality of DSX:
	
	DSX is meant to be a VSH Drawing wrapper, not a complete fully functional library. At the current point in time, 	
	DSX has the ability to draw text to the screen and draw simple shapes. Do to the trouble I had building DSX as a 
	library, I took out most of the drawing functions leaving you with drawing text and drawing rectangles. Of 
	course you really don't need much more, but it sure can help. On the next release I will fix the problems I was 
	having and write more useful functions and, of course, make it as fast as possible.

Current bugs in DSX:
	
	Obviously, we do not know everything about the VSH. Bugs I have noticed were that you will see flickering on the 
	VSH. I am not a genious, but I am working to see if I can prevent this. Also, I had a bit of trouble calling the
	PSPs utility functions over the VSH. Maybe it was just me, I am honestly unsure about this.

Contacting me:
	
	PSPJunkie_               - QJ forums
	PSPJunkie                - PSP-Programming forums
	JParishy                 - AIM
	PSPJunkie_07@hotmail.com - MSN
	Julius@JParishy.com      - Email

	Feel free to contact me at any of the above addresses. 

	Please feel free to let me know of any bugs you may encounter.

Release notes:
	
	[06/10/07] - Initial release. Very few functionality. Compiles as a library. 




Thank you for downloading DSX and I hope you will find it useful.

Sincerely,
Julius Parishy
a.k.a. PSPJunkie
	

