#include "lists.h"
/**
*free_listint- frees a list
*@head: pointer to head
*Return: void
**/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
