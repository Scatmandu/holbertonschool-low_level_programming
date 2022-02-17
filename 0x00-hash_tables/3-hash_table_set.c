#include "hash_tables.h"

/**
 * hash_table_set - sets key in a hash table
 * @ht: the hash table
 * @key: the key
 * @value: value of key
 * Return: 1 for success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *next, *temp, *new;
	unsigned long int index, hash, size;

	new = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL || new == NULL)
	{
		return (0);
	}

	size = ht->size;
	hash = hash_djb2((const unsigned char *)key);
	index = hash % size;

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	temp = ht->array[index];

	while (temp)
	{
		next = temp->next;

		if (strcmp(temp->key, key) == 0)
		{
			new->next = temp->next;
			free(temp->value);
			free(temp->key);
			free(temp);
			break;
		}
		temp = next;
	}
	ht->array[index] = new;
	return (1);
}
