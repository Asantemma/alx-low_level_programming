#include "hash_tables.h"

/**
* key_index - gives the index of a key
* @key: key
* @size: size of the hashtable
* Return: index at which the key/value should be stored in the hash table array
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
