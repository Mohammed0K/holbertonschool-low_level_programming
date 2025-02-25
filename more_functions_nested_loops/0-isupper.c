#include "main.h"

/**
 * _isupper - return if c is upper
 * Return: c
 * @c: Data from user
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
