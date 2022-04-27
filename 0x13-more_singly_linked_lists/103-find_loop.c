#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds address of starting node in looped linked list
 * @head: pointer to the head in linked list to test
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *foo, *yoyo;

	if (!head)
		return (NULL);

	foo = yoyo = head;

	while (yoyo && foo && foo->next)
	{
		yoyo = yoyo->next;
		foo = (foo->next)->next;

		if (foo == yoyo)
		{
			yoyo = head;

			while (yoyo && foo)
			{
				if (yoyo == foo)
					return (yoyo);
				yoyo = yoyo->next;
				foo = foo->next;
			}
		}
	}

	return (NULL);
}
