#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of singly linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *i;

	if (*head == 0)
		return (0);

	if ((*head)->next == 0)
		return (*head);

	h = *head;
	i = h->next;
	h->next = 0;
	while (1)
	{
		if (i->next == 0)
		{
			i->next = *head;
			*head = i;
			break;
		}
		h = i;
		i = h->next;
		h->next = *head;
		*head = h;
	}

	return (*head);
}
