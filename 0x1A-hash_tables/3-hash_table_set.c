#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table.
* @ht: pointer to hash table
* @key: key of the element
* @value: value of the element
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr = NULL;
	hash_node_t *node = NULL;
	unsigned long int index;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
