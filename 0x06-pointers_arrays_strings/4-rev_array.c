#include "main.h"

/**
 * reverse_array - reverses contents of array
 * @a: array
 * @n: size
 * Return: nothing
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
