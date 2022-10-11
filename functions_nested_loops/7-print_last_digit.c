#include "main.h"
/**
 * print_last_digit - description
 * @n: integer to print last digit
 *
 * Return: Last digit
 */
	int print_last_digit(int)
{
	if ((n % 10) < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
