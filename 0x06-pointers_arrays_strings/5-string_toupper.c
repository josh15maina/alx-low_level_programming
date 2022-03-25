#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @n: string input
 * Return: n
 *
 */
char *string_toupper(char *n)
{
	int h;

	h = 0;
	while (n[h] != '\0')
	{
		if (n[h] >= 'a' && n[h] <= 'z')
			n[h] = n[h] - 32;
		h++;
	}
	return (n);
}
