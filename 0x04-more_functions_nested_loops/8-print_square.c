#include "main.h"

/**
 * print_square - prints a square using the # character.
 * @size: Parameter of type, int.
 * Description: prints a square using the # character.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;

		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

			i++;
		}
	}
}
