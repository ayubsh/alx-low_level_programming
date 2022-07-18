#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sums the two diagnol of sqr matrix
 * @size: the size of the matrix
 * @a: sqr matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum_diag1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum_diag2 += *(a + i);
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
