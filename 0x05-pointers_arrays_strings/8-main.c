#include "main.h"

/**
 * main - Calls  print_array function
 *
 * Description: Calls  print_array function that  prints n elements of an
 * array of integers, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
