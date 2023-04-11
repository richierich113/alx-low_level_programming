#include <stdio.h>
#include "main.h"

/**
 * main - checks if the code in the get_bit function works well.
 *
 * Description: A main function that checks the get_bit function code.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}
