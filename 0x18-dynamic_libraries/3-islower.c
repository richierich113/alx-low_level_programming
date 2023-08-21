#include "main.h"

/**
 * _islower - Checks  for lowercase character.
 * @c: Parameter of type int.
 * Return: 1 if lower case and  0 otherwise.
 */
int _islower(int c)
{
	int lower = 1;

	if (c >= 97 && c <= 122)
	{
		return (lower);
	}
	else
	{
		return (0);
	}
}

