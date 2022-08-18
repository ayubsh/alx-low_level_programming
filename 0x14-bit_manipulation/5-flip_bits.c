#include "main.h"

/**
 * flip_bits - gets the number or bits you need to flip one number to anothe
 * @n: first number
 * @m: second number
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb;

	for (nb = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nb++;
	}

	return (nb);
}
