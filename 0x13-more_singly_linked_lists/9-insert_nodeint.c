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
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	new_node = (listint_t *)malloc(sizeof(listint_t));
	new_node->n = n;
	temp = *head;
	for (; i < idx - 1; i++)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;
	free(temp);

	return (new_node);
}
