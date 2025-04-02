# Doubly Linked Lists Project

### This project implements a set of functions to handle doubly linked lists in C. It includes functions to:

- **Print the list** (`print_dlistint`)
- **Determine the length of the list** (`dlistint_len`)
- **Add a node to the beginning** (`add_dnodeint`)
- **Add a node to the end** (`add_dnodeint_end`)
- **Free the list** (`free_dlistint`)
- **Get a node at a specific index** (`get_dnodeint_at_index`)
- **Sum all the data in the list** (`sum_dlistint`)
- **Insert a node at a given index** (`insert_dnodeint_at_index`)
- **Delete a node at a given index** (`delete_dnodeint_at_index`)
- **Crackme4 Password** (`100-password`)
- **Largest Palindrome Result** (`102-result`)
- **Crackme5 Keygen** (`103-keygen.c`)

## Requirements

- **Compilation:** Code must be compiled on Ubuntu 20.04 LTS using `gcc` with the following options:

      `-Wall -Werror -Wextra -pedantic -std=gnu89`

- **Betty Style:** All files must follow the Betty style guidelines (checked using `betty-style.pl` and `betty-doc.pl`).
- **Restrictions:**
  - No global variables.
  - No more than 5 functions per file.
  - Only allowed C standard library functions are: `malloc`, `free`, `printf`, and `exit`.
  - The function `_putchar` is allowed and its prototype is in `lists.h` (if used).

## Files Description

- **lists.h:** Header file containing function prototypes and the definition of the doubly linked list node (`struct dlistint_s`).
- **0-print_dlistint.c:** Function to print all elements of a `dlistint_t` list.
- **1-dlistint_len.c:** Function to count the number of nodes in a `dlistint_t` list.
- **2-add_dnodeint.c:** Function to add a new node at the beginning of a `dlistint_t` list.
- **3-add_dnodeint_end.c:** Function to add a new node at the end of a `dlistint_t` list.
- **4-free_dlistint.c:** Function to free all nodes in a `dlistint_t` list.
- **5-get_dnodeint.c:** Function to return the nth node of a `dlistint_t` list.
- **6-sum_dlistint.c:** Function to return the sum of all the data (n) in a `dlistint_t` list.
- **7-insert_dnodeint.c:** Function to insert a new node at a given index in a `dlistint_t` list.
- **8-delete_dnodeint.c:** Function to delete the node at a given index of a `dlistint_t` list.
- **100-password:** File containing the password for crackme4 (must contain the exact password with no extra spaces or newlines).
- **102-result:** File containing the largest palindrome made from the product of two 3-digit numbers (must contain the exact result with no extra spaces or newlines).
- **103-keygen.c:** Program that generates a valid key for crackme5 based on a username.

## Compilation Example

To compile the file for printing the list (using the provided `0-main.c` for testing), run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o print_dlistint`
