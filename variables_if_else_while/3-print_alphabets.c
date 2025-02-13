#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: Return 0 when done.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
