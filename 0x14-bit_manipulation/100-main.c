#include <stdio.h>
#include "main.h"

/**
  * main - This checks if the code of the get_endianness function
  * works well.
  *
  * Description: This main function checks the get_endianness function
  * code works.
  * Return: Always 0.
  */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}

