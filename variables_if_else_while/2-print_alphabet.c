#include <stdio.h>
/**
* main - Prints the alphaber in lowercase, followed by a new line.
* Return: Return 0 when done.
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
