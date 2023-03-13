#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1
 * if no argument, print error
 */

int main(int argc, char *argv[])
{
	int i, prod = 0;
	
	if(argc = 2)
	{
	for (i = 0; i < argc; i++)
	{
		prod = prod * atoi(argv[i]);
	}
	printf("%d\n", prod);
	}
	return (0);
}
