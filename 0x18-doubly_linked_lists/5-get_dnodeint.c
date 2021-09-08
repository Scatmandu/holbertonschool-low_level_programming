#include "lists.h"
/**
 * get_dnodeint_at_index - retrieves node by index in a 2x linked list
 * @head: head of 2x linked list
 * @index: index number of node to retrieve
 * Return: node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	return (node);
}
