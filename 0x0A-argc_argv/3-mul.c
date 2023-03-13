#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0, 1 if no argument and print error
 */

int main(int argc, char *argv[])
{
	int i, j, prod = 0;
	
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	prod = i * j;
	
	printf("%d\n", prod);
	}
	return (0);
}
