#include "main.h"

/**
 * _isdigit - return 1
 * Return: 1 if c is a digit from 0-9
 * @c: Data from user
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
