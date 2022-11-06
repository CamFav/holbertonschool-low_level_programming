#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers/n
 * @separator: string
 * @n: number of integers passed to function
 *
 * Return: Separated numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list amount
	unsigned int i = 0;

	va_start(amount, n);
	
	while (i < n)
	{
		printf("d", va_arg(amount, int));
	if (i < n -1 && !separator)
		printf("%s", separator);
	i++;
}
printf("\n");
va_end(amount);
}
