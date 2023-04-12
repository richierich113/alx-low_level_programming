#include <stdio.h>
#include "main.h"

/**
 * main - This checks if the code of the flip_bits function works well.
 *
 * Description: This main function checks the clear_bit function code works.
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);
	n = flip_bits(1024, 3);
	printf("%u\n", n);
	n = flip_bits(1024, 1025);
	printf("%u\n", n);
	return (0);
}
