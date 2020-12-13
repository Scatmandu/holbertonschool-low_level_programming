#include "lists.h"
/**
 * print_dlistint- prints elements of a linked list
 * @h: pointer to head of  list
 * Return: number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		count++;
		h = h->next;
	}
return (count);
}
