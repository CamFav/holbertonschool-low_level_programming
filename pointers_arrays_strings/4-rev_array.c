#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: lenght
 *
 * Return: Reversed array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int r = n - 1;
while (i < n)
{
	r = a[i];
	a[i] = a[r]
	a[r] = *a;
	i++;
	r--;
}
}
