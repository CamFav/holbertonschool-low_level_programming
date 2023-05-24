#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the binary search algorithm.
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Value index, -1 if value not present or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !size || !value)
	{
		return (-1);
	}
	for (i = 0; i < size || i == size - 1; i++)
	{
		printf("Searching in array: %d\n", array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
