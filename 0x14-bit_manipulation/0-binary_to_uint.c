#include <stddef.h>
#include "main.h"

/**
 * validate_string - verifies whether input string has only 0's and 1's
 * @c: string parameter to be checked
 *
 * Return: 1 if valid, 0 otherwise
 */
int validate_string(const char *c)
{
	if (c == NULL)
		return (0);
	while (*c)
	{
		if (*c != '1' && *c != '0')
			return (0);
		c++;
	}

	return (1);
}


/**
 * binary_to_uint -this converts a binary to an unsigned int
 * @b: the parameter to convert
 * Description: a function that converts a binary to an unsigned int.
 * Return:  the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 and b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int str_length = 0, _tbase = 1;

	if (!validate_string(b))
		return (0);
	while (b[str_length] != '\0')
		str_length++;
	while (str_length)
	{
		dec += ((b[str_length - 1] - '0') * _tbase);
		_tbase *= 2;
		str_length--;
	}

	return (dec);
}

