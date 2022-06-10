#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of doubly linked list
 *
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	while (head)
	{
		last = head;
		head = head->next;
		free(last);
	}
}
