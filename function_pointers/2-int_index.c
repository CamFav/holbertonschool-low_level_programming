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
int int_index(int *array, int size_t size, int (*cmp)(int))
{
	int i = 0;

	if (!array | !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
{
		if (cmp(array[i]))
			return (i);
		i++;
}
return (-1);
i}
