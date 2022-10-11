#include "main.h"
/**
 * print_last_digit - description
 * @n: integer to print last digit
 *
 * Return: Last digit
 */
	int print_last_digit(int n)
{
	int a, b;

	a = n % 10;
if (a < 0)
	a = -1;
b = '0' + a;
	_putchar(b);
return (a);
}
