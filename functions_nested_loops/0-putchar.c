#include "main.h"

/*
 * main - Print '_putchar' character by character.
 * Return: Return 0 when done.
 */

int main (void) {
	int i;
	char str[] = "_putchar";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return 0;
}
