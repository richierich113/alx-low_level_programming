#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newkv_pair;
	unsigned long int index;

	newkv_pair = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newkv_pair == NULL)
		return (0);

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	newkv_pair->key = strdup(key);
	newkv_pair->value = strdup(value);
	newkv_pair->next = NULL;

	if (ht->array[index] != NULL)
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}

	if (ht->array[index] == NULL)
		newkv_pair->next = NULL;
	else
		newkv_pair->next = ht->array[index];

	ht->array[index] = newkv_pair;
	return (1);
}
