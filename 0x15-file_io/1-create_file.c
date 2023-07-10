#include "main.h"
#include <stddef.h>

/**
 * get_strlen - counts string length
 * @string: string to be used parameter
 *
 * Return: length of the string input parameter
 */
int get_strlen(char *string)
{
	int length = 0;

	while (string[length] != '\0')
		length++;
	return (length);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int my_file, wrote_it;

	if (filename == NULL)
		return (-1);
	my_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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

