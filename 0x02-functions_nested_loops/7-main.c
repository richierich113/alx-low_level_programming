#include "main.h"

/**
 * main - Calls print_last_digit function.
 *
 * Description: Calls print_last_digit function that prints the last
 * digit of a number.
 * Return: 0
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
