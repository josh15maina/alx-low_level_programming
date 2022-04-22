#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of list
 * @head: pointer to pointer to starting node
 * @str: string in node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == 0)
		return (0);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}
