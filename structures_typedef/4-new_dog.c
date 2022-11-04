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
	dog_t *new_dog;
	
	strcpy(new_dog.name, name, sizeof(name))
	strcpy(new_dog.owner, owner, sizeof(owner))

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return new_dog;
}
