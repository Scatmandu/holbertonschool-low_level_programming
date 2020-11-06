#include "lists.h"
/**
*free_listint2- frees a linked list
*@head: double pointer to head of linked list
*Return: void
**/
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head != NULL)
	{
		node = *head;
		while (node)
		{
			free(node);
			node = node->next;
		}
	}
*head = NULL;
}
