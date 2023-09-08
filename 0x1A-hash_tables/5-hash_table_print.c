#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned int counter = 0;

	if (ht != NULL)
	{
		printf("{");

		for (index = 0; index <= ht->size; index++)
		{
			if (ht->array[index])
			{
				counter++;
			}
		}

		for (index = 0; index <= ht->size; index++)
		{
			if (ht->array[index])
			{
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				if (counter > 1)
					printf(", ");
				counter--;
			}
		}

		printf("}\n");
	}
}
