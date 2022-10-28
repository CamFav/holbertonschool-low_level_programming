#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that cretes an array of integers 
 * @min: first
 * @max: last
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i, x;
	int *z;

	if (min > max)
		return (NULL);
	x = ùax - min + 1;
	z = malloc(sizeof(int) * z);
	if (z == NULL)
		return (NULL);
	for (i = 0; i < x; i++, min++)
{
	z[i] = min;
}
return (z);
}






}
