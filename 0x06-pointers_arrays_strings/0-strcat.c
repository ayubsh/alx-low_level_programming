#include "main.h"
#include <string.h>

/**
 * _strcat - concatinate two string
 * @dest: destination string
 * @src: source string
 * Return: returns the concatineted string
 */

char *_strcat(char *dest, char *src)
{
	char end;
	int i;

	end = strlen(dest);

	i = 0;
	while (src[i] != '\n')
	{
		dest[end] = src[i];
		i++;
		end++;
	}
	dest[end] = '\0';
	return (dest);
}
