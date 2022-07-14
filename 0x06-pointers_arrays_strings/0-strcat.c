#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatinate two string
 * @dest: destination string
 * @src: source string
 * Return: returns the concatineted string
 */

char *_strcat(char *dest, char *src)
{
	int end;
	int i;

	end = 0;

	while (dest[end])
		end++;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[end] = src[i];
		end++;
	}
	dest[end] = '\0';
	return (dest);
}
