#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char str[] = "Expect the best. Prepare for the worst. Capitalize on what";
char str1[] = " comes.\nhello world! hello-world 0123456hello";
char str2[] = " world\thello world.hello world\n";
char *ptr;
strcat(str, str1);

strcat(str, str2);
ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);

}
