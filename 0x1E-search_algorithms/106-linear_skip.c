#include "search_algos.h"

/**
 * linear_skip - implements skip list for linear search
 * @list: pointer to the list to search
 * @value: value to find
 * Return: pointer to the value's node was or null
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp, *temp2;

	if (list == NULL)
		return (NULL);
	temp = list;
	while (temp->express)
	{
		printf("Value checked at index [%d] = [%d]\n",
		 (int)temp->express->index, temp->express->n);
		if (temp->express->n >= value)
			break;
		temp = temp->express;
	}
	if (temp->express && temp->express->n == value)
		return (temp->express);
	if (temp->express)
		printf("Value found between indexes [%d] and [%d]\n", (int)temp->index,
		 (int)temp->express->index);
	else
	{
		temp2 = temp;
		while (temp2->next)
			temp2 = temp2->next;
		printf("Value found between indexes [%d] and [%d]\n", (int)temp->index,
		 (int)temp2->index);
	}
	while (temp->next && temp->next->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%d] = [%d]\n", (int)temp->index, temp->n);
	if (temp->next && temp->next->n == value)
	{
		printf("Value checked at index [%d] = [%d]\n",
		 (int)temp->next->index, temp->next->n);
		return (temp->next);
	}
	return (NULL);
}
