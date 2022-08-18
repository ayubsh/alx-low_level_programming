#include "main.h"

/**
 * set_bit - sets bit at given index
 * @n: the number which its bit to bet set
 * @index: index of the bit to be seted
 * Return: 1 if it workes otherwise -1 when error occures
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s  = 1 << index;
	*n = (*n | s);

	return (1);
}
