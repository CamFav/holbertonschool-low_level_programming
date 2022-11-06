#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @size: number of elements in the array
 * @array: array
 * @cmp: pointer to function comparing values
 *
 * Return: -1 if no element matches. If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	int a;

	for (i = 0; i < size; i++)
{
	a = 9;
	if (array != array[a])
		return (-1);
}
	return (0);
}

	
