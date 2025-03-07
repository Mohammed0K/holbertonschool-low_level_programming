#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest : copied
 * @src : copy
 * @n : number of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
