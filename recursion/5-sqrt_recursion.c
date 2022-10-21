#include "main.h"
/**
 * sqrt_prout - function that check for the square root of b
 * @a: a
 * b: b
 *
 * Return: -1 or square of c
 */
int sqrt_prout(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}
/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 * @n: square
 *
 * Return: Natural square of a random number.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_prout(1, n));
}

