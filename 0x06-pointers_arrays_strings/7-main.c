#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
char s[] = "Expect the best. Prepare for the worst. Capitalize";
char s1[] = "on what comes.\n";
char *p;
strcat(s, s1);

p = leet(s);
printf("%s", p);
printf("%s", s);
return (0);
}
