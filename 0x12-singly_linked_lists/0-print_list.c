#include "lists.h"
/**
*
*
*
**/
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	unsigned int count = 0;

	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
			node = node->next;
			count++;
		}
		else
		{
			printf("[%u] %s\n", node->len, node->str);
			node = node->next;
			count++;
		}
	}
return (count);
}
