#include "lists.h"
/**
*get_nodeint_at_index- finds node of certain index number
*@head: pointer to head of linked list
*@index: index number of node
*Return: traverse
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i != index; i++)
		traverse = traverse->next;
return (traverse);
}
