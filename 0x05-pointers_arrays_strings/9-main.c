#include "main.h"
#include <stdio.h>

/**
 * main - Calls *_strcpy function
 *
 * Description: Calls *_strcpy function  that copies the string pointed to by
 * src, including the terminating null byte (\0), to the buffer pointed
 * to by dest.
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
