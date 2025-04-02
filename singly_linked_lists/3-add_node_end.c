#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Description: The function allocates a new node, duplicates the given
 * string, calculates its length, and adds the node to the end
 * of the list. If the list is empty, the new node becomes the head.
 *
 * Return: The address of the new element, or NULL if allocation fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *new_str;
	unsigned int len = 0;
	const char *s;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate length of the string */
	for (s = str; *s; s++)
		len++;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
