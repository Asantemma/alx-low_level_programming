#include "main.h"

/**
 * clear_bit - function that stes the value of a bit to 0 ate a given index
 * @n: pointer to number
 * @index: index of number
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ~(1 << index) & *n;
	return (-1);
}
