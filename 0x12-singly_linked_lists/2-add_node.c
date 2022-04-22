#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  add_node - adds new node to list
 *  @head: pointer to pointer to list beginning
 *  @str: a string in the node
 *  Return: address of new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
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
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
