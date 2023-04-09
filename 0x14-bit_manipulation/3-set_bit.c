#include "main.h"

/**
 * set_bit - sets the value of a bit at a giben index to 1
 * @n: pointer to number
 * @index: index of bit
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
