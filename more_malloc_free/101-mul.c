#include <stdlib.h>
#include "main.h"

/**
 * initDigitArray - initializes array with zeros
 * @size: size of array
 * Return: pointer or NULL
 */
unsigned int *initDigitArray(size_t size)
{
	unsigned int *arr = malloc(sizeof(unsigned int) * size);
	size_t i;

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return (arr);
}

/**
 * stringIsPosInt - checks if string is positive integer
 * @s: input string
 * Return: 1 if true, 0 otherwise
 */
int stringIsPosInt(char *s)
{
	size_t i;

	if (!s || !*s)
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * error_exit - prints error and exits with status
 * @status: exit status
 */
void error_exit(int status)
{
	char *err = "Error\n";
	int i = 0;

	while (err[i])
		_putchar(err[i++]);
	exit(status);
}

/**
 * stringIntMultiply - multiplies two strings representing integers
 * @prod_digits: result array
 * @n1_digits: first number
 * @n2_digits: second number
 * @n1_len: first length
 * @n2_len: second length
 */
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits,
					   char *n2_digits, size_t n1_len, size_t n2_len)
{
	int i, j, sum, digit1, digit2;

	for (i = n1_len - 1; i >= 0; i--)
	{
		sum = 0;
		digit1 = n1_digits[i] - '0';

		for (j = n2_len - 1; j >= 0; j--)
		{
			digit2 = n2_digits[j] - '0';
			sum += prod_digits[i + j + 1] + digit1 * digit2;
			prod_digits[i + j + 1] = sum % 10;
			sum /= 10;
		}

		prod_digits[i + j + 1] += sum;
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0 success or 98 error
 */
int main(int argc, char **argv)
{
	size_t i, av1_len, av2_len, prod_len;
	unsigned int *prod_digits;

	if (argc != 3 || !stringIsPosInt(argv[1]) || !stringIsPosInt(argv[2]))
		error_exit(98);

	for (av1_len = 0; argv[1][av1_len]; av1_len++)
		;
	for (av2_len = 0; argv[2][av2_len]; av2_len++)
		;

	prod_len = av1_len + av2_len;
	prod_digits = initDigitArray(prod_len);
	if (!prod_digits)
		error_exit(98);

	stringIntMultiply(prod_digits, argv[1], argv[2], av1_len, av2_len);

	for (i = 0; i < prod_len && prod_digits[i] == 0; i++)
		;

	if (i == prod_len)
		_putchar('0');
	else
		for (; i < prod_len; i++)
			_putchar(prod_digits[i] + '0');

	_putchar('\n');

	free(prod_digits);
	return (0);
}

