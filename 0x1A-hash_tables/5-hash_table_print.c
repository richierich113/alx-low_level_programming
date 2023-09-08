#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_ht;
	unsigned char comma;
	unsigned long int index;

	if (ht == NULL)
		return;

	printf("{");
	index = 0;
	comma = 0;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node_ht = ht->array[index];
			while (node_ht != NULL)
			{
				printf("'%s': '%s'", node_ht->key, node_ht->value);

				node_ht = node_ht->next;

				if (node_ht != NULL)
					printf(", ");
			}
			comma = 1;
		}
		index++;
	}
	printf("}\n");
}
