#include "lists.h"
/**
*print_listint- prints content of a linked list
*@h: pointer to head of linked list
*Return: i
**/
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
return (i);
}
