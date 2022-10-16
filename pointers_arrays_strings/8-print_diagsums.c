#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix
 * @size: matrix column width
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	left = 0;
	right = 0;

for (i = 0; i < size; i++)
{
	left += a[(size * i) + i];
	right += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", left, right);
}
