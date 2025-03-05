#include "main.h"
/*
 * int main print array to see the result
 * @i for print
 * return s
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
