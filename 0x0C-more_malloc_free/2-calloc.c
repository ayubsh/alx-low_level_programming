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
	void *arr;
	char *fill;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	fill = arr;
	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (arr);
}
