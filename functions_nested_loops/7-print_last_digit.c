#include "main.h"
/**
 * print_last_digit - description
 *@n: integer to print last digit
 *
 * Return: Always 0
 */
	int print_last_digit(int)
{
	if ((n % 10 < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
