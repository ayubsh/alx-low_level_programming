#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
 * _strdup - duplicates string
 * @str: string to be duplicated
 * Return: pointer to duplicated string or null
 */
char *_strdup(char *str)
{
	int len, i;
	char *newarr;

	len = strlen(str);

	newarr = malloc(sizeof(char) * len + 1);

	if (str == NULL || newarr == 0)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		newarr[i] = str[i];
	}

	return (newarr);
}
