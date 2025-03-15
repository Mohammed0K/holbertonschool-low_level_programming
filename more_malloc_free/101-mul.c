#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * initDigitArray - Allocates and initializes an array of unsigned integers.
 * @size: The size of the array to be allocated.
 *
 * Return: Pointer to the allocated array, or NULL if memory allocation fails.
 */
unsigned int *initDigitArray(size_t size)
{
	unsigned int *arr = malloc(sizeof(unsigned int) * size);

	if (arr == NULL)
		return (NULL);

	for (size_t i = 0; i < size; i++)
		arr[i] = 0;

	return (arr);
}

/**
 * stringIntMultiply - Multiplies two numbers represented as strings.
 * @prod_digits: Array where the resulting digits will be stored.
 * @n1_digits: First string representing the first number.
 * @n2_digits: Second string representing the second number.
 * @n1_len: Length of the first string.
 * @n2_len: Length of the second string.
 *
 * Return: Nothing.
 */
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits,
		       char *n2_digits, size_t n1_len, size_t n2_len)
{
	int i, j, sum;
	unsigned char digit1, digit2;

	for (i = n1_len - 1; i >= 0; i--)
	{
		sum = 0;
		digit1 = n1_digits[i] - '0';
		for (j = n2_len - 1; j >= 0; j--)
		{
			digit2 = n2_digits[j] - '0';
			sum += prod_digits[i + j + 1] + (digit1 * digit2);
			prod_digits[i + j + 1] = sum % 10;
			sum /= 10;
		}
		prod_digits[i + j + 1] += sum;
	}
}

/**
 * stringIsPosInt - Checks if a string represents a positive integer.
 * @s: The string to check.
 *
 * Return: 1 if the string represents a positive integer, 0 otherwise.
 */
int stringIsPosInt(char *s)
{
	size_t i;

	if (s == NULL || *s == '\0')
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (!isdigit((unsigned char)s[i]))
			return (0);
	}
	return (1);
}

/**
 * error_exit - Prints an error message and exits the program.
 * @status: Exit status code.
 *
 * Return: Nothing.
 */
void error_exit(int status)
{
	printf("Error\n");
	exit(status);
}

/**
 * main - Entry point of the program that multiplies two positive numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings representing the command-line arguments.
 *
 * Return: 0 on success, or exits with status 98 on error.
 */
int main(int argc, char **argv)
{
	size_t av1_len, av2_len, prod_len, i;
	unsigned int *prod_digits;

	if (argc != 3 || !stringIsPosInt(argv[1]) || !stringIsPosInt(argv[2]))
		error_exit(98);

	for (av1_len = 0; argv[1][av1_len]; av1_len++)
		;
	for (av2_len = 0; argv[2][av2_len]; av2_len++)
		;

	prod_len = av1_len + av2_len;
	prod_digits = initDigitArray(prod_len);
	if (prod_digits == NULL)
		error_exit(98);

	stringIntMultiply(prod_digits, argv[1], argv[2], av1_len, av2_len);

	for (i = 0; i < prod_len && prod_digits[i] == 0; i++)
		;

	if (i == prod_len)
		putchar('0');
	else
	{
		for (; i < prod_len; i++)
			putchar(prod_digits[i] + '0');
	}

	putchar('\n');
	free(prod_digits);
	return (0);
}
