#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: size 
 * @c: char 
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size = 0 && array == 0)
		return ('\0');

	for (; i < size; i++)
{
	a[i] = c;
}
return (a);
}
