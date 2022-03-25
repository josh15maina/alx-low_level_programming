#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int f = 0;

	while (f < n && *src)
	{
		dest[index + f] = *src;
		src++;
		f++;
	}
	dest[index + f] = '\0';
	return (dest);
}
