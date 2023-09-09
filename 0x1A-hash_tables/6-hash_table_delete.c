#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *current;
	unsigned long int index;

	index = 0;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];

			while (node != NULL)
			{
				current = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = current;
			}
		}

		index++;
	}

	free(ht->array);
	free(ht);
}
