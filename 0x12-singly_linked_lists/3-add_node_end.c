#include "lists.h"
/**
*add_node_end- adds node to end of linked list
*@head: pointer to head of linked list
*@str: string to populate nodes with
*Return: NULL or new_node
**/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;
	list_t *traversal = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		else
		{
			for (i = 0; str[i] != '\0'; i++)
			{}
			new_node->len = i;
		}
	}
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (traversal->next != NULL)
			traversal = traversal->next;
		traversal->next = new_node;
	}
return (new_node);
}
