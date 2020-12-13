#include "lists.h"
/**
 * sum_dlistint- sums values contained in a 2x linked list
 * @head: pointer to head of 2x linked list
 * Return: 0 or sum
**/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *traverse = head;
	int sum = 0;

	if (traverse == NULL)
		return (0);
	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
return (sum);
}
