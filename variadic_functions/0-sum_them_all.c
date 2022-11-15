#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: n
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap; // Initialize the va_list structure, used for argument pointer variables.
	unsigned int i;
	int sum = 0;

	va_start(ap, n); // Initialize the argument pointer variable ap to point to the first of the optional arguments of the current function; last must be the last required argument to the function

	for (i = 0; i < n; i++) // For all unnamed integer, do an addition until it reach int n
		sum += va_arg(ap, int); // va_arg returns the value of the next parameter 
	va_end(ap); // Cleans up the list (void va_end (va_list ap)
	return (sum);
}
