#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* int _putchar(char c);*/
int _digit(char *str);
int _strlen(char *str);
void _errors(void);

/* By Abdelghni Hamanar */
/**
 * main - Entry point
 * @argc: variable
 * @argv: variable
 * Return: void
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, *result, a = 0, digit1, digit2, carry, i;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !_digit(s1) || !_digit(s2))
		_errors();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry +=  result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] =  carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;

		if (a)
			printf("%d", result[i]);
	}

	if (!a)
		printf("0");

	printf("\n");
	free(result);
	return (0);
}


/* By Abdelghni Hamanar */
/**
 * _digit - Entry point
 * @str: variable
 * Return: void
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


/* By Abdelghni Hamanar */
/**
 * _errors - Entry point
 * Return: void
 */

void _errors(void)
{
	printf("Error\n");
	exit(98);
}


/* By Abdelghni Hamanar */
/**
 * _strlen - Entry point
 * @str: variable
 * Return: len of a string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
