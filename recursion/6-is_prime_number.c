#include "main.h"
/**
 * prime_prout - function that checks if number is a prime number
 * @c: check
 * @p: prime number
 *
 * Return: 1 for prime, otherwise 0
 */
int prime_prout(int c, int p)
{
	if (p < 2 && p % c == 0)
		return (0);
	else if (c > p / 2)
		return (1);
	else
		return (prime_prout(c + 1, p));
}

/**
 * is_prime_number(int n) - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number
 *
 * Return: 1 for prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_prout(2, n));
}
