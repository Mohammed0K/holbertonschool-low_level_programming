# Bit Manipulation

This project contains functions that perform various bit manipulation tasks in C, following the Betty style guidelines. The functions included are:

- **binary_to_uint**: Converts a binary string to an unsigned int.
- **print_binary**: Prints the binary representation of a number.
- **get_bit**: Returns the value of a bit at a given index.
- **set_bit**: Sets the value of a bit to 1 at a given index.
- **clear_bit**: Sets the value of a bit to 0 at a given index.
- **flip_bits**: Returns the number of bits you would need to flip to get from one number to another.
- **get_endianness**: Checks the endianness of the system.

## Advanced Tasks

### 7. Crackme3
A file named `101-password` is provided which contains the password required by the crackme3 program.

### 8. Two's Complement and Negative Numbers
I have written a blog post explaining how integers are stored in memory using two's complement. The post includes at least one picture at the top and several examples covering both positive and negative numbers.

You can find the blog post at the following URLs:

- **Medium:** []()
- **LinkedIn:** []()

## Compilation

All files are compiled on Ubuntu 20.04 LTS using `gcc` with the following options:


`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>`

