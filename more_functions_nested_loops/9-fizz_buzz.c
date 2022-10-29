#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print numbers from 1 to 100 / replace multiples of 3 by Fizz
 * and multiples of 5 by Buzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 5 == 0)
		printf("Buzz");
	else if (i % 3 == 0)
		printf("Fizz");
	else
		printf("%d", i);
	if (i != 100)
		putchar(' ');
}
putchar('\n');
return (0);
}
