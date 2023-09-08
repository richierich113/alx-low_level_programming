#include "hash_tables.h"


/**
 * key_index - gives you the index of a key
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table
 *
 * Description: Uses the djb2 algorithm to get the hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
