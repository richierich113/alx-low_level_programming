#include "main.h"
#include <stdio.h>

/**
 * main - Check  for uppercase character.
 *
 * Description: Prints 1 if c is uppercase and 0 otherwise.
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
