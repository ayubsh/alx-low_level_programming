#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates array memory
 * @nmemb: data the array holds
 * @size: size of the array
 * Return: returns ptr to newly allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return (arr);
}
