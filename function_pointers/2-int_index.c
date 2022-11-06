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
	int i;

	if (!array | !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0 < size; i++)
{
		if (cmp(array[i]))
			return(i);
}
return (-1);
}
