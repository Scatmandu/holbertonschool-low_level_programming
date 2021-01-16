#include "hash_tables.h"
/**
* hash_table_print- prints a hash table
* @ht: hash table to print
* Return: void
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				while (ht->array[i]->next != NULL)
				{
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					if (ht->array[i]->next != NULL)
						printf(",");
						printf(" ");
					ht->array[i] = ht->array[i]->next;
				}
			}
			else
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

					printf(",");
					printf(" ");
			}
		}
	}
	printf("}");
	printf("\n");
}
