#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The number of elements in the array.
 * @c: The character used to initialize each element of the array.
 *
 * Return: A pointer to the newly created array, or NULL
 */


char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}


/**
 * simple_print_buffer - Prints the content of a buffer in hexadecimal format.
 * @buffer: The array of characters to print.
 * @size: The number of elements in the buffer.
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 1;
	while (i < size)
	{
		if (i % 10)
		{
			printf("  ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success, or 1 if memory allocation fails.
 */

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
