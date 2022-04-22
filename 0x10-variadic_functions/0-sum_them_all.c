#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sums all arguments variadic
 * @n: Number of Arguments
 * @...: Arguments Variadic
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, b;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (b = 0; b < n; b++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
