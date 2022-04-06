#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 * in memory. which contains a copy of the string given as a parameter
 * @str: a pointer for char
 *
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	int a, b;
	char *s;

	if (str == NULL)
		return (NULL);

	a = 0;

	while (*(str + a))
		a++;

	s = malloc(sizeof(char) * a + 1);

	if (s == 0)
		return (0);

	for (b = 0; b < a; b++)
	{
		*(s + b) = *(str + b);
	}

	return (s);
}
