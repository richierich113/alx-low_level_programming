#include "main.h"

/**
 * main - Calls puts2 function
 *
 * Description: Calls puts2 function that prints every other character of a
 * string, starting with the first character, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}
