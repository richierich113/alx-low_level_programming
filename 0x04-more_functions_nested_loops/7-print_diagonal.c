#include "main.h"

/**
 * print_diagonal - that draws a diagonal line on the terminal with arg value.
 * @n: Parameter of type, int.
 * Description
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;

		while (i < n)
		{
			_putchar(32);

			i++;
		}

		_putchar(92);
		_putchar('\n');

	}
}
