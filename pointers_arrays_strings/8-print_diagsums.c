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
	int i, j, m, n, r = 0, sum = 0;
for (i = 0; i < size; i++)
{
	for (j = 0; j < *a; j++)
{
	if (i == j)
	sum = sum + a*;
}
}
printf("%d, %d\n", i, j);
}

