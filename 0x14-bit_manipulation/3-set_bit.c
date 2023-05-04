#include "main.h"

/**
 * set_bit- Function that sets the value of a bit at a given index to 1
 * @n: pointer to number
 * @index: index of bit
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = *n | (1 << index);
	return (1);
} 
