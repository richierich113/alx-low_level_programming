#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of file parameter
 * @letters: parameter of the number of letters to be printed
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file, read_it, wrote_it;
	char *my_buffer;

	my_buffer = malloc(sizeof(*my_buffer) * (letters + 1));
	if (filename == NULL || my_buffer == NULL)
	{
		free(my_buffer);
		return (0);
	}
	my_file = open(filename, O_RDONLY);
	if (my_file == -1)
		return (0);
	read_it = read(my_file, my_buffer, letters);
	if (read_it == -1)
		return (0);
	my_buffer[read_it] = '\0';
	wrote_it = write(STDOUT_FILENO, my_buffer, read_it);
	if (wrote_it != read_it)
		return (0);
	free(my_buffer);
	close(my_file);
	return (read_it);
}
