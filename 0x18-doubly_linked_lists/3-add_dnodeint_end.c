#include "lists.h"
/**
* add_dnodeint_end- adds a node to the end of a 2x linked list
* @head: head of the 2x linked list
* @n: content to insert into last node
* Return: new node or NULL
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *traverse;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	traverse = *head;
	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new_node;
	new_node->prev = traverse;
	return (new_node);
}
