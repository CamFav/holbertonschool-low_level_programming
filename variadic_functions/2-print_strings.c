#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - no time 
 * @separator: no time
 * @n: no time
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	if (!separator)
		return;
	
	int i;

	for (i = 0; i < n; i++)
	{
		char *samere = va_arg(args, char *);

		if (samere == NULL)
			printf("(nil)");
		else
			printf("%s", samere);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
