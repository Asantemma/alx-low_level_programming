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
	unsigned int i;
	dlistint_t *ptr2;

	ptr = *head;

	if (ptr != NULL)
		while (ptr->prev != NULL)
			ptr = ptr->prev;

	i = 0;

	while (ptr != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = ptr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				ptr2->next = ptr->next;

				if (ptr->next != NULL)
					ptr->next->prev = ptr2;
			}

			free(ptr);
			return (1);
		}
		ptr2 = ptr;
		ptr = ptr->next;
	i++;
	}

	return (-1);
}
