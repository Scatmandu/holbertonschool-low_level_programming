#include "lists.h"
/**
 * add_dnodeint_end- adds node at end of 2x linked list
 * @head: double pointer to head
 * @n: number to populate new node with
 * Return: NULL or address of new node
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = (*head);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		(*head) = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	new->next = NULL;
	new->n = n;
	return (new);
}
