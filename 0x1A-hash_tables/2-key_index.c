#include "hash_tables.h"
/**
* key_index- assigns a key to an index location
* @key: int to be used as index for hash table array
* @size: size of the hash table's array
* Return: index for the key value to be stored at
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
