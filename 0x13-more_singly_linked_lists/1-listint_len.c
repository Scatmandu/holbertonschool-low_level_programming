#include "lists.h"
/**
*listint_len- counts nodes of a linked list
*@h: pointer to head node of linked list
*Return: i
**/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != '\0')
	{
		h = h->next;
		i++;
	}
return (i);
}
