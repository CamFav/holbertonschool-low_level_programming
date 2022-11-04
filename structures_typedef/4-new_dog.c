#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct User *new_dog;
	new_dog = malloc(sizeof(dog_t));

	strcpy(*new_dog.name);
	strcpy(*new_dog.owner);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	
	if (new_dog == NULL)
	return (NULL);
}
