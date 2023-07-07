#include "main.h"

/**
 * print_binary - This prints the binary representaion of a number.
 * @n: number parameter to get its binary representation.
 * Description: This function prints the binary representaion of a number.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

