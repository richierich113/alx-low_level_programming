#include "main.h"

/**
 * main - Calls print_sign function.
 *
 * Description: Calls print_sign function and prints the sign of a number.
 * Return: 1, 0 or -1 and prints sign according to input argument value.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);

}
