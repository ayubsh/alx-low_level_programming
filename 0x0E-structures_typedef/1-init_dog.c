#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initilizes the struct dog
 * @d: the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
