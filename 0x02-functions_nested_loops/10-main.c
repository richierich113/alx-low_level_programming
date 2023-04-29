#include "main.h"
#include <stdio.h>

/**
 * main - Calls add function.
 *
 * Description: Calls add function that adds two integers and returns
 * the result.
 * Return: 0
 */
int main(void)
{
	int sum, i, j;

	i = 10;

	j = 20;

	sum = add(i, j);
	printf("%d\n", sum);

	return (0);

}
