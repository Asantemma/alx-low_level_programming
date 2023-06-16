#include "lists.h"

/**
* get_dnodeint_at_index - returns the node at a particular index in linked list
* @head: address of the head of the list
* @index: nth node to return
* Return: node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *ptr = NULL;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr)
	{
		if (x == index)
			return (ptr);

		ptr = *ptr.next;
		x++;
	}

	ptr = NULL;
	return (NULL);
}
