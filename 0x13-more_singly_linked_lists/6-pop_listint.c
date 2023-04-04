#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int num;

	if (!head || !*head)
	return (0);

	num = (**head).n;
	new = (**head).next;
	free(*head);
	*head = new;

	return (num);
}

