#include "lists.h"

/**
* dlistint_t *insert_dnodeint_at_index - inserts a new node at a given position
* @h: address of head node
* @idx: index of the new node
*@n: data(n) of new node
*Return: new node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = NULL, *new_node = NULL;
	unsigned int x = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).prev = NULL;
	(*new_node).next = NULL;
	ptr = *h;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (ptr)
	{
		if ((*ptr).next == NULL && x == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if (x == idx)
		{
			(*new_node).next = ptr;
			(*new_node).prev = ptr->prev;

			ptr->prev->next = new_node;
			(*ptr).prev = new_node;
			return (new_node);
		}

		ptr = (*ptr).next;
		x++;
	}

	free(new_node);
	return (NULL);
}
