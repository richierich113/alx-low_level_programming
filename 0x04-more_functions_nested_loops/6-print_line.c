#include "main.h"

/**
 * print_line - draws a straight line in the terminal with argument value.
 * @n: Parameter of type, int.
 */
void print_line(int n)
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
			/**
			 * 95 is _ in the ASCII table
			 */
			_putchar(95);

			i++;
		}
		_putchar('\n');
	}
}
