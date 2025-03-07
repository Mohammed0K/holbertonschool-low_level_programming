#include "main.h"
/**
 * _strchr - function
 * @s: string
 * @c: char
 * Return: s & c & null
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
