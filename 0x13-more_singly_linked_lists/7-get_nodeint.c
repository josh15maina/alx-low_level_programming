#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: head pointer of singly linked list
 * @index: index to find in list
 *
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
		return (0);

	while (c < index)
	{
		if (head == 0)
			return (0);
		head = head->next;
		c++;
	}

	return (head);
}
