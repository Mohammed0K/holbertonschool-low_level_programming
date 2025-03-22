#include "function_pointers.h"
#include <stddef.h>
/*
 * print_name - Print a name using a given function.
 * @name: The name to be printed.
 * @f: A pointer to the function that print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
