#include "main.h"

/**
 * main - Calls print_times_table function.
 *
 *Description: Calls print_times_table function that prints the n times
 * table, starting with 0.
 * Return: 0
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}
