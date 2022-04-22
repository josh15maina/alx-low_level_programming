#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of variadic arguments
 * @...: Arguments Variadic
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == 0)
		separator = "";

	va_start(ptr, n);
	for (a = 0; a < n - 1; a++)
		printf("%d%s", va_arg(ptr, int), separator);
	printf("%d\n", va_arg(ptr, int));

	va_end(ptr);
}
