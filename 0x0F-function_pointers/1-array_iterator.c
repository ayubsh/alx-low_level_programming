#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates array then calls function on each item
 * @size: size of the array
 * @action: function to be called on each item of the array (ptr)
 * @array: array to be iterated on
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
