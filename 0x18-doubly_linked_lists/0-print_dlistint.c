#include "lists.h"
/**
* print_dlistint- prints elements of a 2x linked list
* @h: pointer to a 2x linked list
* Return: number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
