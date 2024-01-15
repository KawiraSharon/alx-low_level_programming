#!/bin/bash
gcc -c *.c -fpic liball.c
gcc *.o -shared -o liball.so
ranlib liball.so
