#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum of data in list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

	if (!head)
		return (0);

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}

