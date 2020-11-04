#include "lists.h"
/**
*add_nodeint_end- adds node to end of linked list
*@head: double pointer to head of linked list
*@n: content of node
*Return: NULL or new
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *traverse = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new;
		new->n = n;
		new->next = NULL;
	}
return (new);
}
