#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *@n: Parameter of type, int.
 * Return: n if input n is positive or -1 * n if input  n is negative.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
