#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: Binary number to print
 *
 * Return: 1 for success; -1 for failure
 */

void print_binary(unsigned long int n)
{
int i;
char *count = "0";

for (i = 1 << 30; i > 0; i = i / 2)
	{
	if ((n & i) != 0)
		{
		count = "1";
		}
	else
		{
		count = "0";
		}
	}
}
