#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether a number is positive, zero or negative
 *
 * Description: Assigns a random number to a variable
 * and print whether the number stored in the variable 
 * is positive or negative.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);

	} else if (n == 0)
	{
		printf("%d is zero\n", n);

	} else
	{
		printf("%d is negative\n", n);

	}
	return (0);
}
