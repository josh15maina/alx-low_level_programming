#include "main.h"

/**
 * palind2 - returns the length of a string.
 * @s: string
 * @l: integer to count legth
 * Return: the length of a string.
 */
int palind2(char *s, int l)
{
	if (*s == '\0')
		return (l - 1);
	else
		return (palind2(s + 1, l + 1));
}

/**
 * palind3 - compares each character of the string.
 * @s: string
 * @l: biggest iterator.
 * Return: .
 */
int palind3(char *s, int l)
{
	if (*s != *(s + l))
	{
		return (0);
	}
	else if (*s == 0)
	{
		return (1);
	}
	return (palind3(s + 1, l - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
