#include "main.h"

/**
 * get_endianness - verifies if a machine has big endian or little
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int checker = 1;
	char *endian_ = (char *)&checker;

	if (*endian_)
		return (1);
	return (0);
}
