#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: character to be searched
 * @accept: string being searched in
 * Return: return pionter to s if found and NULL of not
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);

}
