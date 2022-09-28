#include "main.h"

/**
 * is_prime_number - returns the l if n is prime
 * @n: number to be checked
 *
 * Return: l if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= l)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns the l if n is prime
 * @n: number to be checked
 * @start: number to start checking from
 *
 * Return: l if n is prime, 0 otherwise
 */
int is_prime(int n, int start)
{
	if (start <= l)
		return (l);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - l));
}
