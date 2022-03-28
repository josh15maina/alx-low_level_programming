#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a string
 *@s: the string to check
 *@c: the character we're looking for
 *
 *Return: a pointer to the first occurrence of the character @c in the string
 * @s. Return NULL if the character isn't found
 *
 */
char *_strchr(char *s, char c)
{
	if (*s != c)
	{
		s++;
	}
	else
	{
		return (s);
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
