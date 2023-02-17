#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Description: Prints the lowercase alphabet in reverse, followed by
 * a line.
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
