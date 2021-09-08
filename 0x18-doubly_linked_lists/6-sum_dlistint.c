#include "lists.h"
/**
* sum_dlistint- sums values contained in 2x linked list
* @head: pointer to head of 2x linked list
* Return: sum of nodes' values
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;
	dlistint_t *next;

	while (node != NULL)
	{
		sum += node->n;
		next = node->next;
		node = next;
	}
	return (sum);
}
