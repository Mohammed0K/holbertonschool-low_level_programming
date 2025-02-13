#include <stdio.h>
/**
 * main - Print the alphabet in lowercase, followed by a new line.
 * Return: Return 0 when done.
 * 
 * != no es igual / && and
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
