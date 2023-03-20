#include <stdio.h>

/**
 * main - Prints the name of a file it is compiled from
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", _FILENAME_);
	return (0);
}
