#include "lists.h"
/**
*add_nodeint- adds new node to beginning of linked list
*@head: double pointer to head node of linked list
*@n: content of node
*Return: Null or i
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
