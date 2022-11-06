#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - desc
 * @size: size
 * @array: array
 * @cmp: cmp
 *
 * Return: -1 or smth
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	
i
	while (i < size)
{
		if (cmp(array[i]))
			return (i);
		i++;
}
return (-1);
}
