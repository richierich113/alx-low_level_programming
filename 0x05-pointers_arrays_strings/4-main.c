#include "main.h"

/**
 * main - Call print_rev prints a string, in reverse
 *
 * Description: Call print_rev prints a string, in reverse, followed
 * by a new line.
 * Return: Always 0.
 */
int main(void)
{
char *str;

str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
print_rev(str);
return (0);
}
