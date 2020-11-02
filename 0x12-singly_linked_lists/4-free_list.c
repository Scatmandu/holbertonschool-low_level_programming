#include "lists.h"
/**
*free_list- frees a linked list
*@head: pointer ot head of linked list
*Return: void
**/
void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
