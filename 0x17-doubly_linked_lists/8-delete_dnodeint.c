#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at particular index
 * @head: address of the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if succeeds, -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	ptr = *head;

	if (index == 0)
	{
		*head = (**head).next;
		if (*ptr.next != NULL)
		{
			(**head).prev = NULL;
		}
		free(ptr);
		return (1);
	}

	while (ptr != NULL)
	{
		if (*ptr.next == NULL && i == index - 1)
		{
			ptr->prev->next = NULL;
			free(ptr);
			return (1);
		}
		else if (i == index)
		{
			ptr->prev->next = *ptr.next;
			ptr->next->prev = *ptr.prev;
			free(ptr);
			return (1);
		}
		ptr = *ptr.next;
		i++;
	}

	return (-1);
}
