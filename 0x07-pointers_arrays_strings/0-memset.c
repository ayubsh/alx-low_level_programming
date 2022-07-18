#include "main.h"

/**
 * _memset - set memory with constant b
 * @s: memory to be seted
 * @b: constant to be seted in the memory
 * @n: number of s to be set
 * Return: return a pionter to the memory of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
