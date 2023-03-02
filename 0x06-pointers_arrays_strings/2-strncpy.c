#include "main.h"

/**
 * *_strncpy - copies a part of the string pointed to by src
 * @dest: pointer to string destination parameter
 * @src: pointer to string origin parameter
 * @n: number of chars to be copied.
 * Return: pointer to a char dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(dest + i) != '\0'; i++)
	{

	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		if (i < n)
		{
			*(dest + i) = *(src + i);
		}


	}
	*(dest + i) = '\0';
	return (dest);
}
