#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of singly linked list
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node = *head;

	if (*head == NULL)
		return (0);

	n = node->n;
	*head = node->next;
	free(node);

	return (n);
}
