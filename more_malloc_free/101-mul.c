#include "main.h"
#include <stdlib.h>
#include <unistd.h>

unsigned int *g_prod_digits = NULL;

/**
 * initDigitArray - Allocates and initializes an array of digits.
 * @size: Array size.
 *
 * Return: Pointer to the initialized array, or NULL on failure.
 */
unsigned int *initDigitArray(size_t size)
{
	unsigned int *arr;
	size_t i;

	arr = malloc(sizeof(unsigned int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = 0;
	return (arr);
}

/**
 * stringIntMultiply - Multiplies two positive number strings.
 * @prod_digits: Array to store the digits of the product.
 * @n1_digits: String containing the multiplicand digits.
 * @n2_digits: String containing the multiplier digits.
 * @n1_len: Number of digits in the multiplicand.
 * @n2_len: Number of digits in the multiplier.
 */
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits,
		       char *n2_digits, size_t n1_len, size_t n2_len)
{
	int i, j, sum;
	unsigned char digit1, digit2;

	if (prod_digits == NULL || n1_digits == NULL || n2_digits == NULL)
		return;
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
		if (sum > 0)
			prod_digits[i + j + 1] += sum;
	}
}

/**
 * stringIsPosInt - Validates if a string represents a positive integer.
 * @s: The string to test.
 *
 * Return: 1 if true, 0 if false.
 */
int stringIsPosInt(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * error - Prints "Error" to stdout, frees allocated memory, and exits.
 * @status: Error code to exit with.
 */
void error(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	if (g_prod_digits != NULL)
	{
		free(g_prod_digits);
		g_prod_digits = NULL;
	}
	exit(status);
}

/**
 * main - Entry point.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	size_t i, av1_len, av2_len, prod_len;
	unsigned int *prod_digits = NULL;

	if (argc != 3 || !stringIsPosInt(argv[1]) || !stringIsPosInt(argv[2]))
		error(98);
	for (i = 0, av1_len = 0; argv[1][i]; i++)
		av1_len++;
	for (i = 0, av2_len = 0; argv[2][i]; i++)
		av2_len++;
	prod_len = av1_len + av2_len;
	prod_digits = initDigitArray(prod_len);
	if (prod_digits == NULL)
		error(98);
	g_prod_digits = prod_digits;
	stringIntMultiply(prod_digits, argv[1], argv[2], av1_len, av2_len);
	/* Omit leading zeroes */
	for (i = 0; i < prod_len && prod_digits[i] == 0; i++)
		;
	if (i == prod_len)
		_putchar('0');
	for (; i < prod_len; i++)
		_putchar(prod_digits[i] + '0');
	_putchar('\n');
	free(prod_digits);
	g_prod_digits = NULL;
	return (0);
}

