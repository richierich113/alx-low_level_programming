#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *nxt_node = NULL;
	hash_node_t *current = NULL;

	if (!ht)
		return;
	if (ht->array)
	{
		index = 0;
		while (index < ht->size)
		{
			if (ht->array[index] != NULL)
			{
				current = ht->array[index];
				while (current)
				{
					nxt_node = current->next;
					if (current->value)
						free(current->value);

					if (current->key)
						free(current->key);

					free(current);
					current = nxt_node;
				}
			}
			index++;
		}

		free(ht->array);
	}

	free(ht);
}
