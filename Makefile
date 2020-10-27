# Makefile for hello.cpp
# Margarita Maligaya 2020

CPP = g++
CPPFLAGS = -Wall -Werror -g
LIBS = -lncurses

all: hello

hello: hello.cpp
	$(CPP) $(CPPFLAGS) -o hello hello.cpp $(LIBS)

.PHONY: all hello

clean: 
	-rm -f hello
