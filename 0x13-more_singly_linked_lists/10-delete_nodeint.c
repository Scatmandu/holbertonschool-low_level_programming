#include "lists.h"
/**
*delete_nodeint_at_index- deletes node at index location
*@head: double pointer to head of linked list
*@index: index location to delete
*Return: 1 or -1
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse = *head;
	listint_t *node;
	unsigned int i;

	if (traverse == NULL && index != 0)
		return (-1);
	if (index == 0)
	{
		*head = traverse->next;
		free(traverse);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			traverse = traverse->next;
		}
	}
	node = traverse->next->next;
	free(traverse->next);
	traverse->next = node;
return (1);
}
