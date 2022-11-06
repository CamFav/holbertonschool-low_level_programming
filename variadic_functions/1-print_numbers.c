#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers/n
 * @separator: string
 * @n: number of integers passed to function
 *
 * Return: Separated numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		printf("d", (int);
	if (i < n -1 && !separator)
		printf("%s", separator);
	i++;
}
printf("\n");
	return (0);
}
