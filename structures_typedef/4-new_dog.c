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
	char *new_name = malloc(sizeof(dog_t) * strlen(name)); 
	char *new_owner = malloc(sizeof(dog_t) * strlen(owner));

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	if (new_name == NULL || new_owner == NULL)
{
	free(new_name);
	free(new_owner);
	free(new_dog);
	return (NULL);
}

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
