#include <stdio.h>

/**
 * binary_search - searches element using dive and conquer
 * @array: ptr to the first element of an array
 * @size: the lenght of the array
 * @value: the value to be searched
 *
 * Return: the index of the value otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, i;
	int start = 0, end = size - 1;

	if (array == NULL)
		return (-1);


	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d,", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			end = mid + 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}
