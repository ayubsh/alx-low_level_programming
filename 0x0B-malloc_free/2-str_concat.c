#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatinate string togther
 * @s1: first string
 * @s2: second string
 * Return: returns pionter to concated string
 */
char *str_concat(char *s1, char *s2)
{
	char *newarr;
	int size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	size = strlen(s1) + strlen(s2) + 1;
	newarr = (char *) malloc(size * sizeof(char));

	if (newarr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		newarr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		newarr[i] = s2[j];
		i++;
	}

	return (newarr);
}
