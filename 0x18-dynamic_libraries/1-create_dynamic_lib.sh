#!/bin/bash
gcc -c -fpic *.c
gcc -shared -fpic -o liball.so *.o
