#include "main.h"

/**
 * main - Calls _isalpha function.
 *
 * Description: Calls _isalpha function to checks for alphabetic character.
 * Return: 0
 */
int main(void)
{
	int r;

	r = _isalpha('A');
	_putchar('0' + r);
	r = _isalpha('a');
	_putchar('0' + r);
	r = _isalpha(82);
	_putchar('0' + r);
	r = _isalpha('>');
	_putchar('0' + r);
	r = _isalpha(94);
	_putchar('0' + r);

	_putchar('\n');

	return (0);
}
