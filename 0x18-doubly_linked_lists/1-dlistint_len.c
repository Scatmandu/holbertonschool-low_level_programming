#include "lists.h"
/**
* dlistint_len- gets the length of a 2x linked list
* @h: pointer to a 2x linked list
* Return: length of the 2x linked list
**/
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
