#include "main.h"

/**
 * print_diagonal - that draws a diagonal line on the terminal with arg value.
 * @n: Parameter of type, int.
 * Description: Takes in integer value n  and draws a diagonal line on
 * the terminal
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

		while (i < (n - 1))
		{
			_putchar(32);

			i++;
		}

		_putchar(92);
		_putchar('\n');

	}
}
