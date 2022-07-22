#include "main.h"

/**
 * _memcpy - copies memory from src to dest
 * @dest: destination to be copied to
 * @src: source being copied from
 * @n: number of elements to be copied
 * Return: pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
