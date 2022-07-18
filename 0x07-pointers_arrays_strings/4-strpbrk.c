#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: character to be searched
 * @accept: string being searched in
 * Return: return pionter to s if found and NULL of not
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}

	return (0);
}
