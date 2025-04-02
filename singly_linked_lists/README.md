# Singly Linked Lists Project

This project implements a set of functions to handle singly linked lists in C. It includes functions to:

- **Print the list** (`print_list`)
- **Determine the length of the list** (`list_len`)
- **Add a node to the beginning** (`add_node`)
- **Add a node to the end** (`add_node_end`)
- **Free the list** (`free_list`)
- **Print a message before main execution** (`100-first.c`)

## Requirements

- **Compilation:** Code must be compiled on Ubuntu 20.04 LTS using `gcc` with the following options:
`-Wall -Werror -Wextra -pedantic -std=gnu89`

- **Betty Style:** All files must follow the Betty style guidelines (checked using `betty-style.pl` and `betty-doc.pl`).
- **Restrictions:** 
- No global variables.
- No more than 5 functions per file.
- Only allowed C standard library functions are: `malloc`, `free`, `exit`, and (for specific cases) `printf`.
- The function `_putchar` is allowed and its prototype is in `lists.h`.

## Files Description

- **lists.h:** Header file containing function prototypes and the definition of the linked list node (`struct list_s`).
- **0-print_list.c:** Function to print all elements of a `list_t` list.
- **1-list_len.c:** Function to count the number of nodes in a `list_t` list.
- **2-add_node.c:** Function to add a new node at the beginning of a `list_t` list.
- **3-add_node_end.c:** Function to add a new node at the end of a `list_t` list.
- **4-free_list.c:** Function to free all nodes in a `list_t` list.
- **100-first.c:** Function that prints a message before the `main` function is executed using the constructor attribute.

## Compilation Example

To compile the file for printing the list (using the provided `0-main.c` for testing), run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0- print_list.c -o print_list`



