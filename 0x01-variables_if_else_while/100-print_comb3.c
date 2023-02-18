#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Description: Prints all possible different combinations of two digits
 * separated by , where 01 and 10 are considered the same combination
 * of the two digits 0 and 1. Numbers are printed in
 * ascending order, with two digits.
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != '8' || (i == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
