#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @size: size of the array
 * @array: array to be interated on
 * @cmp: function ptr that is used to compair
 * Return: returns 1 or -1 or 0 depending on cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}

	return (-1);
}
