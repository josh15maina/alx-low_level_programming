#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @f: string to code
 * Return: the enconde string.
 */
char *leet(char *f)
{
	int a;
	int b;
	int c;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	for (a = 0; f[a] != '\0'; a++)
	{
		b = 0;
		c = 0;
		while (l[b] != '\0')
		{
			if (f[a] == l[b])
			{
				c = b;
				f[a] = e[c];
			}
			b++;
		}
	}
	return (f);
}
