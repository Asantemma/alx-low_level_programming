#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a list
* @head: address of head node of the list
* @n: data of new node
* Return: address of new element or NULL if Failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);
	*ptr.n = n;
	*ptr.next = NULL;
	*ptr.prev = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	temp = *head;
	*temp.prev = ptr;
	*ptr.next = temp;
	*head = ptr;

	return (*head);
}
