#include "main.h"

/**
 * swap_int - swaps the input
 * @a: first variable
 * @b: second vaiable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
