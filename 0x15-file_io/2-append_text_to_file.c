#include "main.h"
#include <stddef.h>

/**
 * get_strlen - counts string length
 * @string: string to be used parameter input
 *
 * Return: length of the string input
 */
int get_strlen(char *string)
{
	int length = 0;

	while (string[length] != '\0')
		length++;
	return (length);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int my_file, wrote_it;

	if (filename == NULL)
		return (-1);
	my_file = open(filename, O_WRONLY | O_APPEND);
	if (my_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrote_it = write(my_file, text_content,
				get_strlen(text_content));
		if (wrote_it == -1)
		{
			close(my_file);
			return (-1);
		}
		close(my_file);
		return (1);
	}
	else
	{
		close(my_file);
		return (1);
	}
}
