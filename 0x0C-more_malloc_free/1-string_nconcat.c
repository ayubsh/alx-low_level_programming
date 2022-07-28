#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatinaid two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2 to be concatinated
 * Return: ptr to concatinated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int len = n;
	char *memory;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = len + strlen(s1);

	memory = malloc(sizeof(char) * len + 1);

	if (memory == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		memory[len++] = s1[i];
	}

	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		memory[len++] = s2[i];
	}

	memory[len] = '\0';

	return (memory);
}
