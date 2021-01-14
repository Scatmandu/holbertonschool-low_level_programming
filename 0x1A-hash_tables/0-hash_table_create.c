#include "hash_tables.h"
/**
* hash_table_create- makes a hash table of size size
* @size: the size of the hash table to be created
* Return: NULL or the newly-created table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	/*unsigned long int i;*/
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t) * size);

	if (new_table == NULL)
		return (NULL);
/*	for (i = 0; i < size; i++)
*	{
*		new_table[i].key = 0;
*		new_table[i].value = 0;
*	}
*/
	else
		return (new_table);
}
