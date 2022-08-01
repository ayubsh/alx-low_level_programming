#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates new dog struct
 * @name: name of the dog (ptr)
 * @age: age of the dog
 * @owner: owner of the dog (ptr)
 * Return: returns ptr to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);



	if (name == NULL || owner == NULL)
		return (NULL);

	puppy->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	strcpy(puppy->name, name);
	puppy->age = age;

	puppy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (puppy->owner == NULL)
	{
		free(puupy->name);
		free(puppy);
		return (NULL);
	}

	strcpy(puppy->owner, owner);

	return (puppy);
}
