#include "main.h"
/**
 * _sqrt_recursion - finds the square root
 * @n: number to be computed for square root
 * Return: the square roo
 */

int _sqrt_recursion(int n)
{
	return (sqr_helper(n, 1));
}

/**
 * sqr_helper - its helper to the function _sqrt_recursion
 * @n: number to be computed for square root
 * @m: some guess for the root
 * Return: returns the square root
 */

int sqr_helper(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m < n)
	{
		return (sqr_helper(n, m + 1));
	}
	else
	{
		return (-1);
	}
}
