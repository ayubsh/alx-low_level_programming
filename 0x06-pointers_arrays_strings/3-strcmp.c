#include "main.h"

/**
 * _strcmp - compaires two string
 * @s1: first string
 * @s2: second string
 * Return: returns diff of the two
 */
int _strcmp(char *s1, char *s2)
{
	char *i, *j;

	i = s2;
	j = s1;

	while (*s1 != '\0' && *s2 != '\0' && *j == *i)
	{
		j++;
		i++;
	}

	return (*j - *i);
}
