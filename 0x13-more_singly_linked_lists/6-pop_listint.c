#include "lists.h"
/**
*pop_listint- removes head of linked list
*@head: double pointer to head of linked list
*Return: 0 or value
**/
int pop_listint(listint_t **head)
{
	listint_t *store = *head;
	int value = store->n;

	if (*head == NULL)
		return (0);
	*head = store->next;
	free(store);
	return (value);
}
