#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node given index of doubly linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
