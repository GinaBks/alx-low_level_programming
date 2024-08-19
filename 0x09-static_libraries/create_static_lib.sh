#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra
arc -rc liball.a *.o
ranlib liball.a
