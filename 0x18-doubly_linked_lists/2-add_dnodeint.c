#include "lists.h"
/**
* add_dnodeint- adds node to beginning of 2x linked list
* @head: pointer to head of 2x linked list
* @n: content to populate new node with
* Return: new node or NULL
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
