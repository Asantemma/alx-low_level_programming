#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
	new = (*head).next;
	free(head);
	head = new;
	}
}

