#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of char,
 * @size: the size of the array,
 * @c: charcter to be initilized in the array
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
