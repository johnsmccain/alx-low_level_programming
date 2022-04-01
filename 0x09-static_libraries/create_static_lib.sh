#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -std=gnu89 -c *.c
ar -rc libmy.a *.o
