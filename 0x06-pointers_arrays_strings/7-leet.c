#include "main.h"

/**
 * leet - encodes characters
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;

	int num[] = {52, 51, 48, 55, 49};
	int cap[] = {97, 101, 111, 116, 108};
	int small[] = {65, 69, 79, 84, 76};

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == cap[j] || s[i] == small[j])
			{
				s[i] = num[j];
			}
		}
		i++;
	}

	return (s);
}
