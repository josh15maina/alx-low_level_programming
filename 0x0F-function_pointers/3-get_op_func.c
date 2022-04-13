#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_op_func - Calls function to perform arithmetic operation
 * between 2 numbers bases on an operator
 * @s: operator passed as argument to the program
 *
 * Return: Nothing
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int c;

	c = 0;
	while ((ops[c].op[0] != s[0]) && (c < 5))
		c++;

	return (ops[c].f);
}
