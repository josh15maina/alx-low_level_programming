#include "main.h"

/**
 * *_memset - fills a memory with a constant byte
 * @s: a pointer for char
 * @b: a variable for char
 * @n: a variable for an unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}

	return (s);
}
