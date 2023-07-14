#include <stdio.h>

/**
 * linear_search - searches array linearly
 * @array: ptr to the first element of an array
 * @size: the lenght of the array
 * @value: the value to be searched
 *
 * Return: the index of the value otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if(  array[i] == value)
			return (i);
	}
	return (-1);
}
