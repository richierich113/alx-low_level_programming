#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Parameter of type, int.
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	int m;

	m =  n % 10;

	if (m < 0)
	{
		m = -1 * m;
		_putchar('0' + m);
	}
	else
	{
		_putchar('0' + m);
	}
	return (m);
}

