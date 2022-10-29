#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14, followed by a new line
 *
 * Return: 01234567891011121314/n
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
{
	for (x = 0; x <= 14; x++)
{
		if (x >= 10)
	{
		_putchar(x / 10 + '0');
	}
		_putchar(x % 10 + '0');
}
	_putchar('\n');
}
}
