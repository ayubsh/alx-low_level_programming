#include "main.h"
/**
 * is_prime_number - checks weather number if prime
 * @n: number to be checked
 * Return: returns 1 if n is and 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}

/**
 * prime_helper - helps checks the prime number
 * @n: number to be checked
 * @m: some guess value
 * Return: the 0 or 1 depending weather n is prime or not
 */
int prime_helper(int n, int m)
{
	if (m >= n && n > 1)
	{
		return (1);
	}
	else if (n % m == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, m + 1));
	}
}
