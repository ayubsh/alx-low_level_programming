#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * *create_array - creates array in the heap
 * @size: size of the array
 * @c: characters to be filled in the array
 * Return: returns pointer to the array or null
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
