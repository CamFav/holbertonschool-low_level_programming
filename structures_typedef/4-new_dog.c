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
	char *second_name, *second_owner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	second_name = strcpy(name, strlen(name));
	second_owner = strcpy(owner, strlen(owner));

	new_dog->name = second_name;
	new_dog->age = age;
	new_dog->owner = second_owner;

	return (new_dog);
}
