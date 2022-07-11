#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copies one string into another
 * @dest: destination string
 * @src: source, string to be copied
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
