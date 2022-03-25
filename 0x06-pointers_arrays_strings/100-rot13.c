#include "main.h"

/**
 * rot13 - encode string in rot13
 * @n: input string
 * Return: pointer to dest
 */
char *rot13(char *n)
{
	int c = 0, i;

	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(n + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(n + c) == alph[i])
			{
				*(n + c) = rot13[i];
				break;
			}
		}
		c++;
	}
	return (n);
}
