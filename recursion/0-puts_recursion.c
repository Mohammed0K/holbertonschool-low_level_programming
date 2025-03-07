#include "main.h"
/**
 * _puts_recursion - print like put
 * @s: string
 * Return: print string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
