#!/bin/bash
-c -fpic *.c
gcc *.o -shared -o libdynamic.so
