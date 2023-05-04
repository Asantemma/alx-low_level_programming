#include "main.h"

/**
 * get_bit- Function that returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 * Return: Value of bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	return (-1);

	value = (n >> index) & 1;
	return (value);
}
