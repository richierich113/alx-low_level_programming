#include "main.h"

/**
 * main - Calls _islower function.
 *
 * Description: Calls _islower function to check for lowercase character.
 * Return: 0
 */
int main(void)
{
	int r;

	r = _islower('A');
	_putchar(r + '0');

	r = _islower('a');
	_putchar(r + '0');

	_putchar('\n');

	return (0);
}
