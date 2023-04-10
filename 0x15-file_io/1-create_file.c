#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to  string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int w;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, length);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}

