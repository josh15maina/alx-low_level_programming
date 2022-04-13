#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of type int
 *
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: element matches -1, if size <=0 -1 else index of first
 * element cmp func does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array && cmp && size > 0)
	{
		for (b = 0; b < size; b++)
		{
			if (cmp(array[b]))
				return (b);
		}
	}
	return (-1);
}
