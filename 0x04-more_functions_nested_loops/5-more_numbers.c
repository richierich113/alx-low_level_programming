#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				/**
				 * print j / 10 as char and 
				 * print remainder as char
				 * ie if j = 10, j / 10 = 1 and j % 10 = 0
				 * where the 2 _putchars will print 10 to
				 * stdout
				 */
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
