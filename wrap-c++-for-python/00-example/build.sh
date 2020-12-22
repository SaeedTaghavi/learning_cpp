#!/bin/sh

swig -python example.i
gcc -c -fPIC example.c example_wrap.c -I /usr/include/python3.8
gcc -shared example_wrap.o -o _example.so
