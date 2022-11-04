#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: dog
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
{
	printf("Name: %s\n", d->name);
}	else
{
	printf("Name: (nil)\n");
}
	printf("Age: %f\n", d->age);

	if (d != NULL)
{

	printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
}
}
