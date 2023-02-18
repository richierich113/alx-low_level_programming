#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by , and a space.
 * Return: 0
 */
int main(void)
{
int c, i, j, k;

for (c = 48; c <= 57; c++)
{
	for (i = 48; i <= 57; i++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (((k + j) > (c + i) && k >= c) ||
							c < k)
				{
					putchar(c);
					putchar(i);
					putchar(' ');
					putchar(k);
					putchar(j);
					if (c + i + k + j == 227 &&
							c == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}

putchar('\n');

return (0);
}
