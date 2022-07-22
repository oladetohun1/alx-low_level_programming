#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -stdnu = 89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
