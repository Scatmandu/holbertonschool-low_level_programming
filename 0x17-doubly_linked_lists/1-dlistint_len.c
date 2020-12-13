#include "lists.h"
/**
 * dlistint_len - returns number of nodes in 2x linked list
 * @h: pointer to head node
 * Return: number of nodes
**/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
return (count);
}
