#include "main.h"
#include <stddef.h>

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number parameter to set its index to 0
 * @index: index parameter to set to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

