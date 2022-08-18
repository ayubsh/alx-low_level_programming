#include "main.h"

/**
 * clear_bit - clears bit at given index seting it to 0
 * @n: number from which bit is cleared
 * @index: index of the bit to be cleared
 * Return: returns 1 when it worked or -1 an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s  = 1 << index;

	if (*n & s)
		*n ^= s;

	return (1);
}
