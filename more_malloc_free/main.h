#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int _putchar(char c);
unsigned int *initDigitArray(size_t size);
int stringIsPosInt(char *s);
void error_exit(int status);
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits, char *n2_digits, size_t n1_len, size_t n2_len);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmedb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
