#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Description: The function iterates through the list and counts
 *              the nodes.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
