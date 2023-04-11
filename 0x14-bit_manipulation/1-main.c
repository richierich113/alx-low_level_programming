#include <stdio.h>
#include "main.h"

/**
 * main - checks if the code in the print_binary function works well.
 *
 * Description: A main function that checks the print_binary function code.
 * Return: Always 0.
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
