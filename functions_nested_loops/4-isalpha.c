#include "main.h"

/**
 * _isalpha - check the type of data
 * @c: data from user
 * Return: if c is a letter return 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
