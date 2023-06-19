#!/bin?bash
gcc -Wall -pedantic -Werror -Wextra *.c -fpic
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
