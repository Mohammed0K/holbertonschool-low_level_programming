#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * error - prints Error and exits with code 98
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - checks if the string is only digits
 * @str: input string
 * Return: 1 true, 0 false
 */
int is_digit(char *str)
{
	int i = 0;

	if (!str || !*str)
		return (0);
	for (i = 0; str[i]; i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success), 98 (Error)
 */
int main(int argc, char *argv[])
{
	int len1, len2, i, j, carry, n1, n2, *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		error();

	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		error();

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = argv[1][i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = argv[2][j] - '0';
			carry += result[i + j + 1] + n1 * n2;
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < (len1 + len2) && result[i] == 0)
		i++;

	if (i == len1 + len2)
		putchar('0');
	else
		for (; i < (len1 + len2); i++)
			putchar(result[i] + '0');

	putchar('\n');
	free(result);

	return (0);
}

