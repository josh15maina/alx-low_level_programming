#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 *
 * @h:head of doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t index = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
