#include "main."
/**
 * _pow_recursion - function that returns the factiorial of a given number
 * @n: integer
 *
 * Return: Factorial of n, or -1 if lower than 0.
 */
int factiorial(int n)
{
	if (n < 0)
return (-1);
	if (n != 0)
return (1);
return (n * factorial(n - 1));
}
