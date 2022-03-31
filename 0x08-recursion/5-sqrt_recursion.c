#include "main.h"
int _sqrt(int i, int j);

/**
 * _sqrt - Makes possible to evaluate from 1 to n
 * @i: same number as n
 * @j: number that iterates from 1 to n
 *
 * Return: square root
 */
int _sqrt(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (_sqrt(i, j + 1));
}

/**
 *_sqrt_recursion - returns square root of a number
 * @n: a variable of int
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, 1));
}
