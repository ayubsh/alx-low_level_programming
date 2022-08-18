#include "main.h"

/**
 * get_bit - gets bit at a given index
 * @index: the index of the bit you want starting from 0
 * @n: is the number to gget a bit form
 * Return: returns value of the bit at the index or -1 when error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nlen;

	if (n == 0 && index < 64)
		return (0);

	for (nlen  = 0; nlen <= 63; n >>= 1, nlen++)
	{
		if (index == nlen)
			return (n & 1);
	}

	return (-1);
}
