#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return:Number of elements in list
 */
size_t print_list(const list_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		if (h->str != 0)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		a++;
	}
	return (a);
}
