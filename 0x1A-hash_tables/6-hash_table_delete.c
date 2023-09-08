#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht)
	{
		index = 0;
		while (index < ht->size)
		{
			while (ht->array[index])
			{
				current_node = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);
				ht->array[index] = current_node;
			}
			index++
		}

		free(ht->array);
		free(ht);

	}
}
