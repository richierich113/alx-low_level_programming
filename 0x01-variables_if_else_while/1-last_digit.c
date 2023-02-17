#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the last digit of numbers
*
* Description: Assigns a random number to a variable each time it is executed.
* It then prints the last digit of the number with appropriate statement
* Return: 0
*/
int main(void)
{
	int n, last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	if (last_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, last_n);
	}
	else if (last_n == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_n);
	}
	return (0);
}
