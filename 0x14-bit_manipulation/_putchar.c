#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print as a parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is therefore set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
