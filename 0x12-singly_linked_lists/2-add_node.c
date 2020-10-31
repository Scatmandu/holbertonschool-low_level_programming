#include "lists.h"
/**
*add_node- adds node to beginning of a linked list
*@head: pointer to head
*@str: pointer to string contained in node
*Return: NULL or pointer to new node
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;
	char *dupe = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
	{}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		new_node->str = dupe;
		new_node->len = i;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->str = dupe;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
