#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _digit(char *str);
int _strlen(char *str);
void _errors(void);

/**
 * main - Entry point for multiplying two positive numbers provided as strings.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, *result;
	int i, j, digit1, digit2, carry, printed = 0;

	if (argc != 3 || !_digit(argv[1]) || !_digit(argv[2]))
		_errors();
	s1 = argv[1];
	s2 = argv[2];
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	/* Initialize the result array to 0 */
	for (i = 0; i < len; i++)
		result[i] = 0;
	/* Multiply each digit from s1 and s2 and add the results to result array */
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
		/* j is -1 after the inner loop; add remaining carry to the next left cell */
		result[i + j + 1] += carry;
	}
	/* Print the result skipping any leading zeros */
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			printed = 1;
		if (printed)
			printf("%d", result[i]);
	}
	if (!printed)
		printf("0");
	printf("\n");
	free(result);
	return (0);
}

/**
 * _digit - Checks if a string contains only digits.
 * @str: The string to check.
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int _digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _errors - Prints an error message and exits the program.
 */
void _errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

