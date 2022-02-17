#include "hash_tables.h"
/**
 * hash_table_get - gets value from hash table at a certain key
 * @ht: the hash table
 * @key: key to find value at
 * Return: value at key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp = ht->array[i];


	while (temp != NULL && strcmp(key, temp->key) != 0)
		temp = temp->next;
	if (temp == NULL || temp->key == NULL)
		return (NULL);
	return (temp->value);
}
