#include "main.h"
#include <stdio.h>

/**
 * main - Calls  rev_string  function
 *
 * Description: Calls  rev_string  function that reverses a string.
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
