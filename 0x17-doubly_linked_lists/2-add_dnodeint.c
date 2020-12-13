#include "lists.h"
/**
 * add_dnodeint- adds new node at beginning of 2x linked list
 * @head: pointer to head
 * @n: content to populate new node with
 * Return: address of new node
**/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	new_node->n = n;
	new_node->next = *head;
	/*head->prev = new_node;*/
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
