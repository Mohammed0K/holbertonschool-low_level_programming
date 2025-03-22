#include "function_pointers.h"

/**
 * array_iterator - Execute a function>
 * @array: Pointer to the array of integers.
 * @size: The number of elements.
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
{
	action(*array);
	array++;
}
}
