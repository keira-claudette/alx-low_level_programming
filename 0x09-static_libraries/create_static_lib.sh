#!bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rc libname.a *.o
