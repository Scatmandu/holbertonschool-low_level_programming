#include "lists.h"
/**
 * get_dnodeint_at_index- returns location of node at an index
 * @head: pointer to head of list
 * @index: location of node to return
 * Return: NULL or address of node at index
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traverse = head;
	unsigned int i = 0;

	while (i != index)
	{
		if (traverse->next == NULL)
			return (NULL);
		i++;
		traverse = traverse->next;
	}
return (traverse);
}
