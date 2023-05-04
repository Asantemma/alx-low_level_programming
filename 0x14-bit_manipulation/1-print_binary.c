#include "main.h"

/**
 * print_binary- Function that prints the binary representation of a number
 * @n: binary number to print
 * Return: 1 on success, -1 on failure
 */

void print_binary(unsigned long int n)
{
	int a, cout = 0;
	unsigned long int new;

	for (a = 63; a >= 0; a--)
	{
		new = n >> a;

	if (new & 1)
	{
	_putchar('1');
	cout++;
	}
	else if (cout)
	_putchar('0');
	}

	if (!cout)
	_putchar('0');
}
