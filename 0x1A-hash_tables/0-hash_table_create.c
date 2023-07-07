#include "hash_tables.h"

/**
*hash_table_create - creates a new hash table
*@size: size of the hash table
*Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hashtable = NULL;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
	{
		return (NULL);
	}

	hashtable->size = size;
	hashtable->array = malloc((sizeof(hash_node_t *)) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		hashtable->array[x] = NULL;
	}

	return (hashtable);
}
