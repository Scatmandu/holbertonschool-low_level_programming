#include "hash_tables.h"
/**
* hash_table_get- gets a value from a hash table based on its key
* @ht: the hash table
* @key: key to use
* Return: a value
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i]->next != NULL)
			{
				if (strcmp(ht->array[i]->key, key) == 0)
					value = ht->array[i]->value;
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	return (value);
}
