#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest:where to copy the memory to
 * @src: the memory area to copy from
 * @n: the number of bytes
 * Return: a pointer for @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/*copying "n" bytes of source to destination*/

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
