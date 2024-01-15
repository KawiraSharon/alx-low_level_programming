#!/bin/bash
gcc -c *.c -fpic liball.o
gcc *.o -shared -o liball.so
ranlib liball.so
