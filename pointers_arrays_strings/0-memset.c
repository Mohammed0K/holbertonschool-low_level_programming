#include "main.h"

/**
 * _memset - print array to see the result
 * @s: Pointer to the memory area
 * @b: The constant byte to fil
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memorty area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
