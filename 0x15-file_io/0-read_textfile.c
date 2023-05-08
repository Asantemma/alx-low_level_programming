#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to the POSIX
* standard output
* @filename: file to be read
* @letters: number of letters to be read
* Return: actual number of letters read and printed
* 0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t i;
	ssize_t w;

	if (filename == NULL)
	return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	i = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(fp);
	return (w);
}

