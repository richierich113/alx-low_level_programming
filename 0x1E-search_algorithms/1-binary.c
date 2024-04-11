#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m = (L + R) / 2;
	size_t i;
	int Am;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		Am = *(array + m);
		printf("Searching in array: ");
		for (i = L; i < (R + 1); i++)
		{
			printf("%ld", i);
			if (i < R)
				printf(" ");
			else if (i == R)
				printf("\n");
		}

		if (Am < value) /* median < target */
		{
			L = m + 1;
			m = (L + R) / 2;
		}
		else if (Am > value)
		{
			R = m - 1;*/
			m = (L + R) / 2;
		}
		else if (Am == value)
		{
			return (m);
		}
	}
	return (-1);
}
