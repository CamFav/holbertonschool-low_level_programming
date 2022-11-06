#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - no time 
 * @separator: no time
 * @n: no time
 */
void print_strings(const char *separator, const unsigned int in, ...)
{
	va_list words;
	char *word;
	unsigned int i;

	va_start(words, n);
	i = 0;
	while (i < n )
	{
		word = va_arg(words, char *s);
		if (word != NULL)
			printf("%s", word);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(words);
}
