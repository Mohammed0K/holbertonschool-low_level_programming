#include "main.h"

/**
 * jack_bauer - prints all minutes of a day
 * Return: Anything
 */

void jack_bauer(void)
{
	int j, i, k, l;

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (j == 2 && i >= 4)
			continue;
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar((j % 10) + '0');
					_putchar((i % 10) + '0');
					_putchar(':');
					_putchar((k % 10) + '0');
					_putchar((l % 10) + '0');
					_putchar('\n');
				}
			}
		}
	}
}
