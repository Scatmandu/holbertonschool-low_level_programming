#include "lists.h"
/**
 * print_dlistint- prints elements of a linked list
 * @h: pointer to head of  list
 * Return: number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	unsigned int count = 0;

	while (node != NULL)
	{
		if (node == NULL)
			return (0);
		printf("%u\n", node->n);
		count++;
		node = node->next;
	}
return (count);
}
