#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#ifdef __GLIBC__
#include <malloc.h>
#endif

int _digit(char *str);
int _strlen(char *str);
void _errors(void);
int _putchar(char c);

int *g_result = NULL; /* Global pointer for allocated memory */

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, *result;
	int i, j, digit1, digit2, carry, printed = 0;
	char c;

	if (argc != 3 || !_digit(argv[1]) || !_digit(argv[2]))
		_errors();
	s1 = argv[1];
	s2 = argv[2];
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		_errors();
	g_result = result;
	/* Initialize result array to 0 */
	for (i = 0; i < len; i++)
		result[i] = 0;
	/* Multiply each digit from s1 and s2 */
	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
	/* Print the result, skipping any leading zeros */
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			printed = 1;
		if (printed)
		{
			c = result[i] + '0';
			write(1, &c, 1);
		}
	}
	if (!printed)
		write(1, "0", 1);
	write(1, "\n", 1);
	free(result);
	g_result = NULL;
#ifdef __GLIBC__
	malloc_trim(0);
#endif
	return (0);
}

/**
 * _digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int _digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _errors - Prints "Error" to stdout, frees allocated memory,
 *           trims malloc internal buffers, and exits with status 98.
 */
void _errors(void)
{
	char *err = "Error\n";
	int i = 0;

	while (err[i])
	{
		_putchar(err[i]);
		i++;
	}
	if (g_result)
	{
		free(g_result);
		g_result = NULL;
	}
#ifdef __GLIBC__
	malloc_trim(0);
#endif
	exit(98);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

