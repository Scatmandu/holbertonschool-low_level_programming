#include "lists.h"
/**
*sum_listint- sums values of nodes
*@head: pointer to head of linked list
*Return: 0 or sum
**/
int sum_listint(listint_t *head)
{
	listint_t *traverse = head;
	int sum = 0;
	int value;

	if (head == NULL)
		return (0);
	while (traverse != NULL)
	{
		value = traverse->n;
		sum = sum + value;
		traverse = traverse->next;
	}
return (sum);
}
