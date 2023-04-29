#include "main.h"

/**
 * main - Calls _puts function that prints a string
 *
 * Description: Calls _puts function that prints a string, followed by a new
 * line, to stdout
 * Return: Always 0.
 */
int main(void)
{
char *str;

str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
_puts(str);
return (0);
}
