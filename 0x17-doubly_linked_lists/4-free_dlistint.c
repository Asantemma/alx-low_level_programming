#include "lists.h"

/**
* free_dlistint - frees a doubly linked list
* @head: address of the first node of the list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;

	while (head != NULL)
	{
		ptr = head;
		free(ptr);
		head = *head.next;
	}
}
