#include <stdio.h>
/**
 * main - Print all possible combinations of single-digit numbers.
 * Return: Return 0 if passed.
 *
 */
int main(void)
{
	int corn;

	for (corn = '0' ; corn <= '9' ; corn++)
	{
		putchar(corn);

		if (corn != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
