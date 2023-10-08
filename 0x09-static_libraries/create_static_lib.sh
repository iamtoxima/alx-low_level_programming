#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create a static library named liball.a from the .o files
ar -rc liball.a *.o

# Index the static library for quicker access
ranlib liball.a

# Clean up the .o files
rm *.o
