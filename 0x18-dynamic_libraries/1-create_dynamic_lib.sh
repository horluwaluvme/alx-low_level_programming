#!/bin/bash
-c -fpic *.c
gcc -shared -o liball.so *.o
