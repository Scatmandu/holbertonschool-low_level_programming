#include "lists.h"
/**
*insert_nodeint_at_index- inserts new node at index location
*@head: double pointer to head of a linked list
*@idx: index number to insert node at
*@n: value to insert
*Return: NULL or new
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *traverse = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
	{
		traverse = traverse->next;
	}
new->n = n;
new->next = traverse->next;
traverse->next = new;
return (new);
}
