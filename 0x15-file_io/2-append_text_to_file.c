#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: pointer to the name of the file.
* @text_content: The text or string to add to the end of the file.
*
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int i;
int w;
int length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

i = open(filename, O_WRONLY | O_APPEND);
w = write(i, text_content, length);

if (i == -1 || w == -1)
return (-1);

close(i);

return (1);
}

