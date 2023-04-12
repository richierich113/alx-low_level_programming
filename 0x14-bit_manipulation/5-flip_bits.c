#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: initial number
 * @m: final number
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _flip = n ^ m;
	int i = 0;

	while (_flip)
	{
		if (_flip & 1)
			i++;
		_flip  >>= 1;
	}
	return (i);
}
