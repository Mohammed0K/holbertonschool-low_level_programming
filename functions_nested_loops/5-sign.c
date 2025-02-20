#include "main.h"

/**
 * print_sign - check the data.
 * @n: data from user
 * Return: tha type of data.
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (-1);
	}
}
