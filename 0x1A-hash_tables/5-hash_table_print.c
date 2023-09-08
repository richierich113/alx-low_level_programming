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
		index = 0;
		while (index <= ht->size)
		{
			if (ht->array[index])
				counter++;
			index++;
		}
		while (index <= ht->size)
		{
			if (ht->array[index])
			{
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				if (counter > 1)
					printf(", ");
				counter--;
			}
			index++;
		}

		printf("}\n");
	}
}
