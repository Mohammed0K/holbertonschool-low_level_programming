#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-mul.c _putchar.c -o 101-mul
./101-mul "$@"

