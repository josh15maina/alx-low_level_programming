#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to a singly linked list at the end of it
 * @head: pointer to head of the singly linked list_t
 * @n: number to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ramp;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
		return (0);

	ramp = *head;

	new_node->n = n;
	new_node->next = 0;

	if (ramp == 0)
	{
		*head = new_node;
	}
	else
	{
		while (ramp->next != 0)
			ramp = ramp->next;
		ramp->next = new_node;
	}

	return (new_node);
}
