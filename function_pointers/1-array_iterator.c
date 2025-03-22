#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Execute a function>
 * @array: Pointer to the array of integers.
 * @size: The number of elements.
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		atcion(array[i]);
}
