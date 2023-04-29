#include "main.h"
#include <stdio.h>

/**
 * main - Check  for a digit (0 through 9).
 *
 * Description: Prints 1 if c is a digit, 0 otherwise.
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
