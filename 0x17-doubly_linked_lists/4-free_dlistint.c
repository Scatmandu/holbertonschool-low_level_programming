#include "lists.h"
/**
 * free_dlistint- frees a doubly linked list
 * @head: pointer to head of 2x linked list
 * Return: void
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *prev = head;

	while (prev != NULL)
	{
		node = prev->next;
		free(prev);
		prev = node;
	}
}
