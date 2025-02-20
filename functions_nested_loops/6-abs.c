#include "main.h"
#include <stdio.h>

/**
 * _abs - change the number to absolute number
 * @c: data from user
 * Return: Always 0.
 */

int _abs(int c)
{
	if (c > 0)
		return (c);
	else
		return ((c * -1));
}
