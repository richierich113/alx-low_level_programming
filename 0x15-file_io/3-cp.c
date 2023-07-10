#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void checker_for_IO(int status, int fdesc, char *filename, char the_mode);
/**
 * main - copies the text content of a file to another file.
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int from, to, read_it = 1024, wrote_it, close_from, close_to;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char my_buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	checker_for_IO(from, -1, argv[1], 'O');
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	checker_for_IO(to, -1, argv[2], 'W');
	while (read_it == 1024)
	{
		read_it = read(from, my_buffer, sizeof(my_buffer));
		if (read_it == -1)
			checker_for_IO(-1, -1, argv[1], 'O');
		wrote_it = write(to, my_buffer, read_it);
		if (wrote_it == -1)
			checker_for_IO(-1, -1, argv[2], 'W');
	}
	close_from = close(from);
	checker_for_IO(close_from, from, NULL, 'C');
	close_to = close(to);
	checker_for_IO(close_to, to, NULL, 'C');
	return (0);
}

/**
 * checker_for_IO - checks whether a file can be opened or closed
 * @status: file descriptor of the file to be opened
 * @filename: name of the file
 * @the_mode: closing or opening
 * @fdesc: file descriptor
 *
 * Return: void
 */
void checker_for_IO(int status, int fdesc, char *filename, char the_mode)
{
	if (the_mode == 'C' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc);
		exit(100);
	}
	else if (the_mode == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				filename);
		exit(98);
	}
	else if (the_mode == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

