#include <stdio.h>
/**
 * main - Print all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Return 0 when done.
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
