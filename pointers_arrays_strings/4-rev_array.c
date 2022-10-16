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
	int i = 0; //first element of the array
	int r = n - 1; //last element of the array
while (i < r)
{
	r = a[i];
	i++;
	r--;
}
}
