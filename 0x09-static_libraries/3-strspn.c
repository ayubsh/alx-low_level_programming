#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be located
 * @accept: accepted string
 * Return: returns counts
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, i, cnt;
	char *s1, *s2;

	cnt = 0;
	s1 = s;
	s2 = accept;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s2[j] == s1[i])
			{
				cnt++;
				break;
			}
		}

		if (s[i] != accept[j])
		{
			break;
		}
	}

	return (cnt);
}
