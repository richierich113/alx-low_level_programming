#include "main.h"

/**
 * main - Calls print_to_98 function.
 *
 * Description: Calls print_to_98 function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: 0
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(-10);
	return (0);
}
