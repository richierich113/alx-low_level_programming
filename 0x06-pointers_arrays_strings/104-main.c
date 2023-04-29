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
char buffer[] = "This is a string!\0And this is the rest of the";
char buffer1[] = "#buffer :)\1\2\3\4\5\6\7#cisfu";
char buffer2[] = "n\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#p";
char buffer3[] = "ointersarefun #infernumisfun\n";
strcat(buffer, buffer1);
strcat(buffer, buffer2);
strcat(buffer, buffer3);
printf("%s\n", buffer);
printf("---------------------------------\n");
print_buffer(buffer, sizeof(buffer));
return (0);
}
