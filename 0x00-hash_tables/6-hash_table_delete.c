#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: the hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;


	if (ht->array == NULL)
		free(ht);
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			ht->array[i] = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}
