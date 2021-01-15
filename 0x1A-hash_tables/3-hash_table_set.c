#include "hash_tables.h"
/**
* hash_table_set- adds an element to a hash table
* @ht: hash table to add/update key to
* @key: a non-empty string
* @value: value associated with key
* Return: 1 if success 0 otherwise
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];
	hash_node_t *new_list = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	while (current != NULL)
	{
		while (current->next != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				current->value = strdup(value);
				return (1);
			}
			if (current->next != NULL)
				current = current->next;
		}
	}
	new_list = malloc(sizeof(hash_node_t *));
	if (new_list == NULL)
		return (0);
	new_list->key = strdup(key);
	new_list->value = strdup(value);
	if (current == NULL)
	{
		new_list->next = NULL;
		current = new_list;
		return (1);
	}
	new_list->next = current;
	current = new_list;
	return (1);
}
