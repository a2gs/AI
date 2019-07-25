#/* Andre Augusto Giannotti Scota (a2gs)
# * andre.scota@gmail.com
# */


#/* makefile
# *
# *  Who     | When       | What
# *  --------+------------+----------------------------
# *   a2gs   | 18/07/2019 | Creation
# *          |            |
# */


# C flags:
CFLAGS_OPTIMIZATION = -g
#CFLAGS_OPTIMIZATION = -O3
CFLAGS_VERSION = -std=c11
CFLAGS_WARNINGS = -Wall -Wextra -Wno-unused-parameter -Wno-unused-but-set-parameter
CFLAGS_DEFINES = -D_XOPEN_SOURCE=700 -D_POSIX_C_SOURCE=200809L -D_POSIX_SOURCE=1 -D_DEFAULT_SOURCE=1 -D_GNU_SOURCE=1
CFLAGS = $(CFLAGS_OPTIMIZATION) $(CFLAGS_VERSION) $(CFLAGS_WARNINGS) $(CFLAGS_DEFINES)

# Specific libraries (project libraries ./libs/):

# Paths normalizes
SOURCEPATH = ./src
BINPATH = ./bin
INCLUDEPATH = ./inc

# System shell utilities
CC = gcc
RM = rm -f
CP = cp
AR = ar
RANLIB = ranlib

all: clean a1

a1:
	$(CC) -o $(BINPATH)/a1 $(SOURCEPATH)/a1.c $(SOURCEPATH)/func.c -I$(INCLUDEPATH) -L$(BINPATH) -lm

clean:
	-$(RM) $(BINPATH)/*
