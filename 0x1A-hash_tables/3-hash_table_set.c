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
				/*free(current->value);*/
				current->value = strdup(value);
				if (current->value == NULL)
					return (0);
				return (1);
			}
			current = current->next;
		}
	}
	new_list = malloc(sizeof(hash_node_t *));
	if (new_list == NULL)
		return (0);
	new_list->key = strdup(key);
	/*if (new_list->key == NULL)*/
		/*free(new_list);*/
	new_list->value = strdup(value);
	/*if (new_list->value == NULL)*/
	/*{*/
	/*	free(new_list);*/
	/*	free(new_list->key);*/
	/*}*/
	new_list->next = ht->array[index];
	ht->array[index] = new_list;
	return (1);
}
