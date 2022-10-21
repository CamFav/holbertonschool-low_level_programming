#include "main.h"
/**
 * prime_prout - function that checks if number is a prime number
 * @n: number to check
 * @p: prime number
 *
 * Return: 1 for prime, otherwise 0
 */
int prime_prout(int n, int p)
{
	if (n <= 1)
		return (0);
	else if (p > n - 1)
		return (1);
	else if (n % p == 0)
		return (0);
	if (p == 2)
		return (prime_prout(n, p + 1));
	return (prime_prout(n, p + 2));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number
 *
 * Return: 1 for prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (prime_prout(n, 2));
}
