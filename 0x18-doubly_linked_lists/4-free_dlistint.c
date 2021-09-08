#include "lists.h"
/**
* free_dlistint- frees a 2x linked list
* @head: pointer to the head of the list
* Return: void
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
