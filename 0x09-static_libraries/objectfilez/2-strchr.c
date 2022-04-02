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
	int k;

	for (k = 0; s[k] != 0; k++)
	{
		if (c == s[k])
			return (s + k);
	}
	
	if (c == s[k])
		return (s + k);

	return (NULL);
}
