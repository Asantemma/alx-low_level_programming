#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cout = 0;
	unsigned int new;
	unsigned int not_include = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = not_include >> i;
		if (new & 1)
			cout++;
	}

	return (cout);
}
