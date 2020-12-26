# This is a comment line
CC=g++
# CFLAGS will be the options passed to the compiler.
CFLAGS= -c -Wall
EXENAME=myApp
all: prog
prog: main.o box.o timer.o
	$(CC) main.o box.o timer.o -o $(EXENAME)
main.o: ./src/main.cpp
	$(CC) $(CFLAGS) ./src/main.cpp
box.o: ./src/box.cpp
	$(CC) $(CFLAGS) ./src/box.cpp
timer.o: ./src/timer.cpp
	$(CC) $(CFLAGS) ./src/timer.cpp
clean: removeexe
	rm -rf *.o 
removeexe:
	rm -rf $(EXENAME)
