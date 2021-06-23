###########################################################################
###########################################################################
#                       DSX Lib by Julius Parishy                         #
#                               Makefile                                  #
###########################################################################
###########################################################################
#                         Readme.now - Readme                             #
#                            Copying - GNU GPL License                    #
###########################################################################
###########################################################################

# Target Name
TARGET_LIB = libdsx.a

# Source Files
OBJS = ./dsx_font_raw.o ./dsx/dsx_font.o ./dsx/dsx_gfx.o ./dsx.o

# Use LIBC (Not selected by default?)
USE_PSPSDK_LIBC = 1

# Libraries
LIBS = -lpspgum -lpspgu -lm

# Misc.
INCDIR = 
CFLAGS = -O2 -G0 -Wall
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

LIBDIR =

PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak

install:

	@echo
	@echo "----------------------------------------------------"
	@echo "|                     DSX                          |"
	@echo "|                By PSPJunkie_                     |"
	@echo "|        With help from InsertWittyName            |"
	@echo "|                GPL Licensed                      |"
	@echo "----------------------------------------------------"
	@echo 
	@echo "Installing files..."
	@cp ./libdsx.a $(PSPSDK)/lib
	@cp ./dsx.h $(PSPSDK)/include/
	@mkdir -p $(PSPSDK)/include/dsx
	@cp ./dsx/dsx_gfx.h $(PSPSDK)/include/dsx/
	@cp ./dsx/dsx_font.h $(PSPSDK)/include/dsx/
	@echo 
	@echo "Files installed to..."
	@echo $(PSPSDK)/lib/libdsx.a
	@echo "and"
	@echo $(PSPSDK)/include/dsx.h
	@echo $(PSPSDK)/include/dsx/
	@echo 
	@echo "Enjoy."
	@echo
	
	
	
	
	
	
	