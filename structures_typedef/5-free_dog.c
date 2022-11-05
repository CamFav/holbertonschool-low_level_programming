#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees everything in the struct.
 * @d: dogs
 *
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
