#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: Parameter of type, int.
 *
 * Return: 1 if c is a letter, lowercase or uppercase. Otherwise, 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);
	else
		return (0);
}
