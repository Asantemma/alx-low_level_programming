#include "main.h"

char *generate_buffer(char *file);
void close_file(int fd);

/**
* generate_buffer - function allocates 1024 bytes to a buffer.
* @file: The name of the file buffer to store characters for.
*
* Return: A pointer to the new buffer.
*/
char *generate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
	}

	return (buffer);
}

/**
* close_file - Closes file descriptor
* @fd: The file descriptor to be closed
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	exit(100);
	}
}

/**
* main - Copies contents from one file to another file.
* @argc: Argument count
* @argv: An array of pointers to arguments
* Return: 0 on success, 1 if fails
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, w, r;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buffer = generate_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
			{
				dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
				free(buffer);
				exit(98);
			}

		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
			{
				dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
				free(buffer);
				exit(99);
			}

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

} while (r > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
