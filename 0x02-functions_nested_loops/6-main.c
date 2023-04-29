#include "main.h"
#include <stdio.h>
/**
 * main - Calls _abs function to computes the absolute value of an integer.
 *
 * Description: Calls _abs function to computes the absolute value of
 * an integer.
 * Return: 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);

	return (0);
}
