#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a list
 * @h: head node of the linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	
	while (h->prev != NULL)
		h = h->prev;
	
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
