#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of the memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
