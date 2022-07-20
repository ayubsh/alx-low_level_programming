#include "main.h"

/**
 * factorial - computes the nth factorial
 * @n: nth to be computed
 * Return: returns the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
