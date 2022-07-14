#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatinate two string
 * @dest: destination string
 * @src: source string
 * @n: number of character to be concat
 * Return: returns the concatineted string
 */

char *_strncat(char *dest, char *src, int n)
{
	int end;
	int i;

	end = 0;

	while (dest[end])
		end++;

	for (i = 0; i < n; i++)
	{
		dest[end] = src[i];
		end++;
	}
	dest[end] = '\0';
	return (dest);
}
