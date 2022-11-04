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

	if (user == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;
}
