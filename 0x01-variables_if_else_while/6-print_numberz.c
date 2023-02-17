#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 * and less than 10, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);

}
