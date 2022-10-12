#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - description
 * @n: input
 *
 * Return: none
 */
	void print_to_98(int n) {
if (n >= 98)
{	
	for (; n >= 98; n--)
	printf("%i, ", n);
}
else {
	for (; n <= 98; n++)
	{
	printf("%i", n);
		if (n != 98)
	printf(", ");
	printf("\n");
}
}
}

