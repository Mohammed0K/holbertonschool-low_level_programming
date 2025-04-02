# C - File I/O

This project is part of the Holberton School Low-Level Programming curriculum. It implements functions and programs for file input/output operations in C using system calls. All code follows the Betty style guidelines and includes detailed comments for clarity.

## Description

This project includes the following functionalities:

- **0-read_textfile.c:**  
  A function that reads a text file and prints its content to the POSIX standard output. It reads up to a specified number of letters and returns the actual number of letters read.  
  **Prototype:** `ssize_t read_textfile(const char *filename, size_t letters);`

- **1-create_file.c:**  
  A function that creates a file with the specified name and writes provided text content to it. If the file exists, it is truncated. The created file has permissions `rw-------`.  
  **Prototype:** `int create_file(const char *filename, char *text_content);`

- **2-append_text_to_file.c:**  
  A function that appends text at the end of an existing file. If the file does not exist or permissions are insufficient, it returns an error.  
  **Prototype:** `int append_text_to_file(const char *filename, char *text_content);`

- **3-cp.c:**  
  A program that copies the content of one file to another. It reads 1024 bytes at a time and handles errors appropriately.  
  **Usage:** `cp file_from file_to`

- **100-elf_header.c:**  
  A program that displays the ELF header information of an ELF file. The displayed information includes Magic, Class, Data, Version, OS/ABI, ABI Version, Type, and Entry point address.  
  **Usage:** `elf_header elf_filename`

## Files

- `main.h`  
  Contains function prototypes and necessary includes.

- `0-read_textfile.c`  
- `1-create_file.c`  
- `2-append_text_to_file.c`  
- `3-cp.c`  
- `100-elf_header.c`

## Compilation

Compile your files on Ubuntu 20.04 LTS using `gcc` with the following flags:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -o `

