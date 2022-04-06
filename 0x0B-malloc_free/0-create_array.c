#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 *
 * @size: size of array
 *@c: a variable for char
 *
 * Return: Pointer or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *t;

	t = malloc(sizeof(char) * size);

	if (t == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (a < size)
	{
		t[a] = c;
		a++;
	}

	return (t);
}




