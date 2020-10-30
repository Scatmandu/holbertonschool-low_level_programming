#include "lists.h"
/**
*list_len- returns number of elements in a linked list
*@h: pointer to head of list
*Return: number of elements in list
**/
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	unsigned int count = 0;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}
return (count);
}
