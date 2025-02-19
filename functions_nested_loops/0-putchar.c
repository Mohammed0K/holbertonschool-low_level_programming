#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints _putchar followed by a new line.
 *
 * Return: (0) upon successful execution.
 */

int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
