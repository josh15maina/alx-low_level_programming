#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
	int j = 0;

	while (h != 0)
		h = h->next, j++;

	return (j);
}
