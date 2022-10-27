#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memry using malloc
 * @b: memory
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
