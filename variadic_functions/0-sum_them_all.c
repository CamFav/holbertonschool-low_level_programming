#include <stdio.h>
#include "function_pointers.c"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: n
 *
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	int i, sum;

	va_start(ap, n);

	a = 0;
	
	for (i = 0; i < n; i++)
	{
		a += va_arg(ap, int);
	}
va_end(ap);
return n;
}






}
