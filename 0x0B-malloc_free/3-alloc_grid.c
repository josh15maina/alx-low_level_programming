#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: Double Pointer
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j, k, index;

	index = 0;

	if (width <= 0 || height <= 0)
		return (0);

	s = malloc(height * sizeof(int *));

	if (s == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(width * sizeof(int));
		if (*(s + i) == 0)
		{
			index = 1;
			break;
		}

		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}

	if (index == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(s + k));
		}
		free(s);
	}

	return (s);
}
