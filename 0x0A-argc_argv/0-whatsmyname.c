#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	
	printf("%s\n", *argv);

	return (0);
}

