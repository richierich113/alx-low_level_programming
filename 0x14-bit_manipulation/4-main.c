#include <stdio.h>
#include "main.h"

/**
 * main - This checks if the code of the clear_bit function works well.
 *
 * Description: This main function checks if the clear_bit function code works
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 0;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	clear_bit(&n, 1);
	printf("%lu\n", n);
	return (0);
}
