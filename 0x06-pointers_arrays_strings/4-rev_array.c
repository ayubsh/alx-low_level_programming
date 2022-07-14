#include "main.h"

/**
 * reverse_array - reverses array
 * @a: the array to be reversed
 * @n: length of the arry
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = temp;
	}
}
