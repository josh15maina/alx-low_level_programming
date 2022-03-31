#include "main.h"
int isprime(int c, int d);

/**
 * isprime -  Makes possible to evaluate from 1 to n
 * @c: same number as n
 * @d: number that iterates from 1 to n
 *
 * Return: Prime number
 */
int isprime(int c, int d)
{
	if (c == d)
	{
		return (1);
	}
	else if (c % d == 0)
	{
		return (0);
	}
	return (isprime(c, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: Prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isprime(n, 2));
}
