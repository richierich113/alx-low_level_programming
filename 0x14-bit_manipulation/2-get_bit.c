#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the number parameter
 * @index: index starting from 0 of the bit required
 * Description: This function returns the value of a bit, n at a given index.
 * Return: the converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}

