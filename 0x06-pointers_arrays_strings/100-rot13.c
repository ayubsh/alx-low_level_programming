#include "main.h"

/**
 * rot13 - encodes letter whith its 13 letter
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; i < 27; i++)
		{
			if (s[i] == alph[j])
			{
				s[i] = r13[j];
			}
		}

		i++;
	}

	return (s);
}
