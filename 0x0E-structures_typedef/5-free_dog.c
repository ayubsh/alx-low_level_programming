#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog struct
 * @d: the dog struct to be freed
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
