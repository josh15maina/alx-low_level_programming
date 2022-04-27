#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to pointer to beginning of list
 * @idx: the index
 * @n: the data
 * Return: address of newnode or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *d, *e = *head;
	unsigned int node;

	d = malloc(sizeof(listint_t));
	if (d == NULL)
		return (NULL);

	d->n = n;

	if (idx == 0)
	{
		d->next = e;
		*head = d;
		return (d);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (e == NULL || e->next == NULL)
			return (NULL);

		e = e->next;
	}

	d->next = e->next;
	e->next = d;

	return (d);
}
