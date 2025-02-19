#include "main.h"

/**
 * _islower - Checks for lowercase characters.
 * @c: c becomes a letter
 *
 * Return: Return 1 for lowercase, return 0 otherwise.
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
